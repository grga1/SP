/*Од стандарден влез да се вчита број N и потоа да се вчитаат N елементи во една низа.
Внесената низа да се трансформира на начин што парните елементи ќе се зголемат за 1, 
а непарните ќе се намалат за 1.
Трансформираната низа да се испечати на стандарден излез, 
така што елементите ќе се одвоени со празно место меѓу нив.
*/

#include <iostream>
using namespace  std;

int main() {

    int n;
    cin>>n;
    int niza[n];
    for (int i = 0; i < n; ++i) {
        cin>>niza[i];
    }
    for (int i = 0; i < n; ++i) {
        if(niza[i]%2==0)
        {
            niza[i]+=1;
        } else
        {
            niza[i]-=1;
        }

    }
    for (int i = 0; i < n; ++i) {
        cout<<niza[i]<<" ";
    }

    return 0;
}

