#include<iostream>
using namespace std;
int firstOcc(int arr[],int n,int key){
    if(n==0){
        return -1;
    }
    if(arr[0]==key){
        return 0;
    }
    int subind=firstOcc(arr+1,n-1,key);
    if(subind!=-1){
        return subind+1;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int key;
    cin>>key;
    cout<<firstOcc(arr,n,key)<<endl;
    return 0;
}