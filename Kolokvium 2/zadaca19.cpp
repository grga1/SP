/* Од стаднарден влез се читаат N низи од знаци (стрингови) не подолги од 80 знаци. На почетокот на програмата се читаат два цели броеви:

N - бројот на низи од знаци кои ќе се читаат и
X - поместување.
Секоја од вчитаните низи од знаци треба да се трансформира на тој начин што секоја од малите и големите букви (a-z, A-Z) се заменува со истата буква поместена X места понапред во азбуката (a-z). Ако се надмине опсегот на буквите во азбуката, се продолжува циклично од почетокот на азбуката. Трансформираната низа да се отпечати на СИ.

Трансформацијата да се имплементира со посебна рекурзивна функција.

Пример:

Welcome -> трансформирано со поместување 5 -> Bjqhtrj  */

#include <iostream>
#include <cstring>
using namespace  std;
void transformacija(char niza[],int x) {
    for (int i = 0; niza[i] != '\0'; i++) {
        if (isalpha(niza[i])) {
            if (islower(niza[i])) {
                int pomestuvanje = int(niza[i]) + x;
                if(pomestuvanje<=122)
                {
                    niza[i]=pomestuvanje;
                }
                else{
                    int razlika=pomestuvanje-122;
                    niza[i]=96+razlika;
                }
            }
            else
            if(isupper(niza[i])){
                int pomestuvanje = int(niza[i]) + x;
                if(pomestuvanje<=90)
                {
                    niza[i]=pomestuvanje;
                }
                else{
                    int razlika=pomestuvanje-90;
                    niza[i]=64+razlika;
                }
            }
        }
    }
}
int main() {
int n,x;
cin>>n>>x;
cin.ignore();
for(int i=0;i<=n;i++)
{
    char niza[100];
    cin.getline(niza,100);
    transformacija(niza,x);
    for(int i=0; niza[i]!='\0';i++) {
        cout << niza[i];
    }
        cout<<endl;
}

return 0;
}
