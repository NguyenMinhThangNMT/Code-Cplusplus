#include <iostream>

using namespace std;
const int MAX = 4;

int main(void){
	char *tensv[MAX]={
		"Messi",
		"Ronaldo",
		"Neymar",
		"Ka ka"
	};
	for(int i =0;i<MAX;i++){
		cout<<"Gia tri cua tensv ["<<i<<"] = ";
		cout<<tensv[i]<<endl;
	}
	return 0;
}
