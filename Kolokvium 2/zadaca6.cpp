/*Да се напише програма која вчитува матрица со димензии MxN (макс. 100x100).
На почетокот се внесуваат димензиите на матрицата,
а потоа и елементите на матрицата кои се само вредностите 1 и 0.
Програмата треба да изброи и отпечати на СИ во колку од редиците и колоните има барем 3 последователни елементи
со вредност 1.

Пример:

 1110
 1011
 1001
 
1 ред + 1 колона = 2 */

#include <iostream>
using namespace  std;
int main(){

    int m,n;

    cin>>m>>n;

    int matrica[m][n];

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrica[i][j];
        }
    }

    int s=0;
    int sredici=0;
    for(int i=0;i<m;i++) {
        s = 0;
        for (int j = 0; j < n; j++) {
            if (matrica[i][j] == 1) {
                s++;
            }
            else
                s=0;
            if (s >= 3) {
                sredici++;
                break;
            }
        }
    }
    int skoloni=0;
    for(int i=0;i<n;i++) {
        s = 0;
        for (int j = 0; j < m; j++) {
            if (matrica[j][i] == 1) {
                s++;
            }
            else
                s=0;
            if (s >= 3) {
                sredici++;
                break;
            }
        }
    }
cout<<sredici+skoloni;
    return 0;
}
