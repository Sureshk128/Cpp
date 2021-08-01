#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n){
for(int i=1;i<n;i++){
    for(int j=0;j<n-i ;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
}
return ;
}
int main(){
int arr[]={-7,-6,5,4,3,2,1};
bubblesort(arr,7);
for(int i=0;i<7;i++){
    cout<<arr[i]<<" ";
}
return 0;
}