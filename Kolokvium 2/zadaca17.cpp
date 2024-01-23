/* Од тастатура се внесуваат димензиите на една матрица (m,n <= 100), а потоа и елементите од матрицата.
Да се трансформира матрицата така што средниот елемент во секоја редица ќе се замени со разликата (по апсолутна вредност) 
на сумата на елементите во првата половина од редицата и сумата на елементите во втората половина на редицата.
Ако матрицата има парен број колони, се менува вредноста на средните два елемента.
Средниот/те елемент/и влегува/ат во сумите (при непарен број на колони, средниот елемент влегува во двете суми!). 
Да се испечати на екран променетата матрица. */

#include <iostream>
using namespace std;

int main() {
    int m,n;
    cin >>m>> n;
    int matrica[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrica[i][j];
        }
    }
    int suma1 = 0, suma2 = 0;
 if(n%2==0) {

     for (int i = 0; i < m; i++) {
         suma1 = 0;
         suma2 = 0;
         for (int j = 0; j < n / 2; j++) {
             suma1 += matrica[i][j];
         }
         for (int j = n / 2; j < n; j++) {
             suma2 += matrica[i][j];
         }
         
         for (int j = 0; j < n; j++) {
             if (j == n / 2) {
                 matrica[i][j - 1] = matrica[i][j] = abs(suma1 - suma2);
             }
         }
     }
 }else
 {
     for (int i = 0; i < m; i++) {
         suma1 = 0;
         suma2 = 0;
         for (int j = 0; j < (n/2)+1; j++) {
             suma1 += matrica[i][j];
         }
         for (int j = (n/2); j < n; j++) {
             suma2 += matrica[i][j];
         }
      
         for (int j = 0; j < n; j++) {
             if (j == (n / 2)) {
                 matrica[i][j] = abs(suma1 - suma2);
             }
         }
     }

 }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout<< matrica[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
