#include <iostream>
using namespace std;

void func(void);
static int dem=10;


int main(){
	while(dem--){
		func();
	}
}

void func(void){
	static int i=5;
	i++;
	cout<<"i co gia tri la "<<i;
	cout<<" va dem co gia tri la "<<dem<<endl;
}

//Neu khong co static thi bien toan cuc van giam nhung con bien cuc thi khong//
