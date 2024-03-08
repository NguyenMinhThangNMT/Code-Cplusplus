#include <iostream>
using namespace std;

class Diem{
  private:
    double x;
    double y;
  public:
    Diem(double x=0,double y=0):x(x),y(y){};
    void xuat();
};

void Diem::xuat(){
    cout<<x<<" , "<<y<<endl;
}

class TamGiac{
    private:
        Diem A,B,C;
    public:
        TamGiac(Diem A,Diem B,Diem C):A(A),B(B),C(C){};
        void xuat();
};

void TamGiac::xuat(){
    A.xuat();
    B.xuat();
    C.xuat();
}

int main()
{
    Diem A(5,5);
    Diem B(6,4);
    Diem C(7,3);
    
    TamGiac tamgiac(A,B,C);
    tamgiac.xuat();

    return 0;
}
