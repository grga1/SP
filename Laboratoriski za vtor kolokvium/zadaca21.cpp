/*Од стандарден влез се внесуваат број на елементи на низа и самата низа. 
Ваша задача е да најдете најголем и најмал елемент на низата, 
како и да ја трансформирате низата така што секој елемент ќе се зголеми за разликата помеѓу најголемиот 
и најмалиот елемент и на крајот да ги испечатите најголемиот, 
најмалиот елемент и трансформираната низата. 
*/

#include <iostream>
using namespace  std;

int main() {
    int n;
    cin>>n;
    int niza[n];
    for(int i=0;i<n;i++) {
        cin >> niza[i];
    }
    int max=-1000;
    int min=1000;

    for(int i=0;i<n;i++) {
     if(niza[i]>max)
     {
         max=niza[i];
     }
     if(niza[i]<min)
     {
         min=niza[i];
     }
    }
    int razlika=max-min;
    for(int i=0;i<n;i++)
    {
        niza[i]=niza[i]+razlika;
    }
    cout<<"MAX -> "<<max<<endl;
    cout<<"MIN -> "<<min<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<niza[i]<<" ";
    }
}
