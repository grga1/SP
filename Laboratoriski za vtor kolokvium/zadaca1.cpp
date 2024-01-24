/* Од стандарден влез се чита број n а потоа се чита 
и низа составена од n реални броеви.
На екран да се испечати елементот кој што е најблиску до средната вредност на елементите на низата.*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace  std;
int main(){
    int n;
    cin>>n;
    float niza[n];
    for(int i=0;i<n;i++)
    {
        cin>>niza[i];
    }
    float sredna_vrednost=0;
    for(int i=0;i<n;i++)
    {
        sredna_vrednost+=niza[i];
    }
    sredna_vrednost=sredna_vrednost/n;
    int razlika=2147483647;
    int temp=0;
    int index=0;
    for(int i=0;i<n;i++)
    {
        temp=abs(sredna_vrednost-niza[i]);
        if(temp<razlika)
        {
            razlika=temp;
            index=i;
        }
    }
    cout<<fixed<<setprecision(2)<<niza[index];

}
