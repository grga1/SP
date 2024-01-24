/*Oд стандарден влез се читаат броеви се додека не се прочита нешто што не е број.
За сите броеви кои што се палиндроми на екран да се испечати сума на цифри од кои што е составен бројот,
за броевите кои што не се палиндроми потребно е на екран да се испечати од колку цифри е составен бројот.
Проверка дали бројот е палиндром, колкава е сумата на цифри или од колку цифри е составен бројот да се
реализираат со посебни функции.
Дополнително функцијата за броење на цифри на број направете ја рекурзивна.
*/

#include <iostream>
using namespace  std;
void kolkuCifriIma(int n,int &brojac){
 if(n==0)
     return;
 brojac++;
 return kolkuCifriIma(n/10,brojac);
}
void sumaNaCifri(int n,int &sum){
     int x1=0;
    while(n!=0)
    {
        x1=n%10;
        sum+=x1;
        n/=10;
    }
}
bool palindrom(int n){
    int temp=n;
    int x1;
    int nov=0;
    while(temp!=0)
    {
        x1=temp%10;
        nov=nov*10+x1;
        temp/=10;
    }
    if(n==nov)
        return true;
    return  false;
}
int main() {
    int n;
    while(cin>>n){
  if(palindrom(n))
  {
      int s=0;
      sumaNaCifri(n,s);
      cout<<s<<endl;
  }else
  { int s=0;
      kolkuCifriIma(n,s);
      cout<<s<<endl;
  }

    }
}
