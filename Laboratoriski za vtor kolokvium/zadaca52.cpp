/*Од стандарден влез се вчитува квадратна матрица со n редици и колони.
Прво се вчитува бројот n, па потоа и n x n елементите на матрицата.
Вашата задача е да напишете програма во C++ која ќе определува дали дадената матрица е "магичен квадрат".
Магичен квадрат е квадратна матрица каде што збирот на елементите во секој ред и колона е ист.
Доколку матрицата е "Магичен квадрат", да се испечати "True" и да се променат елементите од главната и 
споредната дијагонала со збирот од елементите што е ист за секоја редица и колона.
Во спротивно да се испечати "false". 
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

     }
 }
 int zbir=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            zbir+=matrica[i][j];
        }
        break;
    }
     int proverka1= true;
    for(int i=0;i<m;i++)
    {  int zbir1=0;
        for(int j=0;j<m;j++)
        {
            zbir1+=matrica[i][j];
        }
        if(zbir1!=zbir)
            proverka1=false;
    }
     int proverka2= true;
    for(int i=0;i<m;i++)
    { int zbir2=0;
        for(int j=0;j<m;j++)
        {
            zbir2+=matrica[j][i];
        }
        if(zbir2!=zbir)
            proverka2= false;
    }

    if(proverka1&&proverka2)
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==j||i+j==m-1)
                    matrica[i][j]=zbir;
            }
        }
    }
    if(proverka1&&proverka2)
    {
        cout<<"True"<<endl;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
               cout<<matrica[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
        cout<<"False";
    return 0;
}
