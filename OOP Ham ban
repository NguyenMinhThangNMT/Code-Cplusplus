#include <iostream>
using namespace std;

class Diem{
    private:
        double x;
        double y;
    public:
        Diem(double x=0,double y=0):x(x),y(y){};
        bool trung(Diem u);
        friend bool trung(Diem u,Diem v);// ham ban
};

bool trung(Diem u,Diem v){//Ham ban
    if(u.x==v.x && u.y == v.y){
        return true;
    }
    return false;
}

bool Diem::trung(Diem u){
    if(this->x==u.x && this->y==u.y){
        return true;
    }
    return false;
}

int main()
{
    Diem p1(1,1);
    Diem p2(1,1);
    
    cout<<p1.trung(p2)<<endl;
    cout<<trung(p1,p2)<<endl;//Ham ban
    return 0;
}
