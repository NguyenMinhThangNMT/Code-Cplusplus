#include <iostream>

using namespace std;

class Diem{
	private :
		float x,y;
	public:
		void Khoitao(float xx,float yy);
		void Nhap();
		void Xuat();
		void Dichuyen(float dx,float dy);
};

void Diem::Khoitao(float xx,float yy){
	x=xx;
	y=yy;
}
void Diem::Nhap(){
	cout<<"Nhap gia tri x :";cin>>x;
	cout<<"Nhap gia tri y :";cin>>y;
}
void Diem::Xuat(){
	cout<<"Toa do cua x : "<<x<<endl;
	cout<<"Toa do cua y : "<<y<<endl;
}
void Diem::Dichuyen(float dx,float dy){
	x +=dx;
	y +=dy;
}
int main(void){
	Diem p1;
	p1.Khoitao(0,0);
	p1.Nhap();
	p1.Xuat();
	p1.Dichuyen(8,8);
	p1.Xuat();
	
	return 0;
}
