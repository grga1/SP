/*Од стандарден влез да се прочита квадратна матрица со број на редици и колони N. 
Прво се вчитува бројот N а потоа и N*N елементите на матрицата.
Ваша задача е да ги пронајдете минималниот и максималниот број од секоја редица
и соодветно да ги промените во 0 и 1 (min=0, max=1)
Доколку најмалиот или најголемиот број се повторуваат повеќе пати треба сите да се променат.
На крај испечатете ја трансформираната матрица.
*/

#include <iostream>
using namespace std;

int main() {

 int m,n;
 cin>>m;
 int matrica[m][m];
 for(int i=0;i<m;i++)
 {
     for(int j=0;j<m;j++)
     {
         cin>>matrica[i][j];
     }
 }

 for(int i=0;i<m;i++)
 {
     int min=1000;
     int max=-1000;
     for(int j=0;j<m;j++)
     { if(matrica[i][j]>max)
         {
         max=matrica[i][j];
         }
          if(matrica[i][j]<min)
          {
              min=matrica[i][j];
          }
     }
     for(int j=0;j<m;j++)
     {
         if(matrica[i][j]==min)
         {
             matrica[i][j]=0;
         }else
         if(matrica[i][j]==max)
         {
             matrica[i][j]=1;
         }
     }

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
