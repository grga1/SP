/*   Од стандарден влез се чита цел број N (N<100) и потоа N низи од знаци.
Низите знаци содржат букви, цифри и специјални знаци, а секоја од нив не е поголема од 50 знаци.
Да се напише програма што ќе ги отпечати на екран сите низи од знаци во кои се содржи поднизата А1c  
најмалку 2 пати (пр. A1c01АA1c92, 12A1cwwA1cxy, аA1cwA1cA1ccA1cxab) според редоследот како што се прочитани од влезот. 
При печатење на зборовите, сите алфабетски знаци треба да се испечатат со мали букви.
*/

#include <iostream>
#include <cstring>
using namespace  std;
bool proverka(char niza[]){
    int brojac=0;
    for(int i=0;i< strlen(niza);i++)
    {
        if(toupper(niza[i])=='A'&&niza[i+1]=='1'&& tolower(niza[i+2])=='c')
            brojac++;
    }
    if(brojac>=2)
        return true;
    return  false;
}
void transform(char niza[]){
    for(int i=0;i< strlen(niza);i++)
    {if(isalpha(niza[i]))
        niza[i]= tolower(niza[i]);
        else
            niza[i]=niza[i];
    }
}
int main(){
    int n;
cin>>n;
    char niza[50];
for(int i=0;i<=n;i++) {
    cin.getline(niza, 50);
    if(proverka(niza)){
        transform(niza);
        cout<<niza<<endl;
    }
}

    return 0;
}
