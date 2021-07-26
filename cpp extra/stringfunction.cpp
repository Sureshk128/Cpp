#include<bits/stdc++.h>
using namespace std;
int main(){
    char str1[]="Suresh ";
    char str2[]="kumar";
    cout<<"length 1 "<<strlen(str1);
    strcpy(str1,str2);
    cout<<str1<<endl;
    strcat(str1,str2);
    cout<<str1<<endl;
    return 0;

}