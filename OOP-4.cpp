#include <iostream>

using namespace std;

class Matrix{
	private:
		int m ,n;
		//Con tro 2 chieu 
		int **a;
	public:
		Matrix(int m =0,int n=0);
		~Matrix();
		void Nhap();
		void Xuat();
};
void Matrix::Nhap(){
	if (m>0 && n >0){
		cout<<"Nhap phan tu cua ma tran"<<endl;
		for (int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
	}
	else{
		cout<<"Nhap so luong phan tu ma tran"<<endl;
		cin>>m>>n;
		//Cap phat nguon nho;
		a = new int *[m];
		for(int i =0;i<m;i++){
			a[i]=new int [n];
		}
		cout<<"Nhap phan tu cua ma tran"<<endl;
		for (int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
	}
}
Matrix::Matrix(int m,int n){
	if(m>0 && n>0){
		this->m=m;
		this->n=n;
		//Cap phat nguon nho m
		a = new int *[m];
		for(int i =0;i<m;i++){
			a[i]=new int [n];
		}	
	}
	else{
		this->m=m;
		this->n=n;
		a=NULL;
	}
	
}
Matrix::~Matrix(){
	cout<<"Da goi ham huy"<<endl;
	for (int i = 0; i < m; i++) {
        delete[] a[i];
    }
    delete[] a;
}
void Matrix::Xuat(){
	cout<<"Gia tri cua Ma tran"<<endl;
	for (int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}
}


int main(){
	Matrix m;
	m.Nhap();
	m.Xuat();
	
}
