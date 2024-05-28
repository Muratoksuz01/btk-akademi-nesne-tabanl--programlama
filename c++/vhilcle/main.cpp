#include<iostream>
using std::string;
using std::cout;
using std::endl;

/*
class Vehicle{
    public:
        string manufactory;
   
};


int main(){

    Vehicle item1=Vehicle();
    item1.manufactory="TOGG";
    std::cout<< "vehicle "<< item1.manufactory <<std::endl;
    char c=getchar();
    return 0;
}
*/

/*
class Vehicle{
    private:
        string manufactory;
    public:
        string getManufactory(){
            return manufactory;
        }
        void setManufactory(string value){
            manufactory=value;
        }
};


int main(){

    Vehicle item1=Vehicle();
    item1.setManufactory("TOGG");
    std::cout<< "vehicle "<< item1.getManufactory() <<std::endl;
    char c=getchar();
    return 0;
}
*/
/*
class Vehicle{
    private:
        string manufactory;
        int year;
        string color;
    public:
        string getManufactory(){
            return manufactory;
        }
        void setManufactory(string value){
            //manufactory=value;
            this->manufactory=value; //             2. metot 
        }
        int getYear() {
            return year;
        }
        void setYear(int value){
            year = value;
        }
        string getColor(){
            return color;
        }
        void setColor(string value){
            this->color=value; 
        }
        Vehicle(){
            std::cout << "\n bir sınıf uretildi";   
        }
        Vehicle(string manufactory,int year,string color):Vehicle()// parametreli bir ifade geldiginde bile yukarıdaki kurucu fok gidip onu caliştirecak once  
        {
            this->manufactory=manufactory;
            this->color=color;
            this->year=year;
        }


};


int main(){

    Vehicle item1=Vehicle();
    item1.setManufactory("TOGG");
    std::cout<< " vehicle "<< item1.getManufactory() <<std::endl;
    
    Vehicle item2= Vehicle("scode",2,"yelloe");
    std::cout<< " vehicle "<< item2.getManufactory() <<std::endl;

    char c=getchar();
    
    
    return 0;
}
*/
/* onemli derslerden bir tanesi en alttaaki class tan en uste  parametre gondermek kendimizi takrar etmeden 
class Vehicle{
    protected:
        string manufactory;
        int year;
        string color;
    public:
        string getManufactory(){
            return manufactory;
        }
        void getAllInfo(){
            cout << "vhicle sınıfında bu fok yazdım sımdı bilgiler fabrika:" << this->manufactory<< " renk:" << this->color<<" yil :"<< this->year<< endl;
        }
        void setManufactory(string value){
            //manufactory=value;
            this->manufactory=value; //             2. metot 
        }
        int getYear() {
            return year;
        }
        void setYear(int value){
            year = value;
        }
        string getColor(){
            return color;
        }
        void setColor(string value){
            this->color=value; 
        }
        Vehicle(){
            std::cout << "\n bir sınıf uretildi bır vehicle sııfından ";   
        }
        Vehicle(string manufactory,int year,string color):Vehicle()// parametreli bir ifade geldiginde bile yukarıdaki kurucu fok gidip onu caliştirecak once  
        {
            this->manufactory=manufactory;
            this->color=color;
            this->year=year;
        }
        void start(){
            std::cout <<"araba basladi ";
        }
        void stop(){
            std::cout <<"araba durdu ";
        }
        void drive(){
            std::cout <<"araba surulıyor ";
        }
        

};

class Car : public Vehicle{
   
    public:
        Car(){
                    std::cout << "\n bir sınıf uretildi car sınıfından ";   
        }
        Car(string manufactory,int year,string color):Car()// parametreli bir ifade geldiginde bile yukarıdaki kurucu fok gidip onu caliştirecak once  
            {
                std::cout << "\n bir sınıf uretildi car  parametrelerle sınıfından ";   
  
             //   this->manufactory=manufactory;// bu bilgilere erişmek icin vehicle sınıfnı dan burayı protected yaptık 
              //  this->color=color;            //private ozelligi sadece o sınıf kullanabilr anlamında 
               // this->year=year;
            }
        void openSunRoof(){
            cout<<"araba roof acık " <<endl;
        }
};
class Track : public Vehicle{
   
    public:
        Track(){
                    std::cout << "\n bir sınıf uretildi Track sınıfından ";   
        }
        Track(string manufactory,int year,string color):Track()// parametreli bir ifade geldiginde bile yukarıdaki kurucu fok gidip onu caliştirecak once  
            {
                std::cout << "\n bir sınıf uretildi Track  parametrelerle sınıfından ";   
  
             //   this->manufactory=manufactory;// bu bilgilere erişmek icin vehicle sınıfnı dan burayı protected yaptık 
              //  this->color=color;            //private ozelligi sadece o sınıf kullanabilr anlamında 
               // this->year=year;
            }
        void transport(){
            cout<<"tasıma işi yapılıyor track sınıfı transport foksiyonu" <<endl;
        }
};
class Bus :public Vehicle{
 public:
        Bus(){
                    std::cout << "\n bir sınıf uretildi Bus sınıfından ";   
        }
        Bus(string manufactory,int year,string color):Vehicle(manufactory,year,color)// parametreli bir ifade geldiginde bile yukarıdaki kurucu fok gidip onu caliştirecak once  
            {
                std::cout << "\n bir sınıf uretildi Bus  parametrelerle sınıfından ";   
  
             //   this->manufactory=manufactory;// bu bilgilere erişmek icin vehicle sınıfnı dan burayı protected yaptık 
              //  this->color=color;            //private ozelligi sadece o sınıf kullanabilr anlamında 
               // this->year=year;
            }
        void scheduling(){
            cout<<"bus sınıfı scheduling foksiyonu calişiyor " <<endl;
        }
};
class SchoolBus :public Bus{
 public:
        SchoolBus(){
                    std::cout << "\n bir sınıf uretildi SchoolBus sınıfından ";   
        }
        SchoolBus(string manufactory,int year,string color):Bus(manufactory,year,color)//   
            {
                std::cout << "\n bir sınıf uretildi SchoolBus  parametrelerle sınıfından ";   
  
             //   this->manufactory=manufactory;// yapsak yapılır fakat kendimiz itekrar etmiş oluruz bunun icin parametreleri bir ust sınıfa yanı bus gonderdik orasıda bunu en tepedeki classsa yani vehicle claasa verdi 
              //  this->color=color;           
               // this->year=year;
            }
        void getfare(){
            cout<<"schoolbus sınıfı getfare foksiyonu  " <<endl;
        }
};



int main(){

  
    // Vehicle item2= Vehicle("scode",2,"yelloe");
    // std::cout<< ":foksion: vehicle "<< item2.getManufactory() <<std::endl;

    // Car item3=Car();// car sınıfı vhivle ya baglı oldugundan olustugunda ilk once vehicle dan bir nesne olusur sonra burası calişir 
    // item3.setManufactory("TOGG");
    // std::cout<< ":foksion: vehicle "<< item3.getManufactory() <<std::endl;
    //item3.openSunRoof();

    // Car item4= Car("opel ",2,"black");
    // std::cout<< ":foksion: vehicle "<< item4.getManufactory() <<std::endl;

    Track item1=Track();
    item1.drive();
    item1.transport();
    cout << ":foksiyon:" <<item1.getManufactory() << endl;
    item1.getAllInfo();
    cout <<"---------------"<<endl;
    Bus item2=Bus();
    item2.setManufactory("opel");
    item2.scheduling();
    //cout << ":foksiyon:" <<item1.getManufactory() << endl;
    item2.getAllInfo();
    cout <<"---------------"<<endl;

    SchoolBus item3=SchoolBus(); //her olusturdugunda en tepedeki class tan baslıyıp bu foksiyonlara kadar calisarak geliyor 
    item3.getfare();
    item3.getAllInfo();
    cout <<"---------------"<<endl;
    SchoolBus item4=SchoolBus("reno",2,"yellow");
    item4.getAllInfo();
    item4.setColor("green");
    item4.getAllInfo();

    char c=getchar();
    return 0;
}
*/
/*override işlemleri yapıldı
class Vehicle{
    private:
        string manufactory;
        int year;
        string color;
    public:
        string getManufactory(){
            return manufactory;
        }
        void getAllInfo(){
            cout << "vhicle sınıfında bu fok yazdım sımdı bilgiler fabrika:" << this->manufactory<< " renk:" << this->color<<" yil :"<< this->year<< endl;
        }
        void setManufactory(string value){
            //manufactory=value;
            this->manufactory=value; //             2. metot 
        }
        int getYear() {
            return year;
        }
        void setYear(int value){
            year = value;
        }
        string getColor(){
            return color;
        }
        void setColor(string value){
            this->color=value; 
        }
        Vehicle(){
            std::cout << "\n bir sınıf uretildi bır vehicle sııfından ";   
        }
        Vehicle(string manufactory,int year,string color):Vehicle()// parametreli bir ifade geldiginde bile yukarıdaki kurucu fok gidip onu caliştirecak once  
        {
            this->manufactory=manufactory;
            this->color=color;
            this->year=year;
        }
        virtual void start(){ //virtual anahtar kelimesi bu foksiyonun asagıki classlarda  override yapılabilr demek tir 
            std::cout <<"araba basladi ";
        }
        virtual void stop(){  //ama yapmak zornlu egil tabiki 
            std::cout <<"araba durdu ";
        }
        virtual void drive(){
            std::cout <<"araba surulıyor ";
        }
        

};

class Car : public Vehicle{
   
    public:
        Car(){
                    std::cout << "\n bir sınıf uretildi car sınıfından ";   
        }
        Car(string manufactory,int year,string color):Vehicle(manufactory,year,color)// parametreli bir ifade geldiginde bile yukarıdaki kurucu fok gidip onu caliştirecak once  
            {
                std::cout << "\n bir sınıf uretildi car  parametrelerle sınıfından ";   
  
             //   this->manufactory=manufactory;// bu bilgilere erişmek icin vehicle sınıfnı dan burayı protected yaptık 
              //  this->color=color;            //private ozelligi sadece o sınıf kullanabilr anlamında 
               // this->year=year;
            }
        void openSunRoof(){
            cout<<"araba roof acık " <<endl;
        }
        void drive() override {
            cout << "the car manufactory by"<<this->getManufactory()<< "is draving now"<< endl;
        }
};
class Track : public Vehicle{
   
    public:
        Track(){
                    std::cout << "\n bir sınıf uretildi Track sınıfından ";   
        }
        Track(string manufactory,int year,string color):Vehicle(manufactory,year,color)// parametreli bir ifade geldiginde bile yukarıdaki kurucu fok gidip onu caliştirecak once  
            {
                std::cout << "\n bir sınıf uretildi Track  parametrelerle sınıfından ";   
  
             //   this->manufactory=manufactory;// bu bilgilere erişmek icin vehicle sınıfnı dan burayı protected yaptık 
              //  this->color=color;            //private ozelligi sadece o sınıf kullanabilr anlamında 
               // this->year=year;
            }
        void transport(){
            cout<<"tasıma işi yapılıyor track sınıfı transport foksiyonu" <<endl;
        }
        void drive() override {
            cout << "the track manufactory by"<<this->getManufactory()<< "is draving now"<< endl;
        }
};
class Bus :public Vehicle{
 public:
        Bus(){
                    std::cout << "\n bir sınıf uretildi Bus sınıfından ";   
        }
        Bus(string manufactory,int year,string color):Vehicle(manufactory,year,color)// parametreli bir ifade geldiginde bile yukarıdaki kurucu fok gidip onu caliştirecak once  
            {
                std::cout << "\n bir sınıf uretildi Bus  parametrelerle sınıfından ";   
  
             //   this->manufactory=manufactory;// bu bilgilere erişmek icin vehicle sınıfnı dan burayı protected yaptık 
              //  this->color=color;            //private ozelligi sadece o sınıf kullanabilr anlamında 
               // this->year=year;
            }
        void scheduling(){
            cout<<"bus sınıfı scheduling foksiyonu calişiyor " <<endl;
        }
        void drive() override {
            cout << "the Bus manufactory by"<<this->getManufactory()<< "is draving now"<< endl;
        }
};
class SchoolBus :public Bus{
 public:
        SchoolBus(){
                    std::cout << "\n bir sınıf uretildi SchoolBus sınıfından ";   
        }
        SchoolBus(string manufactory,int year,string color):Bus(manufactory,year,color)//   
            {
                std::cout << "\n bir sınıf uretildi SchoolBus  parametrelerle sınıfından ";   
  
             //   this->manufactory=manufactory;// yapsak yapılır fakat kendimiz itekrar etmiş oluruz bunun icin parametreleri bir ust sınıfa yanı bus gonderdik orasıda bunu en tepedeki classsa yani vehicle claasa verdi 
              //  this->color=color;           
               // this->year=year;
            }
        void getfare(){
            cout<<"schoolbus sınıfı getfare foksiyonu  " <<endl;
        }
};



int main(){

    Car item1=Car("arac 1",2020,"black");
    item1.drive();

    Track item2=Track("arac 2",2020,"black");
    item2.drive();

    Bus item3=Bus("arac 3",2020,"black");
    item3.drive();
    item3.start();// biz burada start foksiyonunu override yapmadık bu yuzden atasının foksiynunu kullanacak 

    SchoolBus item4=SchoolBus("arac 4",2020,"black");
    item4.drive();//suan da School bus class ında override yapmadık bu yuzden school bus onun atasının izinden gidiyor 
    // eklersen ama kendi drive fok caliştiracaktır 
   

    char c=getchar();
    return 0;
}
*/
class Vehicle{
    private:
        string manufactory;
        int year;
        string color;
    public:
        string getManufactory(){
            return manufactory;
        }
       
