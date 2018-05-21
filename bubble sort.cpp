#include <iostream>
using namespace std;

void display (int A[], int n) ;

int main () {

	int n;

	cout<<"Input n data : ";
	cin>>n;
	int A[n];

	for (int h=0;h<n;h++){
	    cout<<"input data ["<<h+1<<"] :";
	    cin>>A[h];
	    }
	cout<<endl<<"Data Input :";

	display(A,n);
	cout<<endl<<endl;

	cout<<"Swapping :";
	for (int j=0;j<n;j++){
		for (int k=0;k<n-1;k++){
			
			if (A[k]>A[k+1]){
			
				cout<<"\n("<<A[k]<<","<<A[k+1]<<") ";
				display(A,n);
				swap (A[k], A[k+1]);
				
			} 
		}
	}
	
	cout<<endl<<endl<<"Ascending Sorting Result :";
		display(A,n);
		
	cout<<endl<<endl<<"Descending Sorting Result :";
		for (int p=n-1;p>=0;p--){
			cout<<A[p]<<" ";
		}
	
}
void display (int A[], int n) {
	
		for (int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
	
}
