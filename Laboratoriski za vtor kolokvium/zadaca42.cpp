/*Од стандарден влез се вчитува цел број N. Потоа се внесува низа од N цели броеви. 
Напиши програма која ќе ги трансформира елементите на низата на следниот начин: Секој парен елемент, зголеми го за 3, 
а секој непарен елемент кој е деллив со 5, одземи го за 2. На крај, испечати ја трансформираната низа. 
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

for(int i=0;i<n;i++)
{
   if(niza[i]%2==0)
    niza[i]+=3;
   else
       if(niza[i]%5==0)
           niza[i]-=2;

}
    for(int i=0;i<n;i++)
    {
        cout<<niza[i]<<" ";

    }
    return 0;
}