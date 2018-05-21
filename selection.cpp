#include <iostream>
using namespace std;

int A[100];
int temp;

void display(){

for(int z=0;z<6;z++){
	cout<<A[z]<<" ";
}
}
int main () {


for(int k=0;k<6;k++){
	cout<<"Angka :";cin>>A[k];
}

cout<<endl;
display();
int u=6;
for(int i=0;i<6;i++){
	int index=i;
	for(int j=i+1;j<u;j++){
		if(A[j]<A[index]){
			index=j;
		}
	}
	int temp=A[index];
	A[index]=A[i];
	A[i]=temp;
	
	
}
cout<<endl;
display();
}
