/* Од тастатура се внесуваат димензиите на една матрица (m, n <= 100), а потоа и елементите од матрицата. 
  Да се генерира низа (со најмногу m) така што секој елемент од низата се добива со наоѓање на елементот
  во секоја редица од матрицата што е најоддалечен од аритметичката средина во рамки на таа редица.
  Ако постојат повеќе елементи што се најоддалечени од аритметичката средина, тогаш се зема предвид првиот.
  Редоследот на запишување на елементите во низата одговара на редоследот на редиците.

Пример:

Влез:

3 6

1 2 2 3 4 5

1 1 2 2 3 3

1 2 3 4 5 6 

Излез:
5 1  */

#include <iostream>
#include <cmath>
using namespace  std;
int main(){

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


int niza[100];
    int k=0;
    for(int i=0;i<m;i++)
    {
        double as=0;
        for(int j=0;j<n;j++)
        {
            as+=matrica[i][j];
        }
        as=as/n;
        double  razlika=0;
        double maxrazlika=-1;
        int temp=0;
        for(int j=0;j<n;j++)
        {
            razlika=abs(matrica[i][j]-as);
            if(razlika>maxrazlika)
            {
                maxrazlika=razlika;
             temp=matrica[i][j];
            }
        }
        niza[k++]=temp;
    }
    for(int i=0;i<k;i++)
    {
        cout<<niza[i]<<" ";
    }
    return 0;
}
