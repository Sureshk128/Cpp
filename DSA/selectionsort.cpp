#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[],int n){
     for(int i=0;i<n-1;i++){
         int min=arr[i];
         int min_pos=i;
         for(int j=i+1;j<n;j++){
             if(arr[j]<min){min=arr[j];min_pos=j;}
         }
         swap(arr[i],arr[min_pos]);
     }
     return ;
     
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