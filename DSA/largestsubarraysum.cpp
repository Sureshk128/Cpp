#include<iostream>
using namespace std;


////Kadane Algo O(n) time

int kadane(int arr[],int n){
    int largest=0;int current = 0;
    for(int i=0;i<n;i++){
        current+=arr[i];
        if(current<0){current=0;}
        largest=max(largest,current);

    }
    return largest;
}
////using prefix sum
int largestsubsum2(int arr[],int n){
int prefix[n];
prefix[0]=arr[0];
for(int i=1;i<n;i++){
prefix[i]=prefix[i-1]+arr[i];
}
int ans=0;
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
          int curr_sum=i>0?prefix[j]-prefix[i-1]:prefix[j];
          ans=max(ans,curr_sum);
    }
}
return ans;
}
///Brute force
int largestsubsum1(int arr[],int n){
int ans=0;
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        int curr_sum=0;
        for(int k=i;k<=j ;k++){
          curr_sum+=arr[k];
        }
        ans=max(ans,curr_sum);
    }
}
return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"brute force : " <<largestsubsum1(arr,n)<<endl;
    cout<<"prefix sum : "<<largestsubsum2(arr,n)<<endl;
    cout<<"kadane's sum : "<<kadane(arr,n)<<endl;
}