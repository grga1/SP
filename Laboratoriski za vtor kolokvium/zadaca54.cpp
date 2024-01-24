/*Да се напише програма која вчитува квадратна матрица.
На почетокот се внесува бројот на редици и колони N на матрицата, 
а потоа и елементите на матрицата. 
Да се трансформира матрицата на тој начин што секој негативен број во неа би се заменил со збирот на неговите соседи. 
Соседи на даден број во матрица се броевите до него (гледано хоризонтално и вертикално). 
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

 for(int i=0;i<m;i++)
 {
     for(int j=0;j<m;j++) {
     int s=0;
      if(matrica[i][j]<0){
          if(j+1<m)
          {
              s+=matrica[i][j+1];
          }
          if(i+1<m){
              s+=matrica[i+1][j];
          }
          if(i-1>=0)
          {
              s+=matrica[i-1][j];
          }
          if(j-1>=0)
          {
              s+=matrica[i][j-1];
          }
          matrica[i][j]=s;
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
