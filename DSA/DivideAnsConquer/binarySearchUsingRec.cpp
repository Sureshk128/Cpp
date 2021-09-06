#include <bits/stdc++.h>
using namespace std;
int helper(vector<int>&arr, int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return helper(arr, l, mid - 1, x);
        return helper(arr, mid + 1, r, x);
    }
    return -1;
}
  

int binarySearch(vector<int> v, int x)
{
    // your code goes here
    return helper(v,0,v.size()-1,x);
}
int main(){
    vector<int>v{1,2,3,4,5,6,7};
    int x=16;
    //cout<<binarySearch(v,x);
    int result = binarySearch(v, x);
    cout<<result;
    return 0;
}