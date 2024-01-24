/*Од тастатура се вчитуваат броевите A и B.
На екран да се испечатат сите броеви од интервалот [A,B] кои се палиндроми
и се составени само од цифрите 0,1,2,3 и 4. 
Предлог за работа: 
Да се имплементира функција reverseNumber (int number) која ќе го пресмета обратниот број на определен број number.
Да се имплементира функција isPalindrome (int number) која ќе врати 1 доколку бројот number е палиндром,
а 0 во спротивно
Да се имплементира функција containsDigits (int number) која ќе врати 1 доколку сите цифри во бројот се 0,1,2,3 
или 4, а 0 во спротивно. 
Да се искористат функциите isPalindrome и containsDigits во main функцијата
Дополнително: Направете ја функцијата containsDigits рекурзивна. 
*/

#include <iostream>
using namespace std;
int reverseNumber(int number){
    int reversed=0;
    int rev1=0;
    while(number>0)
    {
        rev1=number%10;
        reversed= reversed*10+rev1;
        number/=10;
    }
    return reversed;
}
bool containsDigits(int number) {
    if (number == 0)
    {       return true;
               }
    if(number%10==0||number%10==1||number%10==2||number%10==3||number%10==4) {
       return containsDigits(number/=10);
    }
        return false;
}
bool isPalindrome(int number){
    if(number== reverseNumber(number))
        return true;
    return false;
}
int main() {
  int a,b;
  cin>>a>>b;
  for(a;a<b;a++)
  {
      if(isPalindrome(a)&& containsDigits(a))
          cout<<a<<endl;
      else
          continue;
  }

    return 0;
}
