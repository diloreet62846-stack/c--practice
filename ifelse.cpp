#include<iostream>
using namespace std;
int main()
{
    /*

     int age=20;
    if(age==18){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no";
    }
    
    
    */ 


    /*int n;
    cout<<"enter a number: ";
    cin>>n;
    if(n%2==0){

        cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
*/

/*int age;
cout<<"enter your age"<<endl;
cin>>age;
 if (age>=18){
    string result ;
    cout<<"enter your result -- "<<endl;
    cin>>result; 
    if(result =="pass"){
        cout<<"you can drive";
    }else{
        cout<<"You can t drive beacause of upassed test";
    }
 }else{
    cout<<"you are underage";
 }

 return 0 ; 

}
 */

/*string name;
cout<<"enter your name: "<<endl;
cin>>name;
int marks1;
cout<<"enter your sem 1 marks: "<<endl;
cin>>marks1;
if (marks1>=60){
    int marks2;
    cout<<"enter the marks of sem 2 "<<endl;
    cin>>marks2;

if(marks1+marks2>70){
    cout<<"merit"<<endl;
}
else{
    cout<<"good result"<<endl;
}


}else{

    cout<<"go back";
}

}
*/




string name;
cout<<"enter your name: "<<endl;
cin>>name;
int marks1,marks2;
cout<<"enter your sem 1 marks: "<<endl;
cin>>marks1;
if(marks1>=60){
    cout<<"enter sem 2 marks"<<endl;
    cin>>marks2;
    if(marks1+marks2>=70){
        cout<<"merit"<<endl;
    }else{
        cout<<"good result"<<endl;
    }
} else {
    cout<<"go back"<<endl;
}
}