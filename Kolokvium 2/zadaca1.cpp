/* Се внесуваат низи од значи од стандарден влез.
Да се избројат и испечатат сите последнователни појавувања на соседни самогласки во речениците.
Појавата на големи и мали букви да се игнорира.
Пронајдените парови самогласки да се испечатат на екран, секој во нов ред со мали букви. 
Потоа во нов ред се печати бројот на појавувања на паровите самогласки.
Читањето завршува кога ќе се прочита знакот #.

Пример:

IO is short for Input Output
medioio medIo song
#
Излез:

io
ou
io
oi
io
io
6 */

#include <iostream>
#include <cstring>
using namespace std;
bool proverka(char znak){
    if(tolower(znak)=='a'||tolower(znak)=='e'||tolower(znak)=='i'||tolower(znak)=='o'||tolower(znak)=='u')
      return true;
    return false;
}
int main(){
    char niza[100];
    int brojac=0;
    while(cin.getline(niza,100)){

        if(niza[0]=='#')
            break;
        for(int i=0;i< strlen(niza);i++)
        { if(proverka(niza[i])&& proverka(niza[i+1]))
            {
            char n= tolower(niza[i]),m= tolower(niza[i+1]);
                brojac++;
                cout<<n<<m<<endl;
            }
        }

    }
    cout<<brojac;
}
