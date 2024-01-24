/* Еден елемент се заматува ако се најде аритметичка средина на елементот и сите негови соседи. 
Сосед на еден елемент се сите елементи кои припаѓаат на матрицата и 
се  околу истиот елемент (хоризонтално, вертикално и дијагонално). 
Од стандарден влез се чита матрица од реални броеви (3 < n,m < 50).
Прво се читаат бројот на редици и колони на матрицата и 
во секој преостанат ред се внесува еден ред од матрицата (види пример).
По читањето на матрицата, се внесуваат и 2 пара координати на матрицата (ред и колона) кои 
го репрезентираат горниот-лев и долниот-десен елемент од регионот. Потребно е да генеирате нова матрица 
во која ќе ги заматите сите елементи кои припаѓаат на регионот. 
Новодобиената матрица, во истиот формат, треба да се испечати (види пример).
*/

#include <iostream>
#include <iomanip>
using namespace  std;
int main(){
    int m,n;
    cin>>m>>n;
    float matrica[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrica[i][j];
        }
    }
    int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
float niza[100];
int k=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            float as=0;
            float brojac=1;
           if(i>=x1&&i<=x2&&j>=y1&&j<=y2)
           {
               if(j+1<n)
               {
                   as+=matrica[i][j+1];
                   brojac++;
               }
               if(j-1>=0)
               {
                   as+=matrica[i][j-1];
                   brojac++;
               }
               if(i-1>=0)
               {
                   as+=matrica[i-1][j];
                   brojac++;
               }
               if(i+1<m)
               {
                   as+=matrica[i+1][j];
                   brojac++;
               }
               if(i-1>=0&&j+1<n)
               {
                   as+=matrica[i-1][j+1];
                   brojac++;
               }
               if(i+1<m&&j+1<n)
               {
                   as+=matrica[i+1][j+1];
                   brojac++;
               }
               if(i-1>=0&&j-1>=0)
               {
                   as+=matrica[i-1][j-1];
                   brojac++;
               }
               if(i+1<m&&j-1>=0)
               {
                   as+=matrica[i+1][j-1];
                   brojac++;
               }
               as+=matrica[i][j];
               niza[k++]=as/brojac;
           }
        }
    }
    k=0;
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++) {
        if (i >= x1 && i <= x2 && j >= y1 && j <= y2) {
            matrica[i][j] = niza[k++];
        }
    }
}
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++) {

            cout<<matrica[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
