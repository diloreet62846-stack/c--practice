/*#include<iostream>
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
 ll.push_front(6);
 ll.push_front(8);
 ll.push_front(9);
 ll.push_front(10);

   ll.print_LL();

}*/

/*single linkedlist*/
/*#include<iostream>
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
 ll.pop_front();
 ll.pop_back();
 ll.print_LL();

}*/

/*doubly linked list*/
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
class DoublyLinkedlist{
    public:
  Node* head ;
  Node* tail ;
  DoublyLinkedlist(){
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


void print_LL(){
Node* temp = head;
while(temp!=NULL){
    cout<<temp->data<<"<->";
    temp=temp->next;
}
cout<<"Null"<<endl;
}
};
int main(){
 vector<int>nums;
 DoublyLinkedlist ll;
 ll.push_back(6);
 ll.push_back(8);
 ll.push_back(0);
 ll.push_back(10);
 ll.push_front(5);
 ll.insert(99,2);
 ll.pop_front();
 ll.pop_back();
 ll.print_LL();

}