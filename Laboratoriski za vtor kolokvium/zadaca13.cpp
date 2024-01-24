/* Напишете програма за читање елементи во матрица и проверете дали дадената матрица е симетрична матрица или не.
Од стандаред влез се внесуваат димензиите на матрицата M и N соодветно и 
потоа се внесуваат елементите на матрицата. 
Ваша задача е доколку матрицата е симетрична да испечатете на екран 1, 
доколку не е симетрична да испечатете -1, потоа се печати самата матрица на екран.
*/

#include <iostream>
using namespace  std;

int main() {

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
  int proverka=1;
  for(int i=0;i<m;i++)
  {
      for(int j=0;j<n;j++)
      {
          if(matrica[i][j]!=matrica[j][i]){
              proverka=-1;
          }
      }
  }

  cout<<proverka<<endl;
  for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrica[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
