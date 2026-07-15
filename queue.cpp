/*#include<iostream>
#include<queue>
using namespace std;
class que{
    public:
queue<int>Q1;
void push(int val){
 Q1.push(val);
}
void pop(){
Q1.pop();
}
void print(){
    if(Q1.size()==0){
        cout<<"queue is empty";
    }
 else{
    while(!Q1.empty()){
        cout<<Q1.front()<<"";
        Q1.pop();
    }
 }
}
};
int main(){
   que q2;
   q2.push(8);
   q2.push(5);
   q2.push(6);
   q2.push(7);
   q2.print();
}*/

#include<iostream>
#include<queue>
using namespace std;
class que{
    public:
queue<int>Q1;
void push(int val){
 Q1.push(val);
}
void pop(){
Q1.pop();
}
void search(){
    
}
void print(){
    if(Q1.size()==0){
        cout<<"queue is empty";
    }
 else{
    while(!Q1.empty()){
        cout<<Q1.front()<<"";
        Q1.pop();
    }
 }
}
};
int main(){
   que q2;
   q2.push(8);
   q2.push(5);
   q2.push(6);
   q2.push(7);
   q2.print();
}