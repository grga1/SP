/*Да се напише програма која за низа од N броеви ќе проверува дали парот кој се наоѓа еден до друг е прост број.
НАПОМЕНА: низата е составена од цифри од 0 до 9 
*/

#include <iostream>
using namespace std;
bool prost(int n){
    int brojac=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            brojac++;
    }
    if(brojac>2)
        return 0;
    return 1;
}
int main() {
    int n;
    cin>>n;
    int niza[n];
    for(int i=0;i<n;i++)
    {
        cin>>niza[i];

    }
    int i=0;
    for( i;i<n;i++)
    {
        int broj=0;
        if(i+1<n){
broj=niza[i]*10+niza[i+1];
         i++;
        }else
        {
            broj=niza[i];
        }
        if(prost(broj))
          cout<<"brojot "<<broj<<" e prost"<<endl;
        else
            cout<<"brojot "<<broj<<" NE e prost"<<endl;
    }
    return 0;
}
