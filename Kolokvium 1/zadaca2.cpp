//Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри. 
//Обратен број е бројот составен од истите цифри, но во обратен редослед (на пример, 653 е обратен број на бројот 356).
//Од тастатура се внесува природен број n ( n > 9).
//Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“. 
//Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen).

#include <iostream>
using namespace std;
int main(){
  int broj,obraten;
  cin>>broj;
  int temp,temp1,s;
  int glavniot_broj,max_glaven_broj;
  int max=0;
  if(broj>9) {
      for(int i=0;i<broj;i++)
      {
          temp=i;
      while (temp != 0) {
          temp1 = temp % 10;
          obraten = obraten * 10 + temp1;
          temp /= 10;
          s++;
      }

      if((obraten>max||i>glavniot_broj)&&obraten%s==0)
      {
      max=obraten;
      glavniot_broj=i;
      }
      obraten=0;
      s=0;
      }
  }
  else
  {
      cout<<"Brojot ne e validen";
      return 0;
  }
  cout<<glavniot_broj;
  return 0;
}
