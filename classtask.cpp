#include<iostream>
using namespace std;
class c{
    public:
     string name;

    void getage(){
    cout<<age;
    }
    void addage(int x){
        age = x;
    }
    void addpass(int y){
        password = y;
    }
    void getPass(){
        cout<<password;

    }
    protected:
    int age;

    private:
    int password;

};
int main(){
    //c obj;
   // obj.addage(21);
   // obj.getage();
   c obj1;
   obj1.name = "ravneet";
   cout<<"the name of student1: "<<obj1.name<<endl;
   obj1.addage(21);
   cout<<"the age of the student1:";
   obj1.getage();
   cout<<endl;
   obj1.addpass(475943);
   cout<<"the student id pass is: ";
   obj1.getPass();
   cout<<endl;
   
    c obj2;
   obj2.name = "navjot";
   cout<<"the name of student2: "<<obj2.name<<endl;
   obj2.addage(19);
   cout<<"the age of the student2:";
   obj2.getage();
   cout<<endl;
   obj2.addpass(5454374);
   cout<<"the student id pass is: ";
   obj2.getPass();
}