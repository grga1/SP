/*Се чита низа од n цели броеви. Провери дали низата е специјална. 
Ако од сите броеви на парни позиции 50% или повеќе се парни броеви, 
и од сите броеви на непарна позиција 30% или помалку се непарни броеви, тогаш низата е специјална. 
Испечати 1 ако е низата специјална, испечати 0 ако не е. 
*/

#include <iostream>
using namespace  std;

int main() {

    int n;
    cin>>n;
    int niza[n];
    float parni_pozicii=0,neparni_pozicii=0,parni_broevi=0,neparni_broevi=0;
    for (int i = 0; i < n; ++i) {
        cin>>niza[i];
    }

    for (int i = 0; i < n; ++i) {
        if(i%2==0)
        {
            parni_pozicii++;
            if(niza[i]%2==0)
            {
               parni_broevi++;
            }
        }
        else
        {
            neparni_pozicii++;
            if(niza[i]%2!=0)
            {
                neparni_broevi++;
            }
        }
    }
    float procent1,procent2;
    procent1=(parni_broevi/parni_pozicii)*100;
    procent2=(neparni_broevi/neparni_pozicii)*100;
    if(procent1>=50&&procent2<=30)
    {
        cout<<1;
    }
    else
    {
        cout<<0;
    }
    return 0;
}
