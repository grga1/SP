/*Од стандарден влез се внесува број n (димензии за квадратна матрица).
Потоа се внесува матрицата. 
Да се трансформира матрицата така што секој елемент кој се наоѓа во исто време под главната 
и споредната дијагонала во обратен број. Обратен број на некој број е ако тој е позитивен да се претвори 
во негативен број, а ако бројот е негативен да се претвори во позитивен број.
Објаснување за првиот тест пример броевите што се задебелени се наоѓаат под главната и споредната дијагонала. 
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
         if(i>j&&i+j>n-1)
         {
             if(matrica[i][j]>0)
             {
                 matrica[i][j]=-1*matrica[i][j];
             }
             else if(matrica[i][j]<0)
             {
                 matrica[i][j]= abs(matrica[i][j]);
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
