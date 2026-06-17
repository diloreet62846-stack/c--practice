/*#include<iostream>
using namespace std;
int main()
{
int s=5;
//two types of operator -- 1. *(dereferencing)store  the value address  2. &(ampercent) brings memory address
//types of pointer depends on the types of variable's data type
//int *ptr=&s;
//cout<<ptr<<endl;
//int **pptr=&ptr;
//*ptr=7;
//cout<<pptr<<endl;
int arr[8]={3,6,4,8,9,2,0,7};
for(int i=0;i<8;i++){
int *ptr=&arr[i];
cout<<"address of element"<<i<<":"<<ptr<<endl;
}
//cout<<&arr[0];
}*/

#include<iostream>
using namespace std;
int main(){
   /*int arr[3]={3,5,6};
    for(int i=0;i<3;i++){
        int *ptr=&arr[i];
        cout<<ptr<<endl;
        ptr++;
    
   int n=3;
   int *ptr=&n;
   *ptr++; //shifts to next integer location 
   cout<<ptr<<endl;
   cout<<n<<endl;*/

//*dynamic memory allocation*//
/*int *ptr = new int;//(new)always delete dynamically allocated memory
*ptr=5;
cout<<ptr<<endl;
delete ptr;//delete from memory locatin 
ptr = nullptr;
cout<<ptr<<endl;
}*/
/*int a;
cout<<"enter the size of array: "<<endl;
cin>>a;
int *ptr = new int[a];
for(int i =0;i<a;i++){
    cout<<ptr[i]<<endl;
    delete[] ptr;
    ptr = nullptr;
    cout<<ptr<<endl;
}*/

/*int a=3;
int b =4;
int *ptr = &a;
int temp = b;
b=*ptr;
a=temp;
cout<<a<<endl;
cout<<b;*/


int a = 4;
int b = 5;
    //
    int swap(a=b);
    cout<<a<<endl;
    cout<<b;


}