/*Од стандарден влез да се прочита квадратна матриција со број на редици и колони N.
Прво се вчитува бројот N а потоа и N*N елементите на матрицата.
Да се промени знакот на елементите од главната дијагонала на матрицата (позитивните да станат негативни и обратно).  
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
 for(int i=0;i<m;i++)
 {
     for(int j=0;j<m;j++)
     {
         if(i==j)
         {
                 matrica[i][j]*=-1;


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
