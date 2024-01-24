/*Да се напише програма во која со помошна функција што користи покажувачи,
елементите на низата ќе се променат така што секој елемент ќе биде еднаков на збирот од него самиот 
и неговиот претходник кој е изменет според истата логика. 
*/

#include <iostream>
using namespace  std;
void funk(int niza[],int n){
    int *ptr[n];

    for(int i=0;i<n;i++)
    {
        ptr[i]=&niza[i];
    }
    for(int i=1;i<n;i++)
    {
        *ptr[i]=*ptr[i]+*ptr[i-1];
    }
}
int main() {
    int n;
    cin>>n;
    int niza[n];
    for(int i=0;i<n;i++)
    {
        cin>>niza[i];
    }
    cout<<"Vnesenata niza e:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<niza[i]<<" ";
    }

    funk(niza,n);
cout<<endl;
    cout<<"Novata niza e:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<niza[i]<<" ";
    }

    return 0;
}
