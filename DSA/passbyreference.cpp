#include<iostream>
using namespace std;
void tax(float & n){
    float tax=0.10;
    n=n-n*tax;
}
int main(){
    cout<<"short "<<sizeof(short)<<endl;
    cout<<"int "  <<sizeof(int)<<endl;
    cout<<"long "<<sizeof(long)<<endl;
    cout<<"long long "<<sizeof(long long )<<endl;
    return 0;
}