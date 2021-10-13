#include<bits/stdc++.h>
using namespace std;
void insert_at_bottom(stack<int>&s,int data){
     if(s.empty()){
         s.push(data);
         return ;
     }
     int temp=s.top();
     s.pop();
     insert_at_bottom(s,data);
     s.push(temp);

}
void reverse(stack<int>&s){
    if(s.empty()){
        return ;
    }
    int temp=s.top();
    s.pop();
    reverse(s);
    insert_at_bottom(s,temp);
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    reverse(s);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}