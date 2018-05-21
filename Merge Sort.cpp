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
