/*Од тастатура се чита димензија на квадратна матрица(максимална големина 100х100). 
Треба да се провери дали матрицата го задоволува следниот услов: секој елемент од главната дијагонала да 
биде еднаков со збирот на елементите десно (во истата редица) од тој елемент.
Ако матрицата го исполнува условот истата треба да се испечати на екран, а во спротивно се  печати -1. 
*/

#include <iostream>
using namespace  std;

int main() {

    int n;
    cin>>n;
    int matrica[n][n];
int s1=0,s2=0;
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          cin>>matrica[i][j];
      }
  }
  int s3=0;
  for(int i=0;i<n;i++) {
      for (int j = 0; j < n; j++) {
          if (i == j) {
              s1 += matrica[i][j];
          } else if (i < j) {
              s2 += matrica[i][j];
          }
      }
      if (s1 == s2) {
          s3++;
      }
      s1 = s2 = 0;

  }
 if(n-1==s3)
 {
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<n;j++)
         {
             cout<<matrica[i][j]<<" ";
         }
         cout<<endl;
     }
 }
 else
 {
     cout<<-1;
 }

    return 0;
}
