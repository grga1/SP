/*Од стандарден влез се вчитуваат 2 броја M и N, кои ја означуваат димензијата на матрицата,
MxN и потоа се внесуваат елементите во матрицата.
Вашате задача е последниот елемент во секој од редовите на матрицата, 
да го замените со максималниот елемент од таа редица.
На крај испечатете ја изменетата матрица и во нов ред среданта свредност на изменетата матицата. 
*/

#include <iostream>
using namespace std;

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

 for(int i=0;i<m;i++) {
     int max=-100;
     for (int j = 0; j < n; j++) {
     if(matrica[i][j]>max)
         max=matrica[i][j];
     }
     matrica[i][n-1]=max;
 }

float prosek=0;
 float brojac=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            prosek+=matrica[i][j];
            brojac++;
        }
    }
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrica[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<prosek/brojac<<endl;
    return 0;
}
