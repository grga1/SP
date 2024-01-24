/*  Од тастатура се внесуваат димензиите m и n на матрица од цели броеви, Аmxn, ( 0 < m, n < 30 )
и нејзините елементи.
Потоа се внесуваат два цели броја r и k  (индекси на редица/колона од матрицата, т.е. 0 <= r < m и 0 <= k < n).
Да се напише програма која ja трансформира матрицата А така што елементите над редицата r и
лево од колоната k се заменуваат со минималната вредност од матрицата А.
*/

#include <iostream>
using namespace std;
int main() {
    int m,n;
    cin>>m>>n;
    int A[m][n];
    int r,k;
    cin>>r>>k;
    int min=2147483647;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>A[i][j];
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(A[i][j]<min)
            {
                min=A[i][j];
            }
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<r&&j<k)
            {
                A[i][j]=min;
            }
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
