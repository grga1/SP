/*Од стандарден влез да се вчита број N и потоа да се вчитаат N елементи во една низа.
Внесената низа да се трансформира на начин што за секој втор елемент во низата,
да му се додаде неговиот претходен лев сосед.
Трансформираната низа да се испечати на стандарден излез, така што елементите ќе се одвоени со празно место меѓу нив. 
*/

#include <iostream>
using namespace std;
int main() {
 int n;
 cin>>n;
 int niza[n];

 for(int i=0;i<n;i++)
 {
     cin>>niza[i];

 }
 int brojac=0;
for(int i=0;i<n;i++)
{
    brojac++;
    if(brojac==2)
    {
        brojac=0;
        niza[i]+=niza[i-1];
    }
}
    for(int i=0;i<n;i++)
    {
        cout<<niza[i]<<" ";

    }
    return 0;
}
