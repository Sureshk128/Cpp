#include<iostream>
using namespace std;
int pow(int a,int n){
    if(n==0)return 1;
    return a*pow(a,n-1);
}
int fastPow(int a,int n){
    if(n==0)return 1;
    int subprob=fastPow(a,n/2);
    int subprobpow=subprob*subprob;
    if(n&1){
        return subprobpow*a;
    }
    else return subprobpow;
}
int main(){
    int a,n;
    cin>>a>>n;
    cout<<pow(a,n)<<endl;
    cout<<fastPow(a,n)<<endl;
    return 0;
}