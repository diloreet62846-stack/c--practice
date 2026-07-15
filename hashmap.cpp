/*#include<iostream>
#include<map>
using namespace std;
class hashmap{
    
};
int main(){
  map<int,int>data;
    data [1]=1;
    data [2]=2;
    data [3]=3;

    map<string,int,greater<string>>value;
    value ["jashan"] = 70;
    value ["navjot"] = 71;
    value ["navreet"]= 70;
    for(auto ele:value){  //iterator(auto) included in c++ library
        cout<<"name: "<<ele.first<<"  "<<"->"<<" ";
        cout<<"marks: "<<ele.second<<endl;
}
   map<string,int>::iterator itr;
   for(itr=value.begin();itr!=value.end();itr++){
    cout<<"name: "<<itr->first<<" "<<"->"<<" ";
    cout<<"marks:"<<itr->second<<endl;
   }
}*/

/*array has multiple elements duplicates are also allowed . 
you have to calculate the sum of rapitative digits.*/

#include<iostream>
#include<map>
using namespace std;
int main()
{
    int arr[10]={1,2,2,4,3,3,5,6,6,6};
    map<int,int>value;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
    value[arr[i]]++;
}
    for(auto ele:value){
        int sum=0;
       // cout<<ele.first<<"-"<<ele.second<<endl;
       if(ele.second>1){
         sum = sum+1;
         cout<<sum;
    }
    }
}