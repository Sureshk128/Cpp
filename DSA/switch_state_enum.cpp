#include<iostream>
using namespace std;
int main(){
    enum class Season{spring,winter,fall,summer};
    Season now=Season::winter;
    switch (now)
    {
    case Season::spring:
        cout<<"spring"<<endl;
        break;
    
    case Season::summer:
        cout<<"summer"<<endl;
        break;
    case Season::winter:
        cout<<"winter"<<endl;
        break;
    case Season::fall:
        cout<<"fall"<<endl;
        break;
    }
    return 0;
}