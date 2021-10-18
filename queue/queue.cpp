#include<iostream>
using namespace std;
class queue{
int *arr;
int cs;
int ms;
int front;
int rear;
public:
queue(int default_size=5){
    ms=default_size;
    arr=new int[ms];
    cs=0;
    front=0;
    rear=ms-1;
}
bool full(){
    return cs==ms;
}
bool empty(){
    return cs==0;
}
void push(int data){
    if(!full()){
           //take the rear to the next index
           rear=(rear+1)%ms;
           arr[rear]=data;
           cs++;
    }
}
void pop(){
    if(!empty()){
        //take the front pointer forward
        front=(front+1)%ms;
        cs--;
    }
}
int Get_front(){
    return arr[front];
}
};
int main(){
    queue q1(7);
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.push(5);
    q1.push(6);
    q1.push(7);
    cout<<q1.Get_front()<<" ";
    q1.pop();
    q1.push(8);
    cout<<q1.Get_front()<<" ";
}