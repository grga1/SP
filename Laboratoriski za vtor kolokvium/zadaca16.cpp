/* Од стандарден влез се вчитува квадратна матрица со n редици и колони.
Прво се вчитува бројот n, па потоа и n елементите на матрицата.
Доколку n е непарен број да се испечати пораката GRESKA и да заврши програмата.
Потребно е матрицата да се здипли како што е прикажано на сликата.
При диплење на матрицата, се собираат елементите на позициите што се поклопуваат при диплењето.
*/

#include <iostream>
using namespace  std;

int main() {

    int n;
    cin>>n;
    if(n%2!=0)
    {
        cout<<"GRESKA";
        return 0;
    }
    int matrica[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrica[i][j];
        }
    }
int temp=n-1;

    for(int i=0;i<n/2;i++)
    {
        for(int j=0;j<n;j++)
        {
  matrica[i][j]=matrica[i][j]+matrica[temp][j];

        }
        temp--;
    }
    temp=n-1;
    for(int i=0;i<n/2;i++)
    {
        for(int j=0;j<n/2;j++)
        {
            matrica[i][j]=matrica[i][j]+matrica[i][temp];
temp--;
        }
        temp=n-1;

    }

    for(int i=0;i<n/2;i++)
    {
        for(int j=0;j<n/2;j++)
        {
            cout<<matrica[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
