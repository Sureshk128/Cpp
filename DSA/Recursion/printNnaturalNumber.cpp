#include<iostream>
using namespace std;
void printInc(int n){
if(n==1){
    cout<<1<<" ";
    return;
}
printInc(n-1);
cout<<n<<" ";
return ;
}
void printDec(int n){
if(n==1){
    cout<<1<<" ";
    return;
}
cout<<n<<" ";
printDec(n-1);
return ;
}

int main(){
    int n;
   cin>>n;

    printInc(n);
    cout<<endl;
    printDec(n);
}