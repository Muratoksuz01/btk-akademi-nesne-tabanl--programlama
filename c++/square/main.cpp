#include <iostream>
using std::string;
using std::cout;
using std:: endl;
/* ders1 abstract sınıf tanımlama ve onu işleme
class Shape{
    protected:
        int x;
        int y;
    public:
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
    void setX(int value){
        x=value;
    }
    void setY(int value){
        y=value;
    }
    Shape(int x,int y){
        this->x=x;
        this->y=y;
    }
    virtual void draw()=0;// s++ da abstrack sınıf boyle olusturuluyor 
};
class Triagle :public Shape{
    public:
        Triagle(int x,int y):Shape(x,y){

        }

        
        void draw() override
        {
            cout << "ucgen olusturldu"<< endl;
        }
};



int main(){
    Triagle item1=Triagle(3,5);
    item1.draw();



    char c=getchar();
    return 0;
}
*/









class Shape{
    protected:
        int x;
        int y;
    public:
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
    void setX(int value){
        x=value;
    }
    void setY(int value){
        y=value;
    }
    Shape(int x,int y){
        this->x=x;
        this->y=y;
    }
    virtual void draw()=0;// s++ da abstrack sınıf boyle olusturuluyor 
};
class Triagle :public Shape{
    public:
        Triagle(int x,int y):Shape(x,y){

        }

        
        void draw() override
        {
            cout << "triagle "<< this->getX() <<" and "<< this->getY()<<" olusturldu"<< endl;
        }
};
class Rectangle :public Shape{
    public:
        Rectangle(int x,int y):Shape(x,y){

        }

        
        void draw() override
        {
            cout << "Rectangle "<< this->getX() <<" and "<< this->getY()<<" olusturldu"<< endl;
        }
};

class Square :public Triagle{
    public:
    Square(int x):Triagle(x,x){

    }
     void draw() override
        {
            cout << "Square  "<< this->getX() <<" and "<< this->getY()<<" olusturldu"<< endl;
        }
};

int main(){
    Triagle item1=Triagle(3,5);
    Rectangle item2=Rectangle(6,8);
    Square item3= Square(5);
    item1.draw();
    item2.draw();
    item3.draw();



    char c=getchar();
    return 0;
}












