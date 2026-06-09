#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number: "<<endl;
    cin>>n;
    if(n%2==0){
     cout<<"the numbef is even: "<<endl;  
     }
     else{
        cout<<"the number is odd"<<endl;
     }
     int m;
     cout<<"enter the 2nd number: "<<endl;
     cin>>m;
     if(m%5==0){
        cout<<"the number is divisible by 5"<<endl;
     }
     else{
        cout<<"the number is not divisible by 5"<<endl;
     }
}