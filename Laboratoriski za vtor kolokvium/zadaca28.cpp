/*Од стандарден влез се чита број N, а потоа низа на N цели броеви.
Да се дефинира функција int isInteresting(int number) која што ќе врати 1 доколку е интересен број,
односно доколку цифрите на бројот се парна-непарна цифра, наизменично. 
Во спротивно враќа 0. Да се дефинира функција void printArray(int numbers[], int n) к
оја што ќе ги испринта сите броеви во низата кои што се интересни. 
Пример интересни броеви: 1634, 678, 141858
За се освојат сите поени од вежбата, потребно е функцијата printArray да биде рекурзивна. 
*/

#include <iostream>
using namespace  std;
bool isInteresting(int number,bool flag){
    if(number==0)
    {
        return true;
    }
    if(number%2==0&&flag){
        return isInteresting(number/10,!flag);
    }
    else if(number%2!=0&&!flag)
    {
        return isInteresting(number/10,!flag);
    }
    else
        return false;
}
int main() {

    int n;
    cin>>n;
    int niza[n];
    for(int i=0;i<n;i++)
    {
        cin>>niza[i];
    }
    for(int i=n-1;i>=0;i--) {
        if (isInteresting(niza[i], 1)|| isInteresting(niza[i],0))
        {
            cout<<niza[i]<<endl;
        }
    }return 0;
}
