/*Да се напише функција void sort (int x, int y, int z) која што ќе ги сортира во опаѓачки редослед трите броја, 
односно во x ќе биде сместен најголемиот број, а во z најмалиот. 
Да не се менува main функцијата.
*/

#include <iostream>
using namespace  std;
void sort(int *a,int *b,int *c){
    int temp;
    if(*a<*b)
    {
         temp=*a;
         *a=*b;
         *b=temp;
    }
    if(*b<*c)
    {
         temp=*b;
         *b=*c;
         *c=temp;
    }
    if(*a<*b)
    {
        temp=*a;
        *a=*b;
        *b=temp;
    }
}

int main() {

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    sort(&a, &b, &c);

    printf("%d %d %d", a, b, c);

    return 0;
}
