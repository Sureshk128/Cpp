#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int s=0,e=5;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for(int i=0;i<6;i++)cout<<arr[i]<<" ";
    return 0;
}