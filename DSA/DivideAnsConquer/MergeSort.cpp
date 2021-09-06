#include<iostream>
#include<vector>
using namespace std;
void Merge(vector<int>&v,int s,int e){
    int i=s,m=(s+e)/2,j=m+1;
    vector<int>v1;
    while(i<=m&&j<=e){
        if(v[i]<v[j]){
            v1.push_back(v[i]);
            i++;
        }
        else{
            v1.push_back(v[j]);
            j++;
        }
    }
    while(i<=m){
        v1.push_back(v[i++]);
    }
     while(j<=e){
        v1.push_back(v[j++]);
    }
    int k=0;
    for(int i=s;i<=e;i++){
        v[i]=v1[k++];
    }
    return;
}
void mergeSort(vector<int>&v,int s,int e){
    if(s>=e)return;
    int mid=(s+e)/2;
    mergeSort(v,s,mid);
    mergeSort(v,mid+1,e);
    Merge(v,s,e);
}
int main(){
    vector<int>v{1,5,3,7,3,9,66};
    mergeSort(v,0,6);
    for(int i=0;i<7;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}