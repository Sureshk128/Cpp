#include<iostream>
using namespace std;
void add(int n){
    cout<<"int ";
}
void add(float n){
    cout<<"float ";
}
void add(double n){
    cout<<"double ";
}
int main(){
    int a[]={1,2,3,4,5};
    cout<<4[a]<<endl;
    add(4.0);
    return 0;
}