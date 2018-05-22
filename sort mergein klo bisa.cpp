#include <iostream>
using namespace std;

void merge(int b[], int awal, int akhir){
	
	int t= (awal+akhir)/2;
	
	int si=awal;
	int sj=t+1;
	int sk=awal;
	
	int sementara[100];
	
	while (si<=t && sj<=akhir){
		if (b[si]<b[sj]){
			sementara[sk++]=b[si++];
		}
		else{
			sementara[sk++]=b[sj++];
		}
	}
	while (si<=t){
		sementara[sk++]=b[si++];
	}
	while (sj<=akhir){
		sementara[sk++]=b[sj++];
	}
	
	for (int p=awal;p<=akhir;p++){
		b[p]=sementara[p];
	}
}

void mergesort(int b[], int awal, int akhir){
	
	while (awal>=akhir){
		return;
	}
	
	int t=(awal+akhir)/2;
	
	mergesort(b,awal,t);
	mergesort(b,t+1,akhir);
	
	merge(b,awal,akhir);
}

int main () {
	int n;
	int b[100];
	
	cout<<"Input n data :";
	cin>>n;
	
	for (int h=0;h<n;h++){
		cout<<"Input data -"<<h+1<<" : ";
		cin>>b[h];	
	}
	cout<<"Data Input : ";
	for (int h=0;h<n;h++){
		cout<<b[h]<<" ";	
	}
	cout<<endl;
	
	mergesort(b,0,n-1);
		
	cout<<"Data sorted : ";
	for (int l=0;l<n;l++){
		cout<<b[l]<<" ";
	}
	
}
