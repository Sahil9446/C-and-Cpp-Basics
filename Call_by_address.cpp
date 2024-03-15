#include<iostream>
using namespace std;

void swap(int &x, int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int main()
{
    int a=10;
    int b=20;
    cout<<"The numbers are: "<<a<<endl;
    cout<<"The numbers are: "<<b<<endl;
    swap(a,b);
    cout<<"The numbers are after swapping: "<<a<<endl;
    cout<<"The numbers are after swapping: "<<b<<endl;


}


