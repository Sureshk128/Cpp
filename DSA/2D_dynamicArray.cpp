#include<iostream>
using namespace std;
int ** create_2DArray(int r,int c){
    int **arr=new int*[r];
    for(int i=0;i<r;i++){
        arr[i]=new int[c];
    }
    int count=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            arr[i][j]=count;
            count++;
        }
    }
    return arr;
}
int main(){
    int r,c;
    cin>>r>>c;
    int **arr=create_2DArray(r,c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<r;i++){
        delete [] arr[i];
    }
    delete [] arr;
    return 0;
}