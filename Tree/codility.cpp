#include<bits/stdc++.h>
using namespace std;
int sumofdigit(int data){
    int ans=0;
    while(data>0){
        ans=ans+data%10;
        data=data/10; 
    }
    return ans;
}
int main(){
    vector<int>v{51,32,43};
    unordered_map<int,int>mp;
    int ans=INT_MIN;
    for(int i=0;i<v.size();i++){
        int sum=sumofdigit(v[i]);
        if(mp.count(sum)>0){
           ans=max(ans,mp[sum]+v[i]);
           mp[sum]=max(v[i],mp[sum]);
        }
        else{
            mp[sum]=v[i];
        }
    }
    if(ans==INT_MIN){
        cout<<-1<<endl;
    }
    else{
        cout<<ans<<endl;
    }
    return 0;
}