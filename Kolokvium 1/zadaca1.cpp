//Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8). 
//Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија вредност се внесува од тастатура),
//да се најде и испечати најмалиот „благ број“. 
// Ако не постои таков број, да се испечати NE.
#include <iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int temp,temp1,s2,s1;
   int min=n;

    for(int i=m;i<=n;i++)
    {  temp=i;
        do {
            temp1=temp%10;

            if(temp1%2==0)
            {
                s2++;
            }

            s1++;


            temp/=10;
        }while(temp!=0);

        if(s2==s1&&i<min)
        {

            min=i;


        }
        s1=0;
        s2=0;
    }
    s1=0;
    s2=0;
 int min1,minn=min;
    do {
        min1=minn%10;

        if(min1%2==0)
        {
            s2++;
        }

        s1++;


        minn/=10;
    }while(minn!=0);
    if(s1==s2)
    {
        cout<<min;
    }
    else {
        cout << "NE"<<endl;
    }
    return 0;
}
