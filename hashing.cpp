/*#include<iostream>
using namespace std;
class h{
public:
};
int main(){
int size=5;
int hashtab[size];
for(int i=0;i<size;i++){
    hashtab[i]= -1;
}
int m;
cout<<"enter the  num of eles - : "<<endl;
cin>>m;
for(int j=0;j<m;j++){
    /*cout<<"enter elements: "<<endl; //linear probing
    cin>>hashtab[j];*/
    /* int n;
     cout<<"enter the element.n: "<<endl;
     cin>>n;
     int i=n%size;
    while(hashtab[i]!=-1){
       i=(n+i)%size;
       i++;
    }
    hashtab[i]=n ; 
}

//priniting the hashtable
for(int k=0;k<size;k++){
    cout<<hashtab[k]<<endl;;
}
}*/

/*[h.w]searching in hashtable,*/
/*#include<iostream>
#include<list>
#include<vector>
using namespace std;
class hashtable{
    public:
  int tablesize;
vector<list<int>>table;
hashtable(int size){
    tablesize=size;
    table.resize(tablesize);
}
void add(int a){
    int hashIdx= a % tablesize;
    table[hashIdx].push_back(a);   //chaining
}
void del(){

}
void search(){

}
};

int main(){

}*/

#include<iostream>
using namespace std;
int main(){
int size=5;
int hashtab[size];
for(int i=0;i<size;i++){
    hashtab[i]= -1;
}
int m;
cout<<"enter the  num of eles - : "<<endl;
cin>>m;
for(int j=0;j<m;j++){
     int n;
     cout<<"enter the element.n: "<<endl;
     cin>>n;
     int i=n%size;
    while(hashtab[i]!=-1){
       i=(n+i)%size;
       i++;
    }
    hashtab[i]=n; 
}
for(int k=0;k<size;k++){
    cout<<hashtab[k]<<endl;;
}
int target;
cout<<"enter the element you want to search: "<<endl;
cin>>target;
int IDX=target%size;
int start=IDX;
while(hashtab[IDX]!=-1){
    if(hashtab[IDX]==target){
        cout<<"element found at :"<<IDX<<endl;
    }
    IDX=(IDX+1)%size;
    if (IDX==start){
        break;
    }
    }
    cout<<"element not found"<<endl;
    
}