        void setManufactory(string value){
            //manufactory=value;
            this->manufactory=value; //             2. metot 
        }
        int getYear() {
            return year;
        }
        void setYear(int value){
            year = value;
        }
        string getColor(){
            return color;
        }
        void setColor(string value){
            this->color=value; 
        }
        Vehicle(){
            std::cout << "\n bir sınıf uretildi bır vehicle sııfından ";   
        }
        Vehicle(string manufactory,int year,string color):Vehicle()// parametreli bir ifade geldiginde bile yukarıdaki kurucu fok gidip onu caliştirecak once  
        {
            this->manufactory=manufactory;
            this->color=color;
            this->year=year;
        }
        virtual void start(){ //virtual anahtar kelimesi bu foksiyonun asagıki classlarda  override yapılabilr demek tir 
            std::cout <<"araba basladi \n";
        }
        virtual void stop(){  //ama yapmak zornlu egil tabiki 
            std::cout <<"araba durdu \n";
        }
        virtual void drive(){
            std::cout <<"araba surulıyor ";
        }
        virtual string to_string(){
            return manufactory +" - "+std::to_string(year)+" - "+color;
        }
};

class Car : public Vehicle{
   
    public:
        Car(){
                    std::cout << "\n bir sınıf uretildi car sınıfından ";   
        }
        Car(string manufactory,int year,string color):Vehicle(manufactory,year,color)// parametreli bir ifade geldiginde bile yukarıdaki kurucu fok gidip onu caliştirecak once  
            {
                std::cout << "\n bir sınıf uretildi car  parametrelerle sınıfından ";   
  
             //   this->manufactory=manufactory;// bu bilgilere erişmek icin vehicle sınıfnı dan burayı protected yaptık 
              //  this->color=color;            //private ozelligi sadece o sınıf kullanabilr anlamında 
               // this->year=year;
            }
        void openSunRoof(){
            cout<<"araba roof acık " <<endl;
        }
        void drive() override {
            cout << "the car manufactory by"<<this->getManufactory()<< "is draving now"<< endl;
        }
};
class Track : public Vehicle{
   
