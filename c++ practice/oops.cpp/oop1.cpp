#include<iostream>
using namespace std;
class btech{
    private:
    int age =19;
    string name = "jashan";

   // private:
   //int password = 875390;
    // void show(){
    //cout<<jpp;
  // }
   void update(int newval){
    age=newval;
    cout<<age<<endl;
   }
   //protected:
   //int jpp;
};
int main(){
  btech cse;
  //cout<<cse.name<<endl;
  //btech limit;
  //cout<<limit.age<<endl;
  //btech pass;
 // cout<<pass.password;
 // btech j;
  //j.jpp;
  cse.show();
  cse.update(21);
}