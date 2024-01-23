//Од стандарден влез се читаат знаци се додека не се прочита извичник. 
//Во вака внесениот текст се скриени цели броеви (помали од 100).
//Да се напише програма што ќе ги прочита сите знаци и на излез ќе го испечати збирот на сите броеви скриени во текстот.
//Напомена: cin во C++ ги игнорира празните места (space).
//За да не ги игнорира потребно е да се додаде noskipws пред читањето на знакот (пр. cin >> noskipws >> znak;)

#include <iostream>
#include <string>
using namespace std;
int main(){

    char znak;
    int previous=0;
    int zbir=0;
    do{
        cin>>noskipws>>znak;
        if(znak>='0'&&znak<='9')
        { znak=znak-'0';
            zbir+=(previous*10+znak)- previous;
            previous=znak;

        }else
        {
            previous=0;
        }

    }while(znak!='!');
    cout<<zbir;
    return 0;
}
