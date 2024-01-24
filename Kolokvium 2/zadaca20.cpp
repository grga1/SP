/* Од тастатура се чита природен број N (N < 400).
Да се напише програма којашто формира квадратна матрица што ги содржи броевите од 1 до N 
по растечки редослед на следниот начин: во првата колона во правец од горе надолу,
па продолжува во втората колона од долу нагоре, па продолжува во третата колона од горе надолу итн.
Да се избере најмалата димензија на матрицата во која ќе ги собере сите броеви до N. 
Доколку има преостанати празни места, тие да се пополнат со нули. 
*/

#include <iostream>
#include <cmath>
using namespace  std;

int main(){
int n;
cin>>n;
int m;
m= ceil(sqrt(n));
int matrica[m][m];
int k=1;
int brojac=0;
for(int i=0;i<m;i++)
{
    int temp=m-1;
    brojac++;
    for(int j=0;j<m;j++)
    {
        if(k<=n)
        {
             if(brojac%2!=0){
            matrica[j][i]=k++;
             }else
             {
                 matrica[temp--][i]=k++;
             }
        }
        else
            matrica[j][i]=0;
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
