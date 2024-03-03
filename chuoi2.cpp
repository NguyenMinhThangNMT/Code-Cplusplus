#include <iostream>
#include <string>

using namespace std;
int main(){
	string chuoi1="Merry ";
	string chuoi2="Christmas";
	string chuoi3;
	int len;
	
	chuoi3=chuoi1;
	cout<<"Chuoi3 bay gio la : "<<chuoi3<<endl;
	
	chuoi3=chuoi1+chuoi2;
	cout<<"Chuoi3 bay gio la : "<<chuoi3<<endl;
	
	len=chuoi3.size();
	cout<<"Do dai Chuoi3 bay gio la : "<<len<<endl;
}
