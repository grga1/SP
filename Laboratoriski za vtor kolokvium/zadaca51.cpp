/*Од стандарден влез да се прочита квадратна матриција со број на редици и колони N.
Прво се вчитува бројот N а потоа и N*N елементите на матрицата.
Вашате задача е треба да ги замените сите парни елементи во матрицата со збирот на нивните индекси на редови и колони. 
На крај испечатете ја изменетата матрица. 
*/

#include <iostream>
using namespace std;

int main() {

 int m,n;
 cin>>m;
 int matrica[m][m];
 for(int i=0;i<m;i++)
 {
     for(int j=0;j<m;j++)
     {
         cin>>matrica[i][j];
     }
 }

 for(int i=0;i<m;i++) {
     for (int j = 0; j < m; j++) {
  if(matrica[i][j]%2==0)
  {
      matrica[i][j]=i+j;
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
