#include<bits/stdc++.h>
using namespace std;
void stockspan(int price[],int n,int span[]){
    stack<int>s;
    s.push(0);
    span[0]=1;
    for(int i=1;i<n;i++){
        int current=price[i];
        while(!s.empty()&&price[s.top()]<=current){
            s.pop();
        }
        if(!s.empty()){
            int prevHighest=s.top();
            span[i]=i-prevHighest;
        }
        else{
            span[i]=i+1;
        }
        s.push(i);
    }
}
int main(){
    int prices[]={100,80,60,70,60,75,85};
    int n=sizeof(prices)/sizeof(int);
    int span[1000]={0};
     stockspan(prices,n,span);
   for(int i=0;i<n;i++){
       cout<<span[i]<<"   ";
   }
    return 0;
}