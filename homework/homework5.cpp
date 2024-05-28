/*
Gereksinimler
1. "Person" (Kişi) adında bir temel sınıf oluşturun.
2. "Person" sinifi, ad ve yaş için özelliklere sahip olmalıdır.
3. "Student" (Öğrenci) ve "Teacher" (Öğretmen) sınıflarını "Person" sınıfından türetin.  

4. "Student" sınıfı, öğrenci numarası için ek bir özelliğe sahip olmalıdır.
5. "Teacher" sınıfı, öğrettikleri ders için ek bir özelliğe sahip olmalıdır.
6. Her sınıf, bilgilerini görüntülemek için bir yönteme sahip olmalıdır.
*/

#include <iostream>
using std::string;
using std::endl;
using std::cout;

class Person{
    private:
        string ad;
        int yas;
    public:
    Person(string ad,int yas){
        this->ad=ad;
        this->yas=yas;
    }
    string getAd(){
        return ad;
    }
    int getYas(){
        return yas;
    }
    void setAd(string value){
        this->ad=value;
    }
    void setYas(int value){
        this->yas=value;
    }
    virtual string to_string(){
        return ad +" - "+std::to_string(yas);
    }
};

class Student :public Person{
    private:
        int ogrNumara;
    public:
    Student(string name,int yas,int ogrnum):Person(name,yas){
        this->ogrNumara=ogrnum;
    }
    int getOgrNumara(){
        return ogrNumara;
    }
    void setOgrNumara(int value){
        this->ogrNumara=ogrNumara;
    }
    string to_string() override{
        return this->getAd()+" - "+std::to_string(this->getYas())+" - "+std::to_string(this->getOgrNumara());
    }

};
class Teacher :public Person{
    private:
        string ders;
    public:
        Teacher(string name,int yas,string ders):Person(name,yas){
            this->ders=ders;
        }
        string getDers(){
            return ders;
        }
        void setDers(string value){
            this->ders=value;
        }
        string to_string() override{
        return this->getAd()+" - "+std::to_string(this->getYas())+" - "+this->getDers();
    }
};
int main(){
    Person item1=Person("ali",20);
    cout << item1.to_string()<<endl;

    Student item2=Student("mehmet",22,212503005);
    cout << item2.to_string()<<endl;
    
    Teacher item3=Teacher("ali",20,"mat");
    cout << item3.to_string()<<endl;
    
    return 0;
}