#include<iostream>
using namespace std;
int main()
    {
   int a,b,c;
   cout<<"enter number a: "<<endl;
   cin>>a;
   cout<<"enter number b: "<<endl;
   cin>>b;
   cout<<"enter number c; "<<endl;
   cin>>c;
   if(a>b&&a>c){
    cout<<"a is largest"<<endl;
   }
   if(b>a&&b>c){
    cout<<"b is largest"<<endl;
   }
   if(c>a&&c>b){
    cout<<"c is largest"<<endl;
}
else {
    cout<<"same"<<endl;
}
}
