/*
Oyun Senaryosu: Taş-Kağıt-Makas Oyunu
Bu senaryoda, oyuncunun bilgisayara karşı taş, kağıt, makas oyununu oynadığı bir konsol uygulaması tasarlanacaktır.

Oyun Uygulaması - Gereksinimler:

Abstract Sınıfların Kullanımı:

Player: Oyuncunun temel özelliklerini ve davranışlarını içeren abstract sınıf.
ComputerPlayer: Bilgisayar oyuncusunun temel özelliklerini ve davranışlarını içeren abstract sınıf.
Ortak Davranışların Tanımı:

Player ve ComputerPlayer sınıfları, oyuncu adını ve seçilen hamleyi (taş, kağıt, makas) içeren ortak davranışları tanımlayacak.
Polimorfizm:

Oyuncuların (oyuncu ve bilgisayar) farklı hamle stratejileri olacak.
Her iki oyuncu türü de aynı abstract davranışları uygulayacak, ancak kendi özel hamle stratejilerini kullanacak.
Alt Sınıflar Arasında Kod Paylaşımı:

HumanPlayer sınıfı, Player sınıfından türetilerek oyuncunun adını alacak ve hamle yapma stratejisini uygulayacak.
RandomComputerPlayer sınıfı, ComputerPlayer sınıfından türetilerek bilgisayarın rastgele hamle yapma stratejisini uygulayacak.
Konsol Ortamı:

Kullanıcıya hamle seçenekleri sunulacak ve girdi alınacak.
Oyuncuların hamleleri ve sonuçları konsol üzerinde gösterilecek.
Gereksinimler:

Oyuncuların isimleri giriş olarak istenecek.
Kullanıcıya taş, kağıt veya makas seçenekleri sunulacak.
Bilgisayar rastgele bir hamle yapacak.
Oyuncuların ve bilgisayarın hamleleri ekrana yazdırılacak.
Hamle sonucu (kazanan, kaybeden veya berabere) açıklanacak.
Oyuncuların puanları takip edilecek.
Oyunun bir turu sona erdiğinde kullanıcıya devam etmek isteyip istemediği sorulacak.
Kullanıcı oyunu sonlandırmak istediğinde toplam puanlar ekrana yazdırılacak.
Oyun boyunca yapılan hamleler kaydedilecek ve geçmiş hamleler görüntülenebilecek.
Oyun içindeki farklı oyuncu tipleri için stratejiler belirlenebilecek.
Bu örnekte, taş-kağıt-makas oyununu konsol ortamında gerçekleştiren bir uygulama tasarımı görülmektedir. Abstract sınıfların, ortak davranışların, polimorfizmin ve kod paylaşımının nasıl kullanılabileceği örnek bir uygulama olarak tasarlanmıştır.

İstediğiniz her hangi bir dilde kodlama yapabilirsiniz. Hazırladığınız çözümleri discord kanalında eğitimi alan diğer kursiyerlerle paylaşabilirsiniz*/
#include <iostream>
#include <cstdlib> // rand ve srand fonksiyonları için gerekli
#include <ctime> 

using namespace std;

// Hamle enum'u
enum Choice {
    ROCK, PAPER, SCISSORS
};

// Oyuncu sınıfı
class Player {
protected:
    string name;
    Choice choice;

public:
    Player(string name) : name(name) {}

    string getName() const { return name; }

    void setName(string name) { this->name = name; }

    virtual Choice getChoice() = 0;
        // Bu fonksiyon alt sınıflarda override edilecek
    

    void printChoice() {
        switch (choice) {
            case ROCK:
                cout << name << " Taş seçti!" << endl;
                break;
            case PAPER:
                cout << name << " Kağıt seçti!" << endl;
                break;
            case SCISSORS:
                cout << name << " Makas seçti!" << endl;
                break;
        }
    }

    void setChoice(Choice choice) { this->choice = choice; }
};

// Bilgisayar Oyuncusu
class ComputerPlayer : public Player {
public:
    ComputerPlayer(string name) : Player(name) {}

    Choice getChoice() override {
        // Rastgele hamle seçimi
        srand(time(NULL)); // Her seferinde farklı tohum değeri için
        int randomChoice = rand() % 3;
        setChoice((Choice)randomChoice);
        return choice;
    }
};
class HumanPlayer : public Player {
public:
    HumanPlayer(string name) : Player(name) {}

    Choice getChoice() override {
        // Kullanıcıdan hamle al
        int choiceInt;
        do {
            cout << "Taş (1), Kağıt (2), Makas (3) seçin: ";
            cin >> choiceInt;
        } while (choiceInt < 1 || choiceInt > 3);
        setChoice((Choice)(choiceInt - 1)); // 1'den 3'e dönüştür
        return choice;
    }
};

// Oyuncu vs Bilgisayar Oyuncusu
int main() {
    // Oyuncu isimleri
    string playerName, computerName = "Bilgisayar";
    cout << "Oyuncu isminizi girin: ";
    cin >> playerName;

    // Oyuncular
    Player* player = new HumanPlayer(playerName);
    Player* computer = new ComputerPlayer(computerName);

    // Oyun döngüsü
    int playerScore = 0, computerScore = 0;
    string playAgain;
    do {
        // Hamleler
        player->getChoice();
        computer->getChoice();

        // Hamleleri yazdır
        player->printChoice();
        computer->printChoice();

        // Kazananı belirle
        int result = 0; // 0: Berabere, 1: Oyuncu Kazandı, 2: Bilgisayar Kazandı
        if (player->getChoice() == computer->getChoice()) {
            result = 0;
            cout << "Berabere!" << endl;
        } else if ((player->getChoice() == ROCK && computer->getChoice() == SCISSORS) ||
                   (player->getChoice() == PAPER && computer->getChoice() == ROCK) ||
                   (player->getChoice() == SCISSORS && computer->getChoice() == PAPER)) {
            result = 1;
            playerScore++;
            cout << playerName << " Kazandı!" << endl;
        } else {
            result = 2;
            computerScore++;
            cout << computerName << " Kazandı!" << endl;
        }

        // Puanları güncelle
        cout << "Puanlar: " << playerName << ": " << playerScore << ", " << computerName << ": " << computerScore << endl;

        // Tekrar oynama isteği
        cout << "Tekrar oynamak ister misiniz? (evet/hayır): ";
        cin >> playAgain;
    } while (playAgain == "evet");

    // Oyun bittiğinde
    cout << "\nOyun bitti!" << endl;
    cout << playerName << " " << playerScore << " puan aldı." << endl;
    cout << computerName << " " << computerScore << " puan aldı." << endl;

    delete player;
    delete computer;

    return 0;
}




