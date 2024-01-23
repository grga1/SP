/* Од стандарден влез прво се читаат два знака z1 и z2 , 
а потоа се читаат редови со низи од знаци се’ додека не се прочита знакот # (секој од редовите не е подолг од 80 знаци).
Да се напише програма со која на стандарден излез ќе се испечатат поднизите 
од секој ред составени од знаците што се наоѓаат меѓу z1 и z2 (без нив).
Секоја подниза се печати во нов ред.
Се смета дека секој ред од датотеката точно еднаш ги содржи знаците z1 и z2, 
  знакот z1 секогаш се наоѓа пред знакот z2, а меѓу z1 и z2 секогаш има барем еден знак. */

#include <iostream>
#include <cstring>
using namespace  std;
void pecati(char niza[],char start,char stop){
   bool flag=false;
    for(int i=0;i< strlen(niza);i++)
    {
        if(niza[i]==start)
        {
            flag= true;
            continue;
        }
        if(niza[i]==stop) break;
        if(flag) cout<<niza[i];
    }
    cout<<endl;
}
int main(){
char z1,z2;
cin>>z1>>z2;
cin.ignore();
char niza[100];
while(cin.getline(niza,100)){
    if(niza[0]=='#') break;
    pecati(niza,z1,z2);
}

    return 0;
}
