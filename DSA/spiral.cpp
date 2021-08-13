#include<iostream>
using namespace std;
void print_spiral(int arr[][2],int n,int m){
    int start_row=0;
    int start_col=0;
    int end_row=n-1;
    int end_col=m-1;
    while(start_row<=end_row&&start_col<=end_col){
        for(int i=start_col;i<=end_col;i++){
            cout<<arr[start_row][i]<<" ";
        }
        start_row++;
        for(int i=start_row;i<=end_row;i++){
            cout<<arr[i][end_col]<<" ";
        }
        end_col--;
        if(end_row>=start_row){
            for(int i=end_col;i>=start_col;i--){
                  cout<<arr[end_row][i]<<" ";
            }
        }
        end_row--;
        if(end_col>=start_col){
            for(int i=end_row;i>=start_row;i--){
                  cout<<arr[i][start_col]<<" ";
            }
        }
        start_col++;
    }
    return ;
}
int main(){
    int arr[][2]={{1,2},{3,4}};
    print_spiral(arr,2,2);
    return 0;
}