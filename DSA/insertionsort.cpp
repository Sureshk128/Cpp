#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int pre=i-1;
         while(pre>-1&&arr[pre]>curr){
             arr[pre+1]=arr[pre];
             pre--;
         }
         arr[pre+1]=curr;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    selectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}