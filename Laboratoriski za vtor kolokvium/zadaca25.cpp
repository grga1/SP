/* Од тастатура се чита број n а потоа и низа од n елементи. 
Потребно е низата да се трансформира така што максималниот и минималниот елемент ќе си ги заменат местата, 
а на останатите елементи ќе им се додаде разликата меѓу максималниот и минималниот елемент. 
Самата трансформација треба да се изврши во функцијата 
void transform(int *arr, int n)
*/

#include <iostream>
using namespace  std;
void transform(int *arr,int n){
    int max=-1000,min=1000;
    int indexMax=0,indexMin=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max)
        {
            max=arr[i];
            indexMax=i;
        }
        if(arr[i]<min)
        {
            min=arr[i];
            indexMin=i;
        }
    }
    int razlika=max-min;
    for(int i=0;i<n;i++){
        if(i==indexMax)
        {
            arr[i]=min;
        }else
        if(i==indexMin)
        {
            arr[i]=max;
        }else
        {
            arr[i]+=razlika;
        }

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
    transform(niza,n);
    for(int i=0;i<n;i++)
    {
        cout<<niza[i]<<" ";
    }
    return 0;
}
