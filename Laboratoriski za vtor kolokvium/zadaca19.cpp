/*На стандарден влез се читаат два броја a и b. 
Ваша задача е да ја најдете најголемата непарна цифра на секој број во опсег [a,b].
Функцијата за наоѓање на најголема непарна цифра мора да е рекурзивна.
Напомена: ако бројот нема непарни цифри се печати 0.
Печатење на секој број и негова цифра е во формат: број -> цифра
*/

#include <iostream>
using namespace  std;
void rekurzija(int n,int &max){
    int digit=n%10;
    if(n==0)
    {
        return;
    }
    if(digit%2!=0&&digit>max)
    {
        max=digit;
    }
return rekurzija(n/10,max);
}
int main() {
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        int temp=i;
        int max=0;
        rekurzija(temp,max);
        cout<<i<<" -> "<<max<<endl;
    }
}
