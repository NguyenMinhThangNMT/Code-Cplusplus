#include <iostream>
#include <string>

using namespace std;

class DocGia{
    protected:
        string maso;
        string hoten;
        int sothang;
    public:
        void Nhap();
        void Xuat();
};

void DocGia::Nhap(){
    cout<<"Nhap ma so: ";
    getline(cin,maso);
    fflush(stdin);
    
    cout<<"Nhap ho ten: ";
    getline(cin,hoten);
    fflush(stdin);
    
    cout<<"Nhap so thang: ";
    cin>>sothang;
    cin.ignore();
}

void DocGia::Xuat(){
    cout<<"Ma so: "<<maso<<endl;
    cout<<"Ho ten: "<<hoten<<endl;
    cout<<"So thang: "<<sothang<<endl;
}



class DocGiaTreEm:DocGia{
    private:
        string Hotennguoigiamho;
    public:
        void Nhap();
        void Xuat();
};

void DocGiaTreEm::Nhap(){
    DocGia::Nhap();
    cout<<"Nhap ten nguoi giam ho: ";
    getline(cin,Hotennguoigiamho);
    fflush(stdin);
}

void DocGiaTreEm::Xuat(){
    DocGia::Xuat();
    cout<<"Ten nguoi giam ho: "<<Hotennguoigiamho;
}


int main()
{
    DocGiaTreEm p1;
    p1.Nhap();
    p1.Xuat();

    return 0;
}
