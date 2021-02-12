//Nama : Zatnika
//NIM : 41037006191058
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int data[10];
	int i, j, k, tmp, jumlah=0;
	cout<<"PROGRAM PENGURUTAN BUBBLE SORT"<<endl;
	cout<<"Masukkan jumlah bilangan : ";
	cin>>k;
	
	for(i=0; i<k; i++){
		cout<<"Masukkan angka Ke-"<<(i+1)<<":";
		cin>>data[i];
		jumlah=jumlah+data[i];

	}
	
	cout<<"\nData sebelum diurutkan : "<<endl;
	
	for(i=0; i<k; i++){
		cout<<data[i]<<" ";
	}
	cout<<endl;

for(i=0; i<k; i++){
	for(j=i+1; j<k; j++){
		if(data[i]>data[j]){
			tmp=data[i];
			data[i]=data[j];
			data[j]=tmp;
		}
	}
}

cout<<"\nData setelah diurutkan : "<<endl;
for(i=0; i<k; i++){
			cout<<data[i]<<" ";
}

cout<<"\nData setelah diurutkan(Genap) : "<<endl;
for(i=0; i<k; i++){
	if(data[i]%2==0){
		cout<<data[i]<<" ";
	}
}

cout<<"\nData setelah diurutkan(Ganjil) : "<<endl;
for(i=0; i<k; i++){
	if(data[i]%2!=0){
		cout<<data[i]<<" ";
	}
}

	cout<<"\nJumlah dari Bilangan : "<<jumlah;
return 0;
}

	
