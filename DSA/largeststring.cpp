#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.get();
    char sentence[1000];
    char largest[1000];
    int max_len=0;
    while(n--){
        cin.getline(sentence,1000);
        int length=strlen(sentence);
        if(length>max_len){
          max_len=length;
          strcpy(largest,sentence);
        }
    }
    cout<<"largest sentence is "<<largest<<" and length is "<<max_len<<endl;
    return 0;
}