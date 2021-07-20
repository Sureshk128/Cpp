#include<iostream>
using namespace std;
bool rec_sort(int arr[],int n){
   if(n==1){
       return true;
   }
   bool restArray=rec_sort(arr+1,n-1);
   return (arr[0]<arr[1]&&restArray);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(rec_sort(arr,n)==true)cout<<"sorted"<<endl;
    else cout<<"not sorted "<<endl;
    return 0;
}