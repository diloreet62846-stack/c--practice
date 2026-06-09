#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,c;
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        c=a+b;
        cout<<a<<endl;
        a=b;
        b=c;
        
    }

    }
