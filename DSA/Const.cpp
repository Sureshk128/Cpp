#include<iostream>
using namespace std;
int main(){
    enum s{a=100,b,c,d};
    s v=a;
    cout<<v<<endl;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    return 0;
}