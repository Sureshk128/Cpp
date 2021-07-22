#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream ofile;
int t;
cin>>t;
ofile.open("1.txt");
while(t--){
ofile<<"hello hello hello"<<endl;
}
ofile.close();
return 0;
}