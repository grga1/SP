//Цик-цак е број за кој што важи дека за секој пар соседни цифри,
//тие се наизменично поголеми односно помали една во однос на друга.
//На пример, ако бројот x е составен од цифрите a, b, c, d и е, тогаш за нив важи:
//a>b, b<c, c>d, d<e или a<b, b>c, c<d, d>e
//Пр. 343, 4624, 6231209
//Од тастатура се читаат непознат број цели броеви поголеми од или еднакви на 10 (броевите помали од 10 се игнорираат).
//Читањето завршува во моментот кога ќе се прочита знак што не е цифра. Да се испечатат сите цик-цак броеви.

#include <iostream>
using namespace std;

int main() {
 int broj,start;
    do{
     cin >> broj;

     start = broj;
     if (broj < 10)
         continue;

     int znak = 0;
     if (broj % 10 > broj / 10 % 10) {
         znak = 1;
     } else if (broj % 10 < broj / 10 % 10) {
         znak = 0;
     } else {
         continue;
     }

     while (broj != 0) {
         broj /= 10;
         if (broj < 10) {
             cout << start << endl;
             break;
         }
         if (znak) {
             if (broj % 10 >= broj / 10 % 10) {
                 break;
             }
         } else {
             if (broj % 10 <= broj / 10 % 10) {
                 break;
             }
         }
         znak = !znak;
     }

 }while(broj);
   return 0;
}
