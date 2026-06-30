#include<iostream>
using namespace std;
int main(){
/*int n[6]={3,5,7,9,2,4};          // O(1) [complexity]
for(int i =0;i<6;i++){             // O(n)
                                   // time complexity - execution time with respect to inputs given not depends on the length on the code .....
 cout<<n[i]<<endl;                 // O(1)- constants
}                                  // O(n) -  loop
}  */                              // O(n^2)

//overall - O(n+1)=> O(n)
 /* int n= 4;
  for(int i=0;i<n;i++){
    for(int j =0;j<n;j++){              // O(n^2)
        cout<<"*";
    }
    cout<<endl;
  }
   }*/

   // O(log n) - when input size repeatedely decreases
   //  linear  search
     /*int n;
     cout<<"enter elememt that you want to find: "<<endl;
     cin>>n;
     int i;
     bool res;
     int arr[6]={3,6,4,7,2,9};
     for( i=0;i<6;i++){
        if(arr[i]==n){
            res=true;
            break;
        }  
        else{
            res = false;
        }  }
    if(res==true){
        cout<<"element is found at: "<<i<<endl;
    }
    else {
        cout<<"element not found"<<endl;
    }
    

}*/

//binary search
int n;
cout<<"enter the element: "<<endl;
cin>>n;
int arr[6]={2,4,6,8,9,10};
int m = arr[0]+arr[5]/2;
for(int i =0;i<6;i++){
    if(arr[i]==m){
    cout<<"element is found at:"<<i<<endl;
    }
    else if (arr[i]==m-1){
        cout<<"element found at: "<<i<<endl;
    }
    else if(arr[i]==m-2){
        cout<<"element found at: "<<i<<endl;
}

}
}
