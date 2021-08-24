#include<iostream>
using namespace std;
class A{
    int n,m;
    public:
    void setF(int a,int b){
        n=a;
        m=b;
    }
    void getF(){
        cout<<n<<" "<<m<<endl;
    }

};
int main(){
     A a;
     a.getF();;
    return 0;
}