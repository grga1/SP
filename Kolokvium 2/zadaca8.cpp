/* Од стандарден влез се читаат непознат број на редови додека не се прочита 0. 
Да се најде најдолгиот ред во кој има барем 2 цифри.
Потоа, на стандарден излез да се испечатат знаците од најдолгиот ред кои се наоѓаат помеѓу првата
и последната цифра (заедно со тие 2 цифри) во истиот редослед.
Доколку има повеќе такви редови се печати последниот. 
Се претпоставува дека ниту еден ред не е подолг од 100 знаци.
Пример.

Влез: 
dat.txt:
    aaa123aa222aa2aaa23aaaaa22
    aaaaaaaaaaaa 23aaaa
    123 aaa aaa aaa aaa 12345 aaa aaa 2a
    0
Излез:
    123 aaa aaa aaa aaa 12345 aaa aaa 2
*/

#include <iostream>
#include <cstring>
using namespace  std;
int brojac_na_cifri(char niza[]){
    int brojac=0;
    int brojacif=0;
    for(int i=0;niza[i]!='\0';i++)
    {
 if(isdigit(niza[i]))
  brojacif++;
      brojac++;
    }
    if(brojacif>=2)
    return brojac;
    else
        return 0;
}
int trimpocetok(char niza[]){
    int brojac=0;
    for(int i=0;niza[i]!='\0';i++)
    {
        if(isalpha(niza[i]))
            brojac++;
        else
            if(isdigit(niza[i]))
           break;
     }
    return brojac;
}
int trimkraj(char niza[]){
    int brojac=0;
    for(int i= strlen(niza)-1;i>=0;i--)
    {
        if(isalpha(niza[i]))
            brojac++;
        else
        if(isdigit(niza[i]))
            break;
    }
    return brojac;
}
int main() {
char niza[100];
char kopija[100];
int maxcif=-100;
int pocetok=0;
int kraj=0;
while(cin.getline(niza,100)) {
    if (niza[0] == '0') break;
    if (brojac_na_cifri(niza) >= maxcif) {
        maxcif = brojac_na_cifri(niza);
        strcpy(kopija, niza);
        kraj = trimkraj(niza);
        pocetok = trimpocetok(niza);


    }

}
for(int i=pocetok;i< strlen(kopija)-kraj;i++)
{
    cout<<kopija[i];
}
return 0;
}
