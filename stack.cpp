/*#include<iostream>
#include<vector>
using namespace std;
class stack{
    public:
    vector<int>v1;
    void push(int a){
        v1.push_back(a);
         
    }
    void pop(){
     v1.pop_back();

    }
    void printstack(){
         if(v1.size()==0){
            cout<<"stack is empty"<<endl;
         }
        else{
           for(int i=0;i<=v1.size()-1;i++){
            cout<<v1[i];
           }
        } 
    }
};
int main(){
stack st;
st.push(3);
st.push(5);
st.push(7);
st.push(9);
st.pop();
st.printstack();
}*/

/*H.W.1.[stack using the array]2.linkedlist*/

/*#include<iostream>
#include<list>
using namespace std;
class stack{
    public:
    list<int>l1;
    void push(int a){
     l1.push_front(a);

     }
    void pop(){
    l1.pop_front();
    }
     void printstack(){
      if(l1.size()==0){
        cout<<"list is empty"<<endl;
      }
      else{
        for(int i =0;i<=l1.size()+1;i++ ){
            cout<<l1.front()<<endl;
            l1.pop_front();
        }
      }
     }
};
int main(){
 stack st;
 st.push(9);
 st.push(7);
 st.push(3);
 st.printstack();
}*/

/*#include<iostream>
using namespace std;
class s{
    public:
 arr<int,10>arr;
void push(int a){
    int n=sizeof(arr)/sizeof(arr[0]);
    if(n<=arr.size()){
        int i = arr[arr.size()-1];
        while(i<arr.size()){
            arr[i]=arr[i+1];
            i--;
        }
        arr[i]=a;
    }
    else{
        cout<<"overflow-element can't be added"<<endl;
    }
}
void pop(){

}
void print(){
    if(arr.size()==0){
        cout<<"stack is empty";
    }
    else{
        for(int i=arr.size()-1;){
            cout<<arr[i];
        }
    }
}

};
int main(){
s st;
st.push(5);
st.push(6);
st.push(3);
st.push(0);
st.push(8);
st.push(2);
st.print();
}*/

/*#include<iostream>     //queue 
using namespace std;  
class Node{
    public:
    int data;
    Node* next; 
    Node (int val){
    data=val;
    next = NULL;
}    
};
class Queue{
    public:
    Node* front = NULL;
    Node* rear = NULL;

    void push(int val){
        Node* newNode  =  new Node(val);
        if(front == NULL && rear == NULL){
           front=rear=newNode;
        }else{
           rear->next= newNode;
           rear=newNode;
        }
    }
    void pop(){
    if (front ==NULL&&rear==NULL){
        cout<<"queue is empty"<<endl;
    } else{
        Node* temp =front;
        front =temp->next;
        temp->next = NULL;
        delete temp;
            }


    }
    void print(){
    Node*temp =front;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    }

};
      
int main(){
  Queue q;
  q.push(4);
  q.push(8);
  q.push(6);
  q.pop();
  q.pop();
  q.print();
}*/



/*#include<iostream>     
using namespace std; 
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
    data = val; 
    next = NULL;
    }
    };

class deque{
    public:
  Node* front = NULL;
  Node* rear = NULL;

void push(int val,int pos){
 
    
    if(pos==0){
           Node* newNode = new Node(val);
        if(front == NULL&& rear==NULL){
           front=rear=newNode;
        }
        else{
            newNode->next = front;
            front=newNode;
}
}
    
    else if(pos==-1){
           Node* newNode = new Node(val);
        if(front == NULL&& rear==NULL){
           front=rear=newNode;
        }
           else{
        rear->next = newNode; 
        rear = newNode; 
  }}
}

void pop(int pos){
    if(front==NULL&&rear==NULL){
        cout<<"queue is empty"<<endl;
}
else if (pos==0){
        Node* temp =front;
        front =temp->next;
        temp->next = NULL;
        delete temp;
            }
      if(front==NULL&&rear==NULL){
        cout<<"queue is empty"<<endl;
        }  
        else if  (pos==-1){
        Node* temp =front;
        front =temp->next;
        temp->next = NULL;
        delete temp;
            }
        }

        
void print(){
   Node* temp = front;
    while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
}
cout<<"Null"<<endl;
}
};
int main(){
    deque d1; 
    d1.push(8,0);
    d1.push(9,-1);
    d1.pop(0);
    d1.print(); 

}*/

