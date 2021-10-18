#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
        }
};
class Queue{
 Node* front,*rear;
 public:
     Queue(){
         front=NULL;
         rear=NULL;
     }
     void push(int data){
         if(rear==NULL){
             Node* n = new Node(data);
             front=n;
             rear=n;
         }
         else{
             Node* n = new Node(data);
             rear->next=n;
             rear=n;
         }
     }
     void pop(){
         if(front==rear&&front!=NULL){
             delete(front);
             front=NULL;
             rear=NULL;
         }
         else if(front==NULL){
             cout<<"list is Empty"<<endl;
         }
         else{
             Node * temp=front;
             front = front->next;
             temp->next=NULL;
             delete(temp);
         }
     }
     int front_el(){
         return front->data;
     }
};
int main(){
    Queue q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    cout<<q1.front_el()<<endl;
    q1.pop();    
    q1.pop();    
    q1.pop();    
    q1.pop();    
    q1.pop();    
    q1.pop();    
    q1.pop();    
    q1.push(18);
    cout<<q1.front_el()<<endl;
    return 0;
}