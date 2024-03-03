#include "iostream"

using namespace std;

class Diem{
	private:
		double x,y;
	public:
		void Xuat();
		Diem(double x =0,double y =0):x(x),y(y){};
		Diem(Diem &u);
};

void Diem::Xuat(){
	cout<<x<<","<<y<<endl;
}
Diem::Diem(Diem &u){
	cout<<"Ham sao chep da duoc thiet lap"<<endl;
	this->x=u.x;
	this->y=u.y;
}

int main(){
	Diem p(2,2);
	p.Xuat();
	//ham thiet lap sao chep
	Diem p1 =p;
	p1.Xuat();
	
	//Phep gan
	Diem p2;
	p2=p;
	p2.Xuat();
	return 0;
}
