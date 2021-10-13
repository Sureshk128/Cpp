#include<iostream>
using namespace std;
class Node{
   public:
   int data;
   Node* next;
   Node(int value){
       data=value;
       next=NULL;
   }
   ~Node(){
       if(next!=NULL){
           delete next;
       }
       cout<<"Deliting the node with data "<<data<<endl;
   }
};
class LinkedList{
  Node* head;
  Node* tail;

  int helper(Node* start,int key){
      //base case
      if(start==NULL)return -1;
      //value matches
      if(start->data==key){
          return 0;
      }
      //remaining part of the linked list
      int subindex=helper(start->next,key);
      if(subindex==-1)return -1;
      return subindex+1;
  }
  public:
  LinkedList(){
      head=NULL;
      tail=NULL;
  }
  void push_front(int v){
      Node* n=new Node(v);
      if(head==NULL){
          head=tail=n;
      }
      else{
          n->next=head;
          head=n;
      }
  }
  void Push_end(int v){
    Node* n=new Node(v);
    if(tail==NULL){
        head=tail=n;
        return ;
    }
    tail->next=n;
    tail=n;
  }
  void insert(int v,int pos){
      if(pos==0){
          push_front(v);
          return ;
      }
      Node* ptr=head;
      for(int i=1;i<=pos-1;i++){
          ptr=ptr->next;
      }
      Node* n=new Node(v);
      n->next=ptr->next;
      ptr->next=n;
  }
  int search(int key){
    Node* temp=head;
    int idx=0;
    while(temp!=NULL){
        if(temp->data==key){
            return idx;
            }
           idx++;
           temp=temp->next;         
    }
    return -1;
  }
  int recursive_search(int key){
      int index=helper(head,key);
      return index;
  }
  void print_list(){
      Node* ptr=head;
      while(ptr!=NULL){
          cout<<ptr->data<<"   ";
          ptr=ptr->next;
      }
  }
  void pop_front(){
      Node* temp=head;
      head=head->next;
      temp->next=NULL;
      delete(temp);
  }
  void Pop_end(){
      Node* temp=head;
      while(temp->next!=tail){
          temp=temp->next;
      }
      delete(tail);
      tail=temp;
      tail->next=NULL;
  }
  void deleteat(int pos){
      if(pos==0){
          pop_front();
      }
      else {
          Node* temp=head;
          for(int i=1;i<pos;i++){
              temp=temp->next;
          }
          Node* temp1=temp->next;
          temp->next=temp1->next;
          temp1->next=NULL;
          delete(temp1);
      }
  }
  void reverse(){
      Node* pre=NULL;
      Node* curr=head;
      Node* temp=head;
      while(temp!=NULL){
          temp=curr->next;
          curr->next=pre;
           pre=curr;
           curr=temp;
      }
      head=pre;
  }
  ~LinkedList(){
      if(head!=NULL){
          cout<<"head deleted 1"<<endl;
          delete head;
          head=NULL;
          cout<<"head deleted "<<endl;
      }
  }
};
int main(){
    LinkedList ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.Push_end(4);
    ll.Push_end(5);
    ll.insert(0,0);
    ll.insert(10,2);
    ll.print_list();
    cout<<endl;
    // ll.pop_front();
    // ll.Pop_end();
    // ll.Pop_end();
    // ll.deleteat(1);
    ll.reverse();
    ll.print_list();
    cout<<endl;
    cout<<ll.search(7)<<endl;
    cout<<ll.recursive_search(7)<<endl;
    return 0;
}
