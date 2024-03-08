#include <iostream>
using namespace std;

class TOM{
    private:
        int secretTOM;
    public:
        TOM(int secretTOM=1):secretTOM(secretTOM){};
        void Xuat();
        friend class JERRY;
};

void TOM::Xuat(){
    cout<<secretTOM<<endl;
}

class JERRY{
    private:
        int secretJerry;
    public:
        void changTOM(TOM &secretTOM);
        void Xuat();
};

void JERRY::changTOM(TOM &secretTOM){
    secretTOM.secretTOM=99;
}
void JERRY::Xuat(){
    cout<<secretJerry<<endl;
}

int main()
{
    TOM t1;
    JERRY j1;
    
    t1.Xuat();
    j1.Xuat();
    j1.changTOM(t1);
    t1.Xuat();

    return 0;
}
