#include<iostream>
using namespace std;
int main(){
  int arr[5]={4,6,7,8,9};
    int n;
    cout<<"enter n: ";
    cin>>n;
  int start= 0;
  int end = sizeof(arr)-1;
   bool result;
   int mid;
   while(start<=end){
    mid = (start+end)/2;
      if(arr[mid]==n){
      result = true;
      break;
  }else if(n>arr[mid]){
        start=mid+1;
  }else{
    end = mid -1;
  }
  }if(result == true){
    cout<<"element found at: "<<mid<<endl;
  }else{
    cout<<"element not found";
}
}