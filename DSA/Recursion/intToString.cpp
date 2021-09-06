#include<iostream>
using namespace std;
string str[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
void IntToString(int n){
if(n==0)return;
int ans=n%10;
IntToString(n/10);
cout<<str[ans]<<" ";
return ;
}
int main(){
    int n;
    cin>>n;
    IntToString(n);
    return 0;
}