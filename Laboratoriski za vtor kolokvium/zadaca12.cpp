/*Од стандарден влез се вчитува матрица сo n редици и n колони.
Прво се вчитува бројот n потоа и елементите на матрицата. 
Матрицата треба да се трансформира така што секој елемент што се наоѓа десно од споредната дијагонала 
од истата редица и е помал од просекот на елементите лево од споредната дијагонала од истата редица 
треба да се замени со -1.
Вака трансформираната матрица да се испечати на екран. 
Пример за втората редица, елементот од споредната дијагонала е 4,
лево од него се 7 и 8, нивен просек е 7.5 , десно од него е 2, 2 е помал од 7.5 и затоа се заменува со -1.
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
float s=0,prosek=0;
  float brojac=0;
  for(int i=0;i<n;i++) {
      for (int j = 0; j < n; j++) {
          if(i+j<n-1)
          {
              s+=matrica[i][j];
           brojac++;
          }
          prosek=s/brojac;
          if(i+j>n-1)
          {
              if(matrica[i][j]<prosek)
              {
                  matrica[i][j]=-1;
              }
          }
      }
      prosek=0;
      brojac=0;
      s=0;

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
