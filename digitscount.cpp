#include<iostream>
using namespace std;
int main()
{   // 123 

   int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    int n2 = n ; 
    int count = 0 ; 
    int rev = 0 ; 
    while (n > 0 ){
        int digit = n%10; 
        rev = digit + rev*10 ; 
        n = n/ 10 ;    
    }
    cout<<rev<<endl; 
    if(rev==n2){
        cout<<"PALINDROME"<<endl;
    } else{
        cout<<"NOT PALINDROME"<<endl;
 }
}