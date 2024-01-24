/*Од стандарден влез да се прочита квадратна матриција со број на редици и колони N.
Прво се вчитува бројот N а потоа и N*N елементите на матрицата. 
Ваша задача е да го пронајдете минималниот елемент во секој 
непарен ред и да ја додадете оваа минимална вредност на секој елемент во следниот (парен) ред. 
*/

#include <iostream>
using namespace std;

int main() {

 int m;
 cin>>m;
 int matrica[m][m];

 for(int i=0;i<m;i++)
 {
     for(int j=0;j<m;j++)
     {
         cin>>matrica[i][j];
     }
 }
  int brojac=1;
 int min=1000;
 for(int i=0;i<m;i++)
 {
     for(int j=0;j<m;j++)
     {
         if(brojac%2!=0)
         {
             if(matrica[i][j]<min)
             {
               min=matrica[i][j];
             }
         }

     }
     brojac++;
     if(brojac%2==0)
     {
         for(int j=0;j<m;j++)
         {
             matrica[brojac-1][j]+=min;
         }
     }
     min=1000;
 }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrica[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
  }
