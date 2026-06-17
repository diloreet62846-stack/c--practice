/*#include<iostream>
using namespace std;
int main(){
   int addnum(int a,int b);
   // cout<<"the sum of a and b: "<<addnum(5,3)<<endl;
    int divide(int a,int b);
    //cout<<"the divison of a and b :"<<divide(4,2)<<endl;
    int multiply(int a,int b);
    //cout<<"the multiplication of a and b: "<<multiply(2,4)<<endl;
    int sub(int a,int b);
    //cout<<"the substraction of a and b : "<<sub(8,4)<<endl;
    int n;
    cout<<"enter n from 1-4: "<<endl;
    cin>>n;
    int x1;
    cout<<"enter x1: "<<endl;
    cin>>x1;
    int x2;
    cout<<"enter x2: "<<endl;
    cin>>x2;
    switch(n){
        case 1:
        cout<<"the addition of two number is: "<<addnum(x1,x2);
        break;
        
         case 2 :
        cout<<"the division of two numbers is: "<<divide(x1,x2);
          break;
         
            case 3:
           cout<<"the multiplication of two numbers is:" <<multiply(x1,x2);
            break;
             
             case 4:
            cout<<"the substraction of two numbers is: "<<sub(x1,x2);
              break;
            
               default :
                 cout<<"output is invalid"<<endl;
                break;
            }
}

//arguments are the values that u pass while calling the function
//parameters are the that u pass while defining the function

int addnum(int a,int b){
    return a+b;

}
int divide(int a, int b){
    return a/b;
}
int multiply(int a,int b){
    return a*b;
}
int sub(int a, int b){
    return a-b;
}  */

//1.take input from user 1-4
//2. if 1 then subtract........... then default


  /* #include<iostream>
   using namespace std;
   int main(){
     int add(int a=0,int b=0);
      cout<<"addition is: "<<add();
   }
   int add(int a,int b){
       return a+b;
   }*/

   #include<iostream>
   using namespace std;
   int main(){
    bool evennum(int n);
    int arr[6]={568,74,108,999,571,23};
    int even[10];
    int odd[10];
    int e = 0; int o = 0;
       for(int i=0;i<6;i++){
        if(evennum(arr[i])==true){
        even[e]=arr[i];
        e++;
       }
       else{
        odd[o]=arr[i];
        o++;
     
}}
   for(int j=0;j<e;j++){
    cout<<even[j]<<endl;
   }
   for(int k=0;k<o;k++){
    //cout<<odd[k]<<endl;
   }
   return 0;
}

bool evennum(int n){
    if(n%2==0){
    return true;
}
    else{
        return false;
    }
}