    public:
        Track(){
                    std::cout << "\n bir sınıf uretildi Track sınıfından ";   
        }
        Track(string manufactory,int year,string color):Vehicle(manufactory,year,color)// parametreli bir ifade geldiginde bile yukarıdaki kurucu fok gidip onu caliştirecak once  
            {
                std::cout << "\n bir sınıf uretildi Track  parametrelerle sınıfından ";   
  
             //   this->manufactory=manufactory;// bu bilgilere erişmek icin vehicle sınıfnı dan burayı protected yaptık 
              //  this->color=color;            //private ozelligi sadece o sınıf kullanabilr anlamında 
               // this->year=year;
            }
        void transport(){
            cout<<"tasıma işi yapılıyor track sınıfı transport foksiyonu" <<endl;
        }
        void drive() override {
            cout << "the track manufactory by"<<this->getManufactory()<< "is draving now"<< endl;
        }
};
class Bus :public Vehicle{
 public:
        Bus(){
                    std::cout << "\n bir sınıf uretildi Bus sınıfından ";   
        }
        Bus(string manufactory,int year,string color):Vehicle(manufactory,year,color)// parametreli bir ifade geldiginde bile yukarıdaki kurucu fok gidip onu caliştirecak once  
            {
                std::cout << "\n bir sınıf uretildi Bus  parametrelerle sınıfından ";   
  
             //   this->manufactory=manufactory;// bu bilgilere erişmek icin vehicle sınıfnı dan burayı protected yaptık 
              //  this->color=color;            //private ozelligi sadece o sınıf kullanabilr anlamında 
               // this->year=year;
            }
        void scheduling(){
            cout<<"bus sınıfı scheduling foksiyonu calişiyor " <<endl;
        }
        void drive() override {
            cout << "the Bus manufactory by"<<this->getManufactory()<< "is draving now"<< endl;
        }
};
class SchoolBus :public Bus{
 public:
        SchoolBus(){
                    std::cout << "\n bir sınıf uretildi SchoolBus sınıfından ";   
        }
        SchoolBus(string manufactory,int year,string color):Bus(manufactory,year,color)//   
            {
                std::cout << "\n bir sınıf uretildi SchoolBus  parametrelerle sınıfından ";   
  
             //   this->manufactory=manufactory;// yapsak yapılır fakat kendimiz itekrar etmiş oluruz bunun icin parametreleri bir ust sınıfa yanı bus gonderdik orasıda bunu en tepedeki classsa yani vehicle claasa verdi 
              //  this->color=color;           
               // this->year=year;
            }
        void getfare(){
            cout<<"schoolbus sınıfı getfare foksiyonu  " <<endl;
        }
};



int main(){

    Car item1=Car("arac 1",2020,"black");
    item1.drive();
    cout<<item1.to_string()<<endl;
    
    Track item2=Track("arac 2",2020,"black");
    item2.drive();
    cout<<item2.to_string()<<endl;
    
    Bus item3=Bus("arac 3",2020,"black");
    item3.drive();
    item3.start();// biz burada start foksiyonunu override yapmadık bu yuzden atasının foksiynunu kullanacak 
    cout<<item3.to_string()<<endl;
    
    SchoolBus item4=SchoolBus("arac 4",2020,"black");
    item4.drive();//suan da School bus class ında override yapmadık bu yuzden school bus onun atasının izinden gidiyor 
    // eklersen ama kendi drive fok caliştiracaktır 
   cout<<item4.to_string()<<endl;

    char c=getchar();
    return 0;
}





