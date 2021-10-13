#include<iostream>
#include<vector>
using namespace std;
int rotatedSearch(vector<int>v,int key){
int n=v.size();
int s=0;int e=n-1;
while(s<=e){
    int mid=(s+e)/2;
    if(v[mid]==key)return mid;
    else if(v[mid]>=v[s]){
         if(key>=v[s]&&key<=v[mid]){
             e=mid-1;
         }
         else{
             s=mid+1;
         }     
    }
    else{
      if(key>=v[mid]&&key<=v[e]){
          s=mid+1;
      }
      else{
          e=mid-1;
      }
    }
  }
  return -1;
}
int main(){
    vector<int>v{4,5,6,7,0,1,2,3};
    int x=2;
    //cout<<binarySearch(v,x);
    int result = rotatedSearch(v, x);
    cout<<result;
    return 0;
}