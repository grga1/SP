/*На стандарден влез се внесува број N за димензии на матрица NxN, 
потоа се внесуваат елементите на матрицата.
По внесување на матрицата се внесува и вредност за колоната и редицата Y.
Да се направи трансформација на матрицата така што главната дијагонала се заменува со колоната Y,
а колоната и редицата Y се заменуваат со главната дијагонала. 
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

 int y;
 cin>>y;
int glavna_dijagonala[100];
int kolona_y[100];
int k_glavna=0,k_kolona=0;
    for(int i=0;i<m;i++)
    {

         kolona_y[k_kolona++]=matrica[i][y];
        for(int j=0;j<m;j++)
        {
              if(i==j)
              {
                  glavna_dijagonala[k_glavna++]=matrica[i][j];
              }

        }
    }
    int p=0;
    int c=0;
    int f=0;
for(int i=0;i<m;i++)
{
    matrica[i][y]=glavna_dijagonala[c++];
    matrica[y][i]=glavna_dijagonala[f++];
    for(int j=0;j<m;j++)
    {
        if(i==j)
        {
            matrica[i][j]=kolona_y[p++];
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
