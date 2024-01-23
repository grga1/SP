//Цик-цак е број за кој важи дека за секој пар соседни цифри во бројот важи дека едната е помала од 5,
//а другата е поголема или еднаква на 5.
//На пример, ако бројот x е составен од цифрите a, b, c и d, тогаш за нив важи:
//a<5, b>=5, c<5, d>=5 или a>=5, b<5, c>=5, d<5
//Пр.  508294, 2638, 81
//Од тастатура се читаат непознат број на цели броеви поголеми од или еднакви на 10 (броевите помали од 10 се игнорираат).
//Читањето завршува во моментот кога ќе се прочита знак што не е цифра. Да се испечатат сите цик-цак броеви.

#include <iostream>
using namespace std;

int main() {
    int broj,start;
    while(1){
        cin >> broj;
 if(!broj) break;
        start = broj;
        if (broj < 10)
            continue;

        int znak = 0;
        if (broj % 10 < 5) {
            znak = 1;
        } else {
            znak = 0;
        }

        while(broj!=0){
            broj/=10;
            if(broj==0){
                cout<<start<<endl;
                break;
            }
            if(znak){
                if(broj%10<5) break;
            }else{
                if(broj%10>=5) break;
            }
            znak=!znak;
        }
    }
    return 0;
}