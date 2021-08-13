#include<iostream>
using namespace std;
int subs(string s){
    int ans=0;
    for(int i=0;i<s.length();i++){
        int fre[26]={0};
        for(int j=i;j<s.length();j++){
            fre[s[j]-'a']++;
            if(fre[s[j]-'a']>1)break;
            else{
                 ans++;
            }
        }
    }
    return ans;
}
int main(){
   string s;
   cin>>s;
   cout<<subs(s)<<endl;
   return 0;
}