#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int freq[26]={0};      //frequency array for counting the frequency of each letter
    for(int i=0;i<str.length();i++){
        if('A'<=str[i]&&str[i]<='Z'){
            freq[str[i]-'A']++;
        }
        else{
            freq[str[i]-'a']++;
        }
    }
    bool flag=true;    
    int last_index=-1,min_difference=INT_MAX;
    for(int i=0;i<26;i++){     
        if(freq[i]>=2){         
            min_difference=0;
            break;
        }
        else if(freq[i]==1&&flag==true){
              last_index=i;
              flag=false;
        }
        else if(freq[i]==1){
            int current_difference=i-last_index;
            min_difference=min(min_difference,current_difference);
            last_index=i;
        }
    }
    cout<<min_difference<<endl;
    return 0;
}