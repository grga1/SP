/*За потребите на професорите и асистентите на ФИНКИ потребно 
е да напишете програма која ќе врши скалирање на поените на студентите од еден испит.
Од стандарден влез потребно е да се вчитаат поени од определен испит на најмногу 100 студенти
и истите да се зачуваат во низа. 
Да се дефинира функција void scale која ќе прими како аргумент низа од броеви (поени на студентите на испитот).
Функцијата потребно е да ги скалира поените на следниот начин:
Да се најдат максималните поени на испитот (пример 88 од 100)
Да се пресмета количникот 100/max (пример 100/88 = 1.13636) 
Сите поени од низата да се помножат со овој количник со цел студентот којшто има најмногу поени на испитот да
добие 100 поени.
Да се испечати на екран низата со скалирани поени. Да не се користи помошна низа за решавање на задачата,
односно трансформацијата на низата да биде  in-place.  
*/

#include <iostream>
#include <iomanip>
using namespace std;
void scale(int n,float niza[]){
    float max=-1000;
    for(int i=0;i<n;i++)
    {
        if(niza[i]>max)
        {
            max=niza[i];
        }
    }

    float kolicnik=100/max;

    for(int i=0;i<n;i++)
    {
        niza[i]=niza[i]*kolicnik;
    }

}
int main() {
 int n;
 cin>>n;
 float niza[n];
    for(int i=0;i<n;i++)
    {
        cin>>niza[i];
    }
    scale(n,niza);
for(int i=0;i<n;i++)
{
    cout<<fixed<<setprecision(2)<<niza[i]<<" ";
}
    return 0;
}