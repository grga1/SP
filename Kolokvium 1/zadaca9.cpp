//Од стандарден влез се читаат непознат број на хексадецимални цифри се додека не се внесе точка (.).
//Ваша задача е да го пресметате декадниот збир на внесените хексадецимални цифри.
//Доколку добиениот декаден збир е делив со 16 се печати Pogodok. 
//Доколку истиот тој збир покрај што е делив со 16 плус завршува на 16 (последните цифри му се 1 и 6), 
//се печати Poln pogodok инаку се печати самиот збир.
//Пример:
//влез: A 7 F 2 0 c A 5
//излез: 61
//(61 = 10 + 7 + 15 + 2 + 0 + 12 + 10 + 5, бројот не е делив со 16, ниту пак последните цифри му се 1,6)

#include <iostream>
#include <string>
using namespace std;
int main(){
    char znak;
    int s=0;
   do{
 cin>>znak;
       switch (znak) {
           case '0': s+=0; break;
           case '1': s+=1;  break;
           case '2': s+=2;  break;
           case '3': s+=3;  break;
           case '4': s+=4; break;
           case '5': s+=5;  break;
           case '6': s+=6;  break;
           case '7': s+=7;  break;
           case '8': s+=8;  break;
           case '9': s+=9;  break;
           case 'A':
           case 'a':s+=10; break;
           case 'B':
           case 'b': s+=11; break;
           case 'C':
           case 'c': s+=12; break;
           case 'D':
           case 'd': s+=13;  break;
           case 'E':
           case 'e': s+=14;  break;
           case 'F':
           case 'f': s+=15; break;


       }

   }while(znak!='.');
if(s%16==0&&(s%100==16||s%100==61))
{
    cout<<"Poln pogodok";
}
else if(s%16==0)
{
    cout<<"Pogodok";
}else
    cout<<s;
    return 0;
}
