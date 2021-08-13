#include<iostream>
using namespace std;
bool search_sort(int arr[][4],int n,int m,int key){
    int a=0,b=m-1;
    while(a<n&&b>=0){
        int num=arr[a][b];
        if(num==key)return true;
        else if(num>key){
           b--;
        }
        else if(num<key){
              a++;
        }
    }
    return false;
}
int main(){
    int arr[][4]{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    cout<<search_sort(arr,4,4,18)<<endl;
    return 0;
}