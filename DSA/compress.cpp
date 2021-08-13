#include<bits/stdc++.h>
#include<cstring>
using namespace std;


int compress(vector<char>& chars) {
    // your code goes here
      string s;
      char ch=chars[0];
      int count=1;
      for(int i=1;i<chars.size();i++){
          if(chars[i]!=ch){
              s+=ch;
              if(count!=1)s+=to_string(count);
              ch=chars[i];
              count=1;
          }
          else count++;
      }
      s+=ch;
      if(count!=1)s+=to_string(count);
      cout<<s<<endl;
      return s.length();
}

string removeDuplicate(string s){
    // your code goes here
    sort(s.begin(),s.end());
    string s1="";
    for(int i=0;i<s.length()-1;i++){
        if(s[i]!=s[i+1]){
           s1+=s[i];
        }
    }
    s1+=s[s.length()-1];
    return s1;
}
string vowel(string S){
    // your code goes here
    int n=S.length();
    string s1="";
    for(int i=0;i<n;i++){
        if(S[i]=='a'||S[i]=='e'||S[i]=='i'||S[i]=='o'||S[i]=='u'){
           s1+=S[i];
        }
    }
    return s1;
}
int binaryToDecimal(string s)
{
    // your code goes here
    int base=1;
    int ans=0;
    for(int i=s.length()-1;i>=0;i--){
        int num= s[i]-'0';
        ans+=base * num ;
        cout<<ans<<endl;
        base*=2;
    }
    return ans;
}
int main(){
    // vector<char>c={'a','b','b','b','b','b','b','b','b','b','b','b','b'};
    // cout<<compress(c);
    //cout<<removeDuplicate("geeksforgeeks");
   // cout<<vowel("aerjfhfidjfodjdu")<<endl;
   cout<<binaryToDecimal("111")<<endl;
    return 0;
}