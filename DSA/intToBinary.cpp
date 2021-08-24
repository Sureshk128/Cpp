#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    int power=1;
    while(n>0){
        ans+=(n&1)*power;
        power*=10;
        n=n>>1;
    }
    cout<<ans<<endl;
    return 0;
}