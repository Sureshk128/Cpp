#include<iostream>
using namespace std;
int main(){ 
    int count=0;
    int arr[]={29,6,8,11,25,18};
    int min=arr[0];
    int i=1;
    if(arr[0]>=arr[1]){
    i=2;
    count++;
    min=arr[1];
    }
    for(i;i<6;i++){
        if(arr[i]<=min){
            count++;
        }
        else{
            min=arr[i];
        }
    }
    if(count<=1)cout<<"TRUE";
    else cout<<"Not Possible"<<endl;
    return 0;
}