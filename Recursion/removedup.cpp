#include<iostream>
using namespace std;
string rem_dup(string s){
    if(s.length()==0)return "";
    char ch=s[0];
    string ans=rem_dup(s.substr(1));
   if(ch==ans[0])return ans;
   return ch+ans;
   }
int main(){
    string s;
    cin>>s;
    cout<<rem_dup(s)<<endl;
    return 0;
}