#include<iostream>
#include<vector>
using namespace std;
// int firstOcc(int arr[],int n,int key){
//     if(n==0){
//         return -1;
//     }
//     if(arr[0]==key){
//         return 0;
//     }
//     int subind=firstOcc(arr+1,n-1,key);
//     if(subind!=-1){
//         return subind+1;
//     }
//     return -1;
// }
void findAllOccurencesHelper(int key,vector<int>v,int i,vector<int>&ans){
if(i==v.size())return;
if(v[i]==key){
    ans.push_back(i);
}

findAllOccurencesHelper(key,v,i+1,ans);
}
vector<int> findAllOccurences(int k, vector<int> v){
    vector<int>ans;
    findAllOccurencesHelper(k,v,0,ans);
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int key;
    cin>>key;
    vector<int>ans;
    ans=findAllOccurences(key,v);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<"  ";
    }
    cout<<endl;
    return 0;
}