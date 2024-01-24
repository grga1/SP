/* Четиринасочник претставува матрица во која се испишани зборови хоризонотално и вертикално,
одлево-надесно и оддесно-налево. Притоа секој елемент од матрицата претставува буква од англиската азбука.
пример скриени зборови: HAIR, OLE (прецртани), FISH, TOE (подвлечени)  
Од стандарден влез се чита квадратна матрица од ред n (3 <= n <= 50), составена од знаци. 
Прво се чита бројот n - бројот на редици (колони) на матрицата, а потоа и самите елементи на матрицата (види пример).
По читањето на матрицата, од стандарден влез се внесува збор составен од максимум 10 букви.
Ваша задача е да определите дали тој збор се наоѓа во четиринасочникот 
(хоризонтално или вертикално, одлево-надесно или оддесно-налево). 
Потребно е да се испечати локацијата (ред, колона) на првата и последната буква од зборот. 
Доколку зборот повеќепати се наоѓа во четеринасочникот, треба да се испечати првото појавување,
гледано елемент по елемент како што се чита матрицата.
Доколку не се пронајде зборот, тогаш се печати Not Found.
*/

#include <iostream>
#include <cstring>
using namespace  std;
int main() {
int n;
cin>>n;
char matrica[n][n];
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        cin>>matrica[i][j];
    }
}
char zbor[100];
cin>>zbor;
int x1=-1,y1=-1,x2=-1,y2=-1;
int dolzina=strlen(zbor);
char pravec;
bool flag=false;
for(int i=0;i<n;i++)
    {
    int k=0;
    int p=0;

        for(int j=0;j<n;j++) {
            if(zbor[k++]==matrica[i][j])
            {
                p++;
            }
            else
            {
                p=0;
            }
            if(p==dolzina)
            {
                flag= true;
                x2=i;
                y2=j;
            pravec='a';
            break;
            }
          if(k==dolzina){
           k=0;
          }

        }
        if(flag)break;
        p=0;
        k=0;
        for(int j=n-1;j>=0;j--)
        {
            if(zbor[k++]==matrica[i][j])
            {
                p++;
            }
            else
            {
                p=0;
            }
            if(p==dolzina)
            {
                x2=i;
                y2=j;
                flag= true;
                pravec='b';
                break;
            }
            if(k==dolzina){
                k=0;
            }
        }
        if(flag)break;
        k=0;
        p=0;
        for(int j=0;j<n;j++){
            if(zbor[k++]==matrica[j][i])
            {
                p++;
            }
            else
            {
                p=0;
            }
            if(p==dolzina)
            {
                flag= true;
                x2=j;
                y2=i;
                pravec='c';
                break;
            }
            if(k==dolzina){
                k=0;
            }
        }
        if(flag)break;
        p=0;
        k=0;
        for(int j=n-1;j>=0;j--){
            if(zbor[k++]==matrica[j][i])
            {
                p++;
            }
            else
            {
                p=0;
            }
            if(p==dolzina)
            {flag= true;
                x2=j;
                y2=i;
                pravec='d';
                break;
            }
            if(k==dolzina){
                k=0;
            }
        }
        if(flag)break;
    }
if(pravec=='a')
{
    y1=y2-(dolzina-1);
    x1=x2;
}else
    if(pravec=='b'){
        x1=x2;
        y1=y2+(dolzina-1);
    }else
     if(pravec=='c'){
         y1=y2;
         x1=x2-(dolzina-1);
     }else if(pravec=='d'){
         y1=y2;
         x1=x2+(dolzina-1);

     }else
    {
        cout<<"Not Found";
        return 0;
    }
cout<<x1<<", "<<y1<<" -> "<<x2<<", "<<y2<<endl;
    return 0;
}
