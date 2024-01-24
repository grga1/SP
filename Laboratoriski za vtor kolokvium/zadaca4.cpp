/* Од стандарден влез се читаат соодветно низа со M елементи и низа со N елементи,
ваша задача е да ги споите двете низи во трета сортирана низа по растечки редослед. 
Објаснување: Се внесува најпрвин должината на првата низа М, па потоа се чита првата низа,
потоа се внесува должината на втората низа N, па втората низа.
Напомена: Елементите во двете низи кои се внесуваат се сортирани. Максималната должина на низите е 100. 
*/

#include <iostream>
using namespace  std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void bubble(int niza[],int n){
    bool swapped= true;
    while (swapped)
    {
        swapped=false;
        for(int i=0;i<n-1;i++)
        {
            if(niza[i]>niza[i+1])
            {
                swap(niza[i],niza[i+1]);
                swapped= true;
            }
        }
    }
}
int main(){
    int m,n,z;
    cin>>m;
    int niza1[m];

    for(int i=0;i<m;i++)
    {
        cin>>niza1[i];
    }
    cin>>n;
    int niza2[n];
    for(int i=0;i<n;i++)
    {
        cin>>niza2[i];
    }
    z=m+n;
    int niza3[z];
    for(int i=0;i<m;i++)
    {
            niza3[i]=niza1[i];
    }
    int j=0;
    for(int i=m;i<z;i++)
    {
        niza3[i]=niza2[j++];
    }
    bubble(niza3,z);
    for(int i=0;i<z;i++)
    {
        cout<<niza3[i]<<" ";
    }
}

