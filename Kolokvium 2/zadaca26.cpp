/* Од стандарден влез се чита природен број N (N <= 100), како и низа a[ ] од N цели броеви. 
Да се напише функција void premesti(а, n) која го преместува секој пронајден негативен број на крајот на низата.
По преместувањето редоследот на позитивните броеви треба да остане ист како и во оригиналната низа,
а истото важи и за редоследот на негативните.
Нaпишете програма која ќе ја повика функцијата premesti за внесената низа a[ ]
и потоа ќе ја испечати новодобиената низа.   
*/

#include <iostream>
using namespace  std;
void premesti(int a[], int n) {
    int pozitivni[n], negativni[n];
    int brPozitivni = 0, brNegativni = 0;

    // Разделување на позитивни и негативни броеви во посебни низи
    for (int i = 0; i < n; i++) {
        if (a[i] >= 0) {
            pozitivni[brPozitivni] = a[i];
            brPozitivni++;
        } else {
            negativni[brNegativni] = a[i];
            brNegativni++;
        }
    }

    // Копирање на позитивните и негативните броеви назад во оригиналниот низ
    for (int i = 0; i < brPozitivni; i++) {
        a[i] = pozitivni[i];
    }
    for (int i = 0; i < brNegativni; i++) {
        a[brPozitivni + i] = negativni[i];
    }
}

int main() {
    int N;

    // Внеси го бројот на елементи во низата
    cin >> N;

    int a[N];

    // Внеси ги елементите во низата
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    // Повикај ја функцијата за преместување
    premesti(a, N);

    // Исечати ја новодобиената низа
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
