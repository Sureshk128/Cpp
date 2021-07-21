#include<iostream>
using namespace std;
void rep_pi(string s){
    if(s.length()==0){
        return;
    }
    else if(s[0]=='p'&&s[1]=='i'){
        cout<<"3.14";
        rep_pi(s.substr(2));
    }
    else{
        cout<<s[0];
        rep_pi(s.substr(1));
    }
}
int main(){
    string s;
    cin>>s;
    rep_pi(s);
    return 0;
}