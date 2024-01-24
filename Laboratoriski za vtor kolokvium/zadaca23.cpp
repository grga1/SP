/* Да се напише рекурзивна функција преку која бројот ќе се трансформира на тој начин што секоја непарна цифра 
ќе се намали за 1, а парните цифри ќе бидат заменети со нула. Функцијата треба да го врати трансформираниот број. 
Да се напише и главна програма која ќе ја тестира работата на функцијата.
*/

#include <iostream>
using namespace  std;
void rekurzija(int n,int &nov){
    int cifra=n%10;
    if(n==0)
        return;

    rekurzija(n/10,nov);
    if(cifra%2!=0)
    {
        nov=nov*10+cifra-1;
    }
    else{
        nov=nov*10+0;
    }
}
int main() {
    int n;
    cin>>n;
    int broj=0;
    rekurzija(n,broj);
    cout<<"Brojot e "<<broj;
}
