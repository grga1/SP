/*На влез имате NxM матрица, каде прво се вчитуваат N и М, а потоа елементите на матрицата.
Ваша задача е да ги испечатите дијагоналните елементи (види слика) почнувајќи од првиот ред на матрицата.
Видете тест примери за печатење
Напомена: внимавајте во случај да матрицата не е квадратна
*/

#include <iostream>
using namespace  std;

int main() {

    int m, n;
    cin >> m >> n;
    int matrica[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrica[i][j];
        }
    }
  
    for (int j = 0; j < n; j++) {
        int i=0,k=j;
    do {
        cout << matrica[i++][k--] << " ";
    } while (i < m && k >= 0);
cout<<endl;
}

    return 0;
}
