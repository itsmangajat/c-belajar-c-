//Nama : Zatnika
//NIM : 41037006191058
#include <iostream>
using namespace std;

int main(){
	int i, y;
	cout<<"Masukkan jumlah bilangan : ";
	cin>>y;
	int x[y];
	for(int i=0; i<y; i++){
		cout<<"Masukkan angka ke "<<i<<" : ";
		cin>>x[i];
		cout<<endl;
	}
	
	for(int i=1; i<y; i++){
		int key = x[i];
		int j = i-1;
		while(j>=0 && x[j] > key){
			x[j+1] = x[j];
			j--;
		}
		x[j+1] = key;
		cout<<"Proses Sorting..."<<endl;
		for(int m=0; m<y; m++){
			cout<<x[m]<<" ";
		}
		cout<<endl;
	} 
	cout<<"hasil Sorting : "<<endl;
	for(int v=0; v<y; v++){
		cout<<x[v]<<" ";
	}
}
