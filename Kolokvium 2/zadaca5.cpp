/* Од стандарден влез се чита ливче во спортска обложувалница.
Во првиот ред е запишана сумата на уплата (цел број).
Потоа во секој нареден ред кој се чита од стандарден влез (се додека не се прочита знакот #) 
е запишан по еден тип во следниот формат: ab12 1 1.25
Првиот број е шифрата на типот (низа од знаци која не е подолга од 9 знаци), 
вториот број е типот (може да биде 1, 0 или 2) додека третиот број е коефициентот (реален број).
Ваша задача е да го испечатите типот со најголем коефициент како и можната добивка на ливчето.
Доколку има повеќе типови со ист максимален коефициент, да се испечати првиот.
Можната добивка се пресметува како производ на сите коефициенти со сумата на уплата. */

#include <iostream>
#include <cstring>
using namespace  std;

int main() {
int suma_na_uplata;
cin>>suma_na_uplata;
char niza[100];
int tip;
float koeficient;
float skoef=1;
char maxniza[100];
int maxtip=-100;
float maxkoef=-100;
while(cin>>niza) {
    if(niza[0]=='#')break;
    cin>>tip>>koeficient;
    skoef*=koeficient;
    if(koeficient>maxkoef)
    {
        maxkoef=koeficient;
        strcpy(maxniza,niza);
        maxtip=tip;
        maxkoef=koeficient;
    }

}
cout<<maxniza<<" "<<maxtip<<" "<<maxkoef<<endl;
cout<<suma_na_uplata*skoef;
return 0;
}
