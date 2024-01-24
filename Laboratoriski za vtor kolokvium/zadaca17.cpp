/*Да се напише програма која вчитува квадратна матрица.
На почетокот се внесува бројот на редици и колони N на матрицата,
а потоа и елементите на матрицата. 
Да се трансформира матрицата на тој начин што секој негативен број во неа би се заменил со збирот на неговите соседи.
Соседи на даден број во матрица се броевите до него (гледано хоризонтално и вертикално).
*/

#include <iostream>
using namespace  std;

int main() {

    int n;
    cin>>n;

    int matrica[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrica[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(matrica[i][j]<0) {
               matrica[i][j]=0;
               if (j + 1 < n) {
                   matrica[i][j] += matrica[i][j + 1];
               }

               if (i + 1 < n) {
                   matrica[i][j] += matrica[i + 1][j];
               }

               if (j - 1 >= 0) {
                   matrica[i][j] += matrica[i][j - 1];
               }

               if (i - 1 >= 0) {
                   matrica[i][j] += matrica[i-1][j];
               }
           }

        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrica[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
