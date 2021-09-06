#include <bits/stdc++.h>
using namespace std;
 vector<string>v1;
void helper(string str,int n,int i){
if(i==n){
v1.push_back(str);
return ;
}
string s1=str;
s1.push_back('0');
helper(s1,n,i+1);
if(i>0&&str[i-1]=='0'){
    str.push_back('1');
    helper(str,n,i+1);
}
else if(i==0){
    str.push_back('1');
    helper(str,n,i+1);
}
}
vector<string> binaryStrings(int n){
    v1.clear();
   string str;
   helper(str,n,0);
   return v1;
}
int main(){
    int n;
    cin>>n;
    vector<string>v=binaryStrings(n);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}