/*#include<iostream>
using namespace std;
//recursion- when the function calls itself repeatedly.
//basecase
//backtracking,function calling
 
void printnums(int n){
    //basecase
     if(n==0){
        return;
     }else{
        printnums(n-1);
        cout<<n<<endl;
     }
}
 int main(){
   printnums(5);

}*/

//[factorial]**
//basecase- if n==1 -> return n
//else - n*fact(n-1)
/*#include<iostream>
using namespace std;
int factorial(int n){
  if(n==1){
   return n;
  }else{
   return n*factorial(n-1);
  }
}
int main(){
   int n;
   cout<<"enter n: "<<endl;
   cin>>n;
   cout<<"The factorial of your number is: "<<factorial(n);
}*/
  /*#include<iostream>
using namespace std;
int binary(int arr[],int start,int end, int n){
  if(start>end){
   return -1;
  }
int mid=(start+end)/2;
   if (arr[mid]==n){
       return mid ;
   }
   if (n<arr[mid]){
  return binary(arr,start,mid-1,n);
}
else{
   return binary(arr,mid+1,end,n);
}
}
int main(){
  int arr[5]={2,4,6,8,10};
  int n;
   cout<<"enter n:"<<endl;
   cin>>n;
  int result = binary(arr,0,sizeof(arr[0]/sizeof(arr)),n);

    if (result==-1){
      cout<<"element is not there "<<endl;

    }else{
      cout<<"element found at "<<result;
    }
}*/

/*#include<iostream>
using namespace std;
int fibo(int n){                               
 if(n<=1){                                      //1.define a variable(n) to take input from user in your main function
  return n;                                     //3.give the conditions inside the function
}                                               //(I) if n<=1 then return the variable 
  else{                                         //(II) else return your functionname(n-1)+(n-2) / makes the fibo series
   return fibo(n-1)+fibo(n-2);                  //4.define a loop inside your main function to print the values of series with the
}                                               //conditon that loop starts from 0 and calls n-1 or loop<n (n is the input that you take from user) times.
}
int main(){                                      // define a function (fibo)
   int n;                                           
   cout<<"how many fibbo numbers you want: ";
   cin>>n;

   for(int i =0; i<n;i++){
      cout<<fibo(i)<<endl;
   }

}*/
.