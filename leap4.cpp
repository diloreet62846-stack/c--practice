#include<iostream>
using namespace std;
int main()
{
 int n;
 cout<<"enter the year: "<<endl;
 cin>>n;
 if(n%4==0){
    cout<<"this is a leap year"<<endl; 
}
else{
    cout<<"This is not a leap year"<<endl;
}
}