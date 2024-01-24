/*Од стандарден влез се чита цел број n. кој ја претставува должината на една низа,
а потоа се внесуваат елементите на истата и на крај број k. 
Да се напише програма која ја трансформира низата, така што ќе се направи замена на местата помеѓу елементот 
на позицијата k и неговиот претходник. Имајте во предвид дека промената 
треба да се направи кога низата ја читаме од лево кон десно и исто така во спротивен правец (од десно кон лево).  
*/

#include <iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main() {
 int n;
 cin>>n;
 int niza[n];
 for(int i=0;i<n;i++)
 {
     cin>>niza[i];

 }
 int k;
 cin>>k;
int brojac=0;
 for(int i=0;i<n;i++)
  {
     if(brojac==k)
     {

         swap(niza[i-1],niza[i]);
     }
 brojac++;
  }
 brojac=0;
 for(int i=n-1;i>=0;i--)
 {
     if(brojac==k)
     {

         swap(niza[i],niza[i+1]);
     }
     brojac++;
 }
    for(int i=0;i<n;i++)
    {
        cout<<niza[i]<<" ";

    }
    return 0;
}
