#include<bits/stdc++.h>
using namespace std;
int main(){
   char str[]="abcd";
   for(int i=strlen(str)-1;i>=0;i--){
      for(int j=i;j<strlen(str);j++){
          cout<<str[j];
      }
      cout<<endl;
   }
    return 0;

}