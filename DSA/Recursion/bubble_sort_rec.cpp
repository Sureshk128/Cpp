#include<iostream>
using namespace std;
void bubble_sort_rec_2(int arr[],int n,int j){
    if(n==1||n==0)return;
    if(j==n-1){
        bubble_sort_rec_2(arr,n-1,0);
        return;
    }
    if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
    }
    bubble_sort_rec_2(arr,n,j+1);
}
void bubble_sort_rec(int arr[],int n){
    if(n==1){
        return ;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1])swap(arr[i],arr[i+1]);
    }
     bubble_sort_rec(arr,n-1);
}
int main(){
    int arr[]={1,-12,3,-4,6,2};
    bubble_sort_rec_2(arr,6,0);
    for(int i=0;i<6;i++){
   cout<<arr[i]<<" ";
    }
    return 0;
}