/*#include<iostream>
#include<vector>
using namespace std;
class stack{
    public:
    vector<int>v1;
    void push(int a){
        v1.push_back(a);
         
    }
    void pop(){
     v1.pop_back();

    }
    void printstack(){
         if(v1.size()==0){
            cout<<"stack is empty"<<endl;
         }
        else{
           for(int i=0;i<=v1.size()-1;i++){
            cout<<v1[i];
           }
        } 
    }
};
int main(){
stack st;
st.push(3);
st.push(5);
st.push(7);
st.push(9);
st.pop();
st.printstack();
}*/

/*H.W.1.[stack using the array]2.linkedlist*/

/*#include<iostream>
#include<list>
using namespace std;
class stack{
    public:
    list<int>l1;
    void push(int a){
     l1.push_front(a);

     }
    void pop(){
    l1.pop_front();
    }
     void printstack(){
      if(l1.size()==0){
        cout<<"list is empty"<<endl;
      }
      else{
        for(int i =0;i<=l1.size()+1;i++ ){
            cout<<l1.front()<<endl;
            l1.pop_front();
        }
      }
     }
};
int main(){
 stack st;
 st.push(9);
 st.push(7);
 st.push(3);
 st.printstack();
}*/
#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
 int data;
 Node* next; 
 Node(int val){
     data = val;
     next = NULL;
 }
};
class Linkedlist{
    public:
  Node* head ;
  Node* tail ;
  Linkedlist(){
   head = NULL;
   tail = NULL;
  }
  void push_front(int val){
    Node* newNode = new Node(val);
    if(head==NULL && tail==NULL){
        tail=head = newNode;
    } else{
        newNode->next=head;
        head = newNode;
    
    }
  }
  void push_back(int val){
    Node* newNode = new Node(val);
    if(head==NULL && tail==NULL){
        head=tail= newNode;
    } else{
        tail->next=newNode;
        tail=newNode;
  }
}
void pop_front(){
    if(head==NULL && tail==NULL){
        cout<<"linklist is empty"<<endl;
        return;
}else {
    Node* temp = head;
    head=temp->next;
    temp->next=NULL;
    delete temp;
}
}
void pop_back(){
    if(head==NULL && tail==NULL){
        cout<<"linklist is empty"<<endl;
        return;
}else {
    Node* temp = head;
    while(temp->next->next!=NULL){
       temp=temp->next;
    }
    temp->next=NULL; 
    delete tail;
    tail = temp;
}
}
void insert(int val,int pos){
  
    if(pos<=0){
        cout<<"invalid"<<endl;
    }
    else if(pos==1){
        push_front(val);
    }
 else{
    Node* temp = head ; 
    for(int i=1;i<pos-1;i++){
        if(temp==NULL){
            return;
        }
        temp = temp->next;     
    }

    Node* newNode = new Node(val);
    newNode->next=temp->next;
    temp->next=newNode;  

 }
}
bool empty(){
    if(head==NULL&&tail==NULL){
        return false;
    }
    else {
        return true;
    }
}
void search(int n){
    
    Node* temp = head;
    bool result=false;
    while(temp!=NULL){
        if(temp->data==n){
            cout<<"element is found"<<endl;
            result = true;
            break;
        }
        temp=temp->next;
    }if (result==false){
        cout<<"element is not found"<<endl;
    }
}
void sort(){
    Node* temp=head;
    Node* temp2=head;
    while (temp!=NULL){
    
    while(temp2!=NULL){
        if(temp2->data>temp2->next->data){
        swap(temp2->data,temp2->next->data);
        temp2=temp2->next;
        }
        else{
            temp2=temp2->next;
        }
    }
   }

}
void print_LL(){
Node* temp = head;
while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
}
cout<<"Null"<<endl;
}
};
int main(){
 vector<int>nums;
 Linkedlist ll;
 ll.push_back(6);
 ll.push_back(8);
 ll.push_back(9);
 ll.push_back(10);
 ll.push_front(5);
 ll.insert(99,2);
 ll.sort();
 ll.print_LL();
 ll.search(8);
}