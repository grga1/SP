/*Од стандарден влез да се прочита квадратна матрица со број на редици и колони N.
Прво се вчитува бројот N а потоа и N*N елементите на матрицата.
Ваша задача е да ја пронајдете колоната со максимална сума на елементите 
и таа сума да ја додадете на секој елемент на таа колона.
На крај испечатете ја трансформираната матрица.
*Доколку има 2 колони со иста максимална сума, да се чува таа што е прва најдена 
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
 int max=-100;
 int y;
 for(int i=0;i<m;i++)
 {
     int s=0;
     for(int j=0;j<m;j++)
     {
         s+=matrica[j][i];
     }
     if(s>max)
     {
         max=s;
     y=i;
     }
 }
    for(int i=0;i<m;i++)
    {
          matrica[i][y]+=max;
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
