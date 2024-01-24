/*Да се прочита број N од тастатура. 
Да се дефинира функција form(int n) што ќе испечати форма од ѕвезди како што е прикажано на сликата.
За да се освојат сите поени од вежбата, потребно е функцијата form да биде рекурзивна. 
*/

#include <iostream>
using namespace  std;
void form(int n,int i){
    if(i==n)
        return;
    for(int temp=i;temp<n;temp++)
    {
        cout<<"*";
    }
    cout<<endl;
    return form(n,i+1);
}
int main() {
    int n;
    cin>>n;
    form(n,0);
}
