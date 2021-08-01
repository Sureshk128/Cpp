#include<iostream>
using namespace std;
int linear_search(int arr[],int n,int t){
for(int i=0;i<n;i++){
    if(arr[i]==t)return i+1;
}
return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    int target;
    cin>>target;
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<"positon is :"<<linear_search(arr,n,target);
return 0;
}