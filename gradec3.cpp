#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"enter your marks: ";
    cin>>n;
    if(n>=90&&n<=100){
        cout<<"A"<<endl;
    }
    if(n<=89&&n>=80)
    {
        cout<<"B"<<endl;
    }
    if(n<=79&&n>=70)
    {
        cout<<"C"<<endl;
    }
    if(n<=69&&n>=60){
        cout<<'D'<<endl;
    }
    if(n<60){
        cout<<"F"<<endl;
    }
    else{
        cout<<"H"<<endl;
    }
}