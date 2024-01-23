/* Еден елемент од матрица ја дели матрицата на 4 квадранти (прикажани на сликата).
Притоа самиот елемент кој ја дели матрицата припаѓа во четвртиот квадрант (-5 во примерот на сликата).
Од стандарден влез се внесува матрица со димензии NxM (1 <= N, M < 100).
Потоа се внесуваат два броеви кои претставуваат индекси на еден елемент од матрицата.
Да се најдат сумите на секој од квадрантите и да се испечатат на стандарен излез.
Притоа се печати сумата за првиот квадрант, па за вториот, па третиот и на крај за четвртиот. 
Доколку не може да се креира квадрант, тогаш за сумата на тој квадрант треба да се испечати 0. */

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

    int row,col;
    cin>>row>>col;
    int kvadrant1=0,kvadrant2=0,kvadrant3=0,kvadrant4=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<row&&j<col)
            {
                kvadrant2+=matrica[i][j];
            }
            else
                if(i<row&&j>=col)
                {
                    kvadrant1+=matrica[i][j];
                }
                else
                    if(i>=row&&j<col)
                    {
                        kvadrant3+=matrica[i][j];
                    }
                    else
                    {
                        kvadrant4+=matrica[i][j];
                    }
        }
    }
    cout<<kvadrant1<<" "<<kvadrant2<<" "<<kvadrant3<<" "<<kvadrant4;
    return 0;
}
