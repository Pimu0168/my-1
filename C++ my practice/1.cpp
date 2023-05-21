#include<iostream>
using namespace std;
void swapping(int *x,int *y,int *z){
    int temp;
    temp=*x;
    *x=*y;
    *y=*z;
    *z=temp;
}
int main()
{
    int x,y,z;
    cout <<"enter the values of 3 numbers" <<endl;
    cin >>x>>y>>z;
    cout<<"Number values before swipping"<<endl;
    cout <<" x= " << x <<endl;
    cout<<" y= " << y <<endl;
    cout<<"z = " << z<<endl;
    swapping(&x,&y,&z);
    cout<< "values after swipping"<<endl;
    cout<<"x= "<<x<<endl;
    cout<<"y= "<<y<<endl;
    cout<<"z="<<z<<endl;
    return 0;
}
