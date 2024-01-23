/* Oд стандарден влез се вчитува еден цел број X, димензии на матрица M и N (цели броеви),
како и елементите на матрицата со димензии M x N (цели броеви). 
Да се напише програма што ќе ги промени редиците на матрицата на следниот начин:
Ако збирот на елементите од редот е поголем од X, елементите на тој ред добиваат вредност 1
Ако збирот на елементите од редот е помал од X, елементите на тој ред добиваат вредност -1
Ако збирот на елементите од редот е еднаков на X, елементите на тој ред добиваат вредност 0
Променетата матрица да се испечати на екран. */

#include <iostream>
using namespace  std;

int main()
{
    int x;
    cin>>x;
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

    for(int i=0;i<m;i++)
    { int s=0;
        for(int j=0;j<n;j++)
        {
            s+=matrica[i][j];
        }
        if(s>x)
        {
            for(int j=0;j<n;j++)
            {
                matrica[i][j]=1;
            }
        }else
            if(s<x)
            {
                for(int j=0;j<n;j++)
                {
                    matrica[i][j]=-1;
                }
            }
            else
            {
                for(int j=0;j<n;j++)
                {
                    matrica[i][j]=0;
                }

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

    return 0;
}