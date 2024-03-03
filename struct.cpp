#include "iostream"
#include "cstring"

using namespace std;

struct Book{
	char tieude[50];
	char theloai[50];
	int id;
};

int main(void){
	struct Book Quyen1;
	struct Book Quyen2;
	
	strcpy(Quyen1.tieude , "Co gai den tu hom qua");
	strcpy(Quyen1.theloai , "Tinh cam");
	Quyen1.id = 1;
	
	cout<<"Tieu de Quyen 1 : "<<Quyen1.tieude<<endl;
	cout<<"Tieu de Quyen 1 : "<<Quyen1.theloai<<endl;
	cout<<"Tieu de Quyen 1 : "<<Quyen1.id<<endl;
	
	
	strcpy(Quyen2.tieude , "Tui thay hoa vang tren co xanh");
	strcpy(Quyen2.theloai , "Thieu nhi");
	Quyen2.id = 2;
	
	
	cout<<"Tieu de Quyen 2 : "<<Quyen2.tieude<<endl;
	cout<<"Tieu de Quyen 2 : "<<Quyen2.theloai<<endl;
	cout<<"Tieu de Quyen 2 : "<<Quyen2.id<<endl;
	
	return 0;
}
