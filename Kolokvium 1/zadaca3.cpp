//Од стандарден влез се чита еден природен број n. 
//Меѓу природните броеви помали од n, да се најде оној чиј што збир на делителите е најголем.
//Во пресметувањето на збирот на делителите на даден број, да не се зема предвид самиот број.

#include <iostream>
using namespace std;
int main(){
 int n;
 cin>>n;
 int s=0;
 int max=0;
 int br_zbir_deliteli=0;
 for(int i=1;i<n;i++)
 {
     for(int j=1;j<=i;j++)
     {
         if(i%j==0)
         {
             s+=j;
             if(s>max)
             {
                 max=s;
                 br_zbir_deliteli=i;
             }
         }
     }
     s=0;

 }
    cout<<br_zbir_deliteli;
  return 0;
}
