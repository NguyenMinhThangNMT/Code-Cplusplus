#include "iostream"

using namespace std;

class Diem{
	private :
		float x,y;
	public:
		void Xuat();
		Diem(float x =0 , float y = 0):x(x),y(y){};
};
void Diem::Xuat(){
	cout<<x<<","<<y<<endl;
}

int main(void){
	Diem p(3,2);
	p.Xuat(); 
	
	Diem *p1 = &p;
	p1->Xuat();
	
	Diem *p2= new Diem(2,5);
	p2->Xuat();
	
	return 0;
}
