/* Од стандарден влез да се прочита квадратна матриција со број на редици и колони N.
Прво се вчитува бројот N а потоа и N*N елементите на матрицата.
Да се промени знакот на елементите од главната дијагонала на матрицата (позитивните да станат негативни и обратно). 
Да се испечати трансформираната матрица на екран (Секој елемент од матрицата се печати со 3 места - %3d).
*/

#include <iostream>
#include <iomanip>
using namespace  std;

int main() {

    int n;
    cin>>n;
    int matrica[n][n];
   for(int i=0;i<n;i++)
   {
       for (int j = 0; j < n; ++j) {
           cin>>matrica[i][j];
       }
   }
   for(int i=0;i<n;i++)
   {
       for (int j = 0; j < n; ++j) {
           if(i==j) {
               if (matrica[i][j] < 0) {
                   matrica[i][j] = abs(matrica[i][j]);
               }
               else
               {
                   matrica[i][j]=-1*matrica[i][j];
               }
           }
       }
   }

    for(int i=0;i<n;i++)
    {
        for (int j = 0; j < n; ++j) {
            cout<<setw(3)<<matrica[i][j]<<" ";
        }
 cout<<endl;
    }
    return 0;
}
