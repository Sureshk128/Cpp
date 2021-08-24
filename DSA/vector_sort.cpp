#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int sum(vector<int>v){
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
    }
    return sum;
}
bool compare(pair<string,vector<int>>s1,pair<string,vector<int>>s2){
    vector<int>a=s1.second;
    vector<int>b=s2.second;
    return sum(a)>sum(b);
}
int main(){
    vector<pair<string,vector<int>>>student_marks={
        {"suresh",{70,90,78}},
        {"mohan",{76,96,56}},
        {"dinesh",{79,97,77}},
        {"praveen",{55,43,100}}
    };
    sort(student_marks.begin(),student_marks.end(),compare);
    cout<<"dh"<<endl;
    for(int i=0;i<student_marks.size();i++){
        cout<<student_marks[i].first<<" "<<sum(student_marks[i].second)<<endl;
    }
    return 0;
}