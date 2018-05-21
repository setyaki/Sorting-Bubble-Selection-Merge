#include <iostream>
using namespace std;
int data[100];

void nilai(int awal, int tengah, int akhir)
{
    cout<<endl;
    int temp[100], tempAwal = awal, tempMid = tengah, i = 0;
    while(tempAwal < tengah && tempMid < akhir)
    {
        if(data[tempAwal] < data[tempMid])
            temp[i] = data[tempAwal],tempAwal++;
        else
            temp[i] = data[tempMid],tempMid++;
        i++;
    }
    while(tempAwal < tengah)
        temp[i] = data[tempAwal],tempAwal++,i++;
    while(tempMid < akhir)
        temp[i] = data[tempMid],tempMid++,i++;
    for(int b=0,c=awal;b<i,c<akhir;b++,c++)
        cout<<data[c]<<' '<<temp[b]<<endl, data[c] = temp[b];
}
