#include<iostream>
using namespace std;
void rev_str(string s){
   //base case
   if(s.length()==0){
       return;
   }
   string rst=s.substr(1);
   rev_str(rst);
   cout<<s[0];
}
int main(){
    string s;
    cin>>s;
    rev_str(s);
    return 0;
}