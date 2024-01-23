/*На стандарден влез се дадени повеќе редови со броеви така што секој ред започнува со еден цел број (N>=1)
што означува колку броеви следуваат по него во истиот ред.
Да се напише програма која на СИ за секој ред ќе го испечати бројот со најголема најзначајна цифра.
Читањето на броеви завршува кога ќе се прочита бројот 0. */

#include <iostream>
using namespace  std;
int najznacajna_cifra(int n){
    while(n>9)
    {
       n/=10;
    }
    return n;
}
int main(){
int n;
int niza[100];
while(cin>>n){
    if(n==0) break;
    int pamti_broj=-1;
    int najgolema_najznacajna_cifra=-1;
    for(int i=0;i<n;i++)
    {
        cin>>niza[i];
        if(najznacajna_cifra(niza[i])>najgolema_najznacajna_cifra)
        {
            najgolema_najznacajna_cifra= najznacajna_cifra(niza[i]);
            pamti_broj=niza[i];
        }
    }
    cout<<pamti_broj<<endl;
}
return 0;
}
