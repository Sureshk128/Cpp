#include<iostream>
using namespace std;
string move_x(string s){
    if(s.length()==0)return "";
    char ch=s[0];
    string ans=move_x(s.substr(1));
    if(ch=='x')return ans+ch;
    return ch+ans;
}
int main(){
string s;
cin>>s;
cout<<move_x(s)<<endl;
return 0;
}