#include <iostream>
using namespace std;

int sum(int a,int b=20){
	int ketqua;
	
	ketqua = a+b;
	return ketqua;
}

int main(void){
	int a=100;
	int b=200;
	int ketqua;
	
	ketqua=sum(a,b);//100+200
	cout<<"Tong co gia tri la : "<<ketqua<<endl;
	
	ketqua=sum(a);//100+20
	cout<<"Tong co gia tri la : "<<ketqua<<endl;
	
	return 0;
}
