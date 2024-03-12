#include <iostream>
using namespace std;
class Shape{
    public:
        int w,h;
        Shape(int w=0,int h=0){
            this->w=w;
            this->h=h;
        }
        //Them tu khoa virtual vao co tinh nang da hinh
        virtual void area(){
            cout<<"Can't Calculate area"<<endl;
        }
};

class Rectangle:public Shape{
    public:
        Rectangle(int w,int h):Shape(w,h){};//Ke thua ham dung
        void area(){
            cout<<"Rectangle area : "<<w*h<<endl;
        }
};

class Triangle:public Shape{
    public:
        Triangle(int w,int h):Shape(w,h){};//Ke thuc ham dung 
        void area(){
            cout<<"Triangle area : "<<(float)1/2*w*h<<endl;
        }
};

int main()
{
    //Tinh don hinh
    Triangle t(1,2);
    Rectangle r(2,2);
    t.area();
    r.area();
    
    //Tinh da hinh(mot biet the hien nhieu hinh)
    Shape *shape;
    
    shape=new Shape(1,2);
    shape->area();
    delete shape;
    
    shape = new Rectangle(2,2);
    shape->area();
    delete shape;
    
    shape = new Triangle(1,2);
    shape->area();
    delete shape;
    

    return 0;
}
