#include<bits/stdc++.h>
using namespace std;
void push(queue<int>&q1,queue<int>&q2,int x){
     if(!q1.empty()){
         q1.push(x);
     }
     else{
         q2.push(x);
     }
}
void pop(queue<int>&q1,queue<int>&q2){
       if(q1.empty()){
           while(!q2.empty()){
               int front=q2.front();
               q2.pop();
               if(q2.empty()){
                   break;
               }
               q1.push(front);
           }
       }
       else{
          while(!q1.empty()){
              int front=q1.front();
              q1.pop();
              if(q1.empty()){
                  break;
              }
              q2.push(front);
          } 
       }
}
int get_front(queue<int>&q1,queue<int>&q2){
        if(q1.empty()){
           while(!q2.empty()){
               int front=q2.front();
               q2.pop();
               q1.push(front);
               if(q2.empty()){
                   return front;
               }
              
           }
       }
       else{
           while(!q1.empty()){
               int front=q1.front();
               q1.pop();
               q2.push(front);
               if(q1.empty()){
                   return front;
               }
           }
       }
       return -1;
}
int main(){
queue<int>q1;
queue<int>q2;
push(q1,q2,1);
push(q1,q2,2);
push(q1,q2,3);
push(q1,q2,4);
push(q1,q2,5);
push(q1,q2,6);
cout<<get_front(q1,q2);
}