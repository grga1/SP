/* Од стандарден влез се чита цел број N (N<=100) и потоа N низи од знаци.
Низите знаци содржат букви, цифри и специјални знаци (без знаци за празно место),
а секоја од нив не е подолга од 80 знаци.
Да се напише програма со која што на стандарден излез ќе се отпечати најдолгата низа,
којашто е палиндром (се чита исто од од лево на десно и од десно на лево) и што содржи барем еден специјален знак. 
Ако нема такви низи, се печати "Nema!". 
Ако има две или повеќе низи што го задоволуваат овој услов, се печати првата низа којашто го задоволува условот.    
*/

#include <iostream>
#include <cstring>
using namespace  std;
bool palindrom(char niza[]){
    int n= strlen(niza)-1;
    bool proverka= true;
    for(int i=0;i< strlen(niza)/2;i++)
    {
       if(niza[i]!=niza[n--])
       {
           proverka=false; break;
       }
    }
    return proverka;
}
bool specijale_znak(char niza[]){
    int brojac=0;
    for(int i=0;i< strlen(niza);i++)
    {
        if(ispunct(niza[i])) brojac++;
    }
    if(brojac>0) return true;
    return false;
}
int main(){
    int n;
  cin>>n;
    char niza[100];
    char najdolga[100];
    bool ima=false;
for(int i=0;i<n;i++) {
    cin.getline(niza, 100);
    if (palindrom(niza) && specijale_znak(niza)) {
        ima= true;
        if(strlen(niza)> strlen(najdolga))
            strcpy(najdolga,niza);
        
    }
    else continue;
}
if(ima==0)
    cout<<"Nema!";
else
{
    for(int i=0;i< strlen(najdolga);i++)
    {
        cout<<najdolga[i];
    }
}
    return 0;
}
