/* Од стандарден влез се чита природен број N (N <= 100), 
како и низа од позитивни цели броеви a[ ] со N елементи. 
Да се напише функција int par(a, n) која ќе го врати најмалиот елемент во низата кој
се појавува парен број пати во низата. Доколку нема таков елемент, функцијата враќа вредност 0.
Напишете програма што ќе ја повика функцијата par за внесената низа a[ ] 
и ќе го испечати најмалиот број којшто се појавува парен број пати во низата a[ ].
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace  std;
int main(){
    int n;
    cin>>n;
   vector<int> vek;
   int broj;
   for(int i=0;i<n;i++){
       cin>>broj;
     vek.push_back(broj);
   }
    int min=1000;
    for(int i=0;i<vek.size();i++)
    {
         int brojac=1;
        for(int j=0;j<vek.size();j++){
            if(vek[i]==vek[j]&&i!=j)
            {
                brojac++;
            }
        }
        if(brojac%2==0&&brojac!=0&&vek[i]<min){
            min=vek[i];
        }

    }
    if(min==1000)
    {
        cout<<"Nitu eden element ne se pojavuva paren broj pati!"<<endl;
    }
    else
    {
        cout<<"Najmaliot element koj se pojavuva paren broj pati e "<<min; 
    }
    return 0;
}
