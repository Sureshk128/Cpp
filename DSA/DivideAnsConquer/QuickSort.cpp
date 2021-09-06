#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>&v,int s,int e){
  int pivot=v[e];
  int i=s-1;
  for(int j=s;j<e;j++){
      if(v[j]<pivot){
          i++;
          swap(v[i],v[j]);
      }
  }  
  swap(v[i+1],v[e]);
  return i+1;
}
void quickSort(vector<int>&v,int s,int e){
if(s>=e)return;
int p=partition(v,s,e);
quickSort(v,s,p-1);
quickSort(v,p+1,e);
}
int main(){
    vector<int>v{10,5,2,0,7,6,4};
    quickSort(v,0,6);
    for(int i=0;i<7;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}