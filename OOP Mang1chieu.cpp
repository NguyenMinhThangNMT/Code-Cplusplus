#include <iostream>
using namespace std;

class mang1chieu{
    private:
        int n;
        int *a;
    public:
        mang1chieu(int n = 0);//Ham dung
        void xuat();
        void nhap();
        ~mang1chieu();//Ham huy
};

mang1chieu::mang1chieu(int n){
    this->n = n;
    if(n == 0){
        a=NULL;
    }
    else {
        a=new int [n];//cap phat dong bo nho
    }
}

void mang1chieu::xuat(){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void mang1chieu::nhap(){
   if(n==0){
        cout<<"Nhap so luong phan tu :";
        cin>>n;
        a=new int [n];
   }
    cout<<"Nhap gia tri cac phan tu :";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
mang1chieu::~mang1chieu(){
    delete []a;
    a=NULL;
}

int main()
{
    mang1chieu m;
    m.nhap();
    m.xuat();

    return 0;
}
