//Nama : Zatnika
//NIM : 41037006191058
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main(){
		int x[10]
	int i, j, bd, temp, miniindex;
	
	cout<<" PROGRAM SELECTION SORT \n"<<endl;
	
	cout<<"\nMasukkan Jumlah Data dengan Maks[10] : ";
	cin>>bd;
	for(i=1; i<=bd; i++){
		cout<<"Masukkan Nilai Ke"<<i<<" = "; cin>>x[i];
	}
	
	cout<<"\nData sebelum diurut : ";
	for(i=1; i<=bd; i++){
		cout<<"\n"<<x[i];
	}
	for(i=1; i<=bd-1; i++){
		miniindex=i;
		for(j=i+1; j<=bd; j++){
			if(x[miniindex]>x[j]){
					miniindex=j;
			}
	}
			temp=x[i];
			x[i]=x[miniindex];
			x[miniindex]=temp;
		}
		
		cout<<"\nData setelah diurut : ";
		for(i=1; i<=bd; i++){
			cout<<"\n"<<x[i];
		}
		getch();
	}
