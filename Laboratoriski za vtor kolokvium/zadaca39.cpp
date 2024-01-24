/*Напишете програма со која ќе ја пронајдете поднизата со најголем збир на елементите и испечатете го тој збир.
Дополнително, пронајдете го и испечатете го процентот на елементи што се користат во поднизата во споредба со 
вкупниот број на елементи на низата. 
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    int niza[n];
    for (int i = 0; i < n; i++) {
        cin >> niza[i];
    }
  int currentsum=niza[0];
    int maxsum=niza[0];
    int start=0;
    int end=0;
    for(int i=1;i<n;i++)
    {
        if(currentsum<0)
        {
            currentsum=niza[i];
            start=i;
        }
        else
        {
            currentsum+=niza[i];
        }

        if(currentsum>maxsum)
        {
            maxsum=currentsum;
            end=i;
        }
    }
    float brojac=0;
    for(int i=start;i<=end;i++)
    {
        brojac++;
    }
    cout<<"Maximum Sum: "<<maxsum<<endl;
    cout<<"Percentage of Elements Used: "<<brojac/n*100;
     return 0;
  }
