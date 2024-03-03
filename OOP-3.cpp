#include <iostream>
using namespace std;
class mang1chieu{
	private:
		int n;
		int *a;
	public:
		//Khai bao mang 0 phan tu
		mang1chieu(int n =0);
		//Ham huy cua mang
		~mang1chieu();
		void Nhap();
		void Xuat();
};

void mang1chieu::Nhap(){
	//Neu n =0 nhap so luong phan tu
	if(n==0){
		cout<<"Nhap so luong phan : "; 
		cin>>n;
	} 
	cout<<"Nhap gia tri cac phan tu "<<endl;
	//Nhap gia tri cua mang
	a=new int[n];
	for(int i =0;i<n;i++){
		cin>>a[i];
	}
}
mang1chieu::~mang1chieu(){
	cout<<"Da goi ham huy"<<endl;
	delete []a;
	a=NULL;
}
mang1chieu::mang1chieu(int n){
	//n private = n public
	this->n=n;
	if(n == 0) a=NULL;
	else{
		a=new int [n];
	}
}

void mang1chieu::Xuat(){
	for(int i =0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main(){
	mang1chieu m(0);
	m.Nhap();
	m.Xuat();
	
	
	
}
