/* Да се напише програма со која ќе се печатат најмалите k елементи од низата.
Низата и бројот на најмалите елементи се внесуваат преку тастатура.  
*/

#include <iostream>
using namespace  std;
void swap(int &a,int &b){
    int tmp=a;
    a=b;
    b=tmp;
}
void bubblesort(int niza[],int n){
    bool swapped= true;
    while(swapped) {
        swapped=false;
        for (int i = 0; i < n-1; i++) {
           if(niza[i]>niza[i+1])
           {
               swap(niza[i],niza[i+1]);
               swapped= true;
           }
        }
    }
    }
int main(){
    int n,m;
    cin>>n>>m;
    int niza[n];
    for(int i=0;i<n;i++)
    {
        cin>>niza[i];
    }
    bubblesort(niza,n);
    cout<<m<<"-te najmali elementi se: ";
    for(int i=0;i<m;i++) {
        cout << niza[i]<<" ";
    }
}
