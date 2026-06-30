/*#include<iostream>
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
   obj2.getPass();*/


//[ constructer-special kind of function that runs automatically when object is created. ]
/*#include<iostream>
using namespace std;
class t{
    public:
    t(){     //-> two types of constructor - //1. parameter less constructer-t(){}     // 2. parameterised constructor-t(value){}
        cout<<"constructer is called"<<endl;
    }

};
int main(){
  t obj;

}*/
/*#include<iostream>
using namespace std;
class s{
    public:
    //s(int a){
  //age = a;
  //cout<<age<<endl;
    
    s(string j,int a,int m){
    name = j;
    age = a;
    marks = m;
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<marks<<endl;
}

    private:
    int age;
    string name;
    int marks;
};
int main(){
  s obj("jashan",18,80);
}*/
            // destructor is a special type of function that automatically calls when obj destroy
  
/*#include<iostream>
using namespace std;
class d{
  public:
  d(){ ///constructor
  cout<<"constructor is called"<<endl;
  }

  ~d(){ //destructor
  cout<<"destructor is called"<<endl;
  }
};
int main(){
   d obj;
}  */  // copy constructor - takes the reference of object (&)[use of copy constructor h.w.]

// this keyword refers to current obj;
/*#include<iostream>
using namespace std;
class c{
    public:
    int a;
    void d(int v){
        this ->a= v;

    }
};
int main(){
 c obj;
 obj.d(6);
 cout<<obj.a<<endl;
 c obj1;
 obj1.d(8);
 cout<<obj1.a<<endl;
}*/


//[four pillars of oops] - polymorphisam, inheritence, encapsulation,abstraction

/*#include<iostream>
using namespace std;
class c{
    public:
int a = 10;
int b;
string name="jashan";
protected:
void m(){
//cout<<"value of a is: "<<a<<endl;
}
};
class n:public c{
    public:
    int age=19;
int h;
void show(){
m();
}
};


class f:public c,public n{
    public:
  int marks=78;
void show2(){
}
};

int main(){
 n obj;  // child class'c obj 
cout<<obj.a<<endl; 
cout<<obj.name<<endl; //if we publically inhertit a class then public members will publically inherit -=
obj.show();
f obj2;
obj2.show2();
cout<<obj2.age<<endl;

}*/


//types of inheritence- 1. single inheritence , 2. multiple inheritence, 3. multilevel inheritence, 4.

//polymorphism
/*nclude<iostream>
using namespace std;  //method overloading
#class c{
 public:
 int add(int a,int b){
    return a+b;
 }
 int add(int a,int b, int c){
 return a+b+c;
 }
 int add(int a, int b, int c, int d){
    return a+b+c+d;
 }
};
int main(){
    c obj;
 int add(int a, int b);
 cout<<"the addition of two numbers: "<<obj.add(8,3)<<endl;
 int add(int a, int b, int c);
 cout<<"the adddition of three numbers : "<<obj.add(3,4,2)<<endl;
 cout<< "the addition:"<<obj.add(2,6,3,2)<<endl;
}*/

/*include<iostream>
using namespace std;  //method overloading
class c{
 public:
 int add(int a,int b){
    return a+b;
 }
 int add(int a,int b, int c){
 return a+b+c;
 }
 int add(int a, int b, int c, int d){
    return a+b+c+d;
 }
 void show(){
    cout<<"theeeeee"<<endl;
 }
};
class f:public c{
    public:   // method overriding
    void show(){
    cout<<"yesssss"<<endl;
    }
 

};
int main(){
    c obj;
 int add(int a, int b);
 cout<<"the addition of two numbers: "<<obj.add(8,3)<<endl;
 int add(int a, int b, int c);
 cout<<"the adddition of three numbers : "<<obj.add(3,4,2)<<endl;
 cout<< "the addition:"<<obj.add(2,6,3,2)<<endl;
 obj.show();
 f obj2;
cout<<obj2.add(3,4)<<endl;
cout<<obj2.add(2,5,5)<<endl;
obj2.show();

}*/

//

/*clude<iostream>
using namespace std;  
class c{
 public:
 int add(int a,int b){
    return a+b;
 }
 int add(int a,int b, int c){
 return a+b+c;
 }
 int add(int a, int b, int c, int d){
    return a+b+c+d;
 }
 void show(){
    cout<<"theeeeee"<<endl;
 }
};
class f:public c{
    public:   
    void show(){
    cout<<"yesssss"<<endl;
    }
 

};
int main(){
     obj;
 int add(int a, int b);
 cout<<"the addition of two numbers: "<<obj.add(8,3)<<endl;
 int add(int a, int b, int c);
 cout<<"the adddition of three numbers : "<<obj.add(3,4,2)<<endl;
 cout<< "the addition:"<<obj.add(2,6,3,2)<<endl;
 obj.show();
 f obj2;   
  out<<obj2.add(3,4)<<endl;
cout<<obj2.add(2,5,5)<<endl;
obj2.show();

c*ptr;

ptr=&obj2;  // without virtual function
ptr -> show();
}*/

// with virtual function
#include<iostream>
using namespace std;  
class c{
 public:
 int add(int a,int b){
    return a+b;
 }
 int add(int a,int b, int c){
 return a+b+c;
 }
 int add(int a, int b, int c, int d){
    return a+b+c+d;
 }
virtual void show(){
    cout<<"theeeeee"<<endl;
 }
};
class f:public c{
    public:   
    void show(){
    cout<<"yesssss"<<endl;
    }
 

};
int main(){
    f obj;
    c*ptr;
    ptr=&obj; 
    ptr->show();  //run time polymorphism
}