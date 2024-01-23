/* За еден природен број а велиме дека е порамнување на друг природен број b ако и 
само ако цифрите еднакви на 9 во бројот b се заменети со цифрата 7 во бројот а.
Пример.
Бројот 734775 е порамнување на бројот 934795.
Од стандарден влез се внесуваат непознат број на цели броеви (не повеќе од 100), 
се додека не се внесе нешто што не може да се интерпретира како цел број.
Ваша задача е да ги отпечатите најмалите 5 од порамнувањата на сите внесени броеви, 
по редослед од најмалиот кон најголемиот.
Забелешка: Доколку се внесат помалку од 5 броеви, тогаш печатите толку броеви колку што се соодветно внесени.
Наоѓањето на порамнувањето на даден број треба да се реализира во посебна рекурзивна функција poramnet(int a).

Пример.

За броевите: 9592, 69403, 100007, 6, 987, 6977, 33439,
треба да се најдат нивните порамнувања ( тоа се: 7572, 67403, 100007, 6, 787, 6777 и 33437, соодветно),
и да се отпечатат најмалите 5 од нив по овој редослед: 6 787 6777 7572 33437.
ЗАБРАНЕТО е користење на глобални променливи.     */

#include <iostream>
using namespace  std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void swapped(int niza[],int n){
    bool swapce= true;
    while(swapce)
    {
        swapce=false;
        for(int i=0;i<n-1;i++)
        {
            if(niza[i]>niza[i+1])
            {
                swap(niza[i],niza[i+1]);
                swapce= true;
            }
        }
    }
}
int rekurzija(int n){
    if(n==0)
    return 0;
if(n%10==9)
{
    return 7+10*rekurzija(n/10);
}
    return n%10+10*rekurzija(n/10);
    }

int main() {


    int n=0;
 int niza[100];
 while(cin>>niza[n]){
     niza[n]=rekurzija(niza[n]);
  n++;
 }

    swapped(niza,n);
 if(n>=5) {
     for (int i = 0; i < 5; i++) {
         cout << niza[i] << " ";
     }
 }
 else
 { for (int i = 0; i < n; i++) {
         cout << niza[i] << " ";
     }
     
 }

return 0;
}
