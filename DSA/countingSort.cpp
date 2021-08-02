#include<bits/stdc++.h>
using namespace std;
void countingSort(int arr[],int n){
    int largest = -1;
    for(int i=0;i<n;i++){
        largest=max(largest,arr[i]);
    }
    vector<int>fre(largest+1,0);
    for(int i=0;i<n;i++){
        fre[arr[i]]++;
    }
    int j=0;
    for(int i=0;i<=largest;i++){
        while(fre[i]>0){
            arr[j]=i;
            j++;
            fre[i]--;
        }
    }
    return;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
     for(int i=0;i<n;i++){cin>>arr[i];}
     countingSort(arr,n);
     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }
     return 0;
}