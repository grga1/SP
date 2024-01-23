/* Од стандарден влез се читаат низи од знаци се додека не се прочита знакот #. 
Да се напише програма во која од за секој прочитан ред ќе се отпечати бројот на цифри во тој ред, знакот :,
па самите цифри подредени според ASCII кодот во растечки редослед.
Низите од знаци не се подолги од 100 знаци. */

#include <iostream>
#include <cstring>
using namespace  std;
int brojac(char niza[]){
    int s=0;
    for(int i=0;niza[i]!='\0';i++)
    {
        if(isdigit(niza[i])) s++;
    }
    return s;
}
void newniza(char niza[],char nova[]){
    int j=0;
    for(int i=0;niza[i]!='\0';i++)
    {
        if(isdigit(niza[i]))
            nova[j++]=niza[i];
    }
    nova[j]='\0';
}
void swap(char &a,char &b){
    char temp=a;
    a=b;
    b=temp;
}
void swapped(char niza[]){
    bool swapce= true;
    while (swapce){
        swapce=false;
        for(int i=0; i<strlen(niza)-1;i++)
        {
            if(niza[i]>niza[i+1]) {
                swap(niza[i], niza[i + 1]);
                swapce= true;
            }

        }
    }
}
int main() {
char niza[100];
char nova[100];
while(cin.getline(niza,100)){
    if(niza[0]=='#')break;
    newniza(niza,nova);
    swapped(nova);
    cout<<brojac(niza)<<":"<<nova<<endl;

}
return 0;
}
