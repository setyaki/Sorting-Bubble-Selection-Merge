#include <iostream>
using namespace std;
int main () {
	
	int A[7]={3,4,1,5,6,8,2};
	cout<<"Data Input :";
	for (int i=0;i<7;i++){
		cout<<A[i]<<" ";
	}
	cout<<endl;
	cout<<"Swapping :";
	for (int j=0;j<7;j++){
		for (int k=0;k<6;k++){
			
			if (A[k]>A[k+1]){
				cout<<"("<<A[k]<<",";
				swap (A[k], A[k+1]);
				cout<<A[k]<<") ";
			}
		}
	}
	cout<<endl<<"Ascending Sorting Result :";
	for (int l=0;l<7;l++){
		cout<<A[l]<<" ";
	}
	cout<<endl<<"Descending Sorting Result :";
	for (int p=6;p>=0;p--){
		cout<<A[p]<<" ";
	}
	
}
