/*Од стандарден влез се читаат броевите N и k, потоа се внесуваат N елементи во низа. 
Ваша задача е да ја испечатите низата и да испечатите колку пати во низата се појавува k 
*/

#include <iostream>
using namespace std;
int main() {
 int n,k;
 cin>>n>>k;
 int brojac=0;
 int niza[n];
 for(int i=0;i<n;i++)
 {
     cin>>niza[i];
 }
 for(int i=0;i<n;i++)
 {
     if(niza[i]==k)
         brojac++;
 } for(int i=0;i<n;i++)
 {
     cout<<niza[i]<<" ";
 }
 cout<<endl;
 cout<<"Brojot "<<k<<" vo nizata se naogja "<<brojac<<" pati.";

    return 0;
}
