#include<iostream>
#include<conio.h>
using namespace std;
void addition(int a,int b);     //function prototype function
int main()
{
    addition(10,20);
    getch();
}
void addition(int a,int b)
{
    int sum = a + b;
    cout<<"Sum is : "<<sum<<endl;
}


