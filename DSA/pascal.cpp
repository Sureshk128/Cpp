#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> printPascal(int n)
{
    // your code goes here
    vector<vector<int>>v;
    for(int i=0;i<n;i++){
        vector<int>v1;
        for(int j=0;j<=i;j++){
            if(j==0||j==i){
                v1.push_back(1);
            }
            else{
                v1.push_back(v[i-1][j-1]+v[i-1][j]);
            }
        }
        v.push_back(v1);
    }
    
    return v;
}
 
int main(){
    int n;
    cin>>n;
    vector<vector<int>>v= printPascal(n);
   for(int i=0;i<5;i++){
       for(int j=0;j<=i;j++){
           cout<<v[i][j]<<" ";
       }
       cout<<endl;
   }
   return 0;
}