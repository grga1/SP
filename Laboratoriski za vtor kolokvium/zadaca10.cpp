/* Да се напише програма која чита две целобројни матрици со димензија mxn, 
а потоа печати колку колони од првата матрица се наоѓаат во втората матрица.
*/

#include <iostream>
using namespace  std;

int main() {

    int m,n;
    cin>>m>>n;
    int matrica1[m][n];
    int matrica2[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        {
            cin>>matrica1[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        {
            cin>>matrica2[i][j];
        }
    }
    
int s=0;
    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++)
        {
            bool proverka= true;
            for(int k=0;k<m;k++)
            {

                if(matrica1[k][i]!=matrica2[k][j])
                {
                    proverka = false;
                    break;
                }
                

            }
            if (proverka)
            {
                s++;
            }
        }
    }
    cout<<s;
    return 0;
}
