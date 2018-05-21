#include <iostream>
using namespace std;
int main ()
{
int a[100];
int n,i,j,temp,nilai;

cout<<"masukkan berapa banyak nilai yang ingin diurutkan : "; cin>>n; cout<<endl;

for(i=0; i<n; i++){
    cout<<"nilai data ke-"<<i<<" : ";cin>>a[i];
}

cout<<"data yang diinputkan : ";
for(i=0; i<n;i++){
    cout<<a[i]<<" ";
}
cout<<endl;
for(i=0; i<n-1; i++){
nilai=i;
    for(j=i+1; j<n; j++){
    if(a[nilai]>a[j]){
    nilai=j;
    }
    }
    temp=a[i];
    a[i]=a[nilai];
    a[nilai]=temp;
}
cout<<"data setelah diurutkan : ";
for(i=0; i<n; i++){
    cout<<a[i]<<" ";
}
}
