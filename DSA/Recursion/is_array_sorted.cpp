#include <iostream>
using namespace std;
bool isSorted(int arr[], int n)
{
    if (n == 1 || n == 0)
    {
        return true;
    }
    if (arr[0] < arr[1] && isSorted(arr + 1, n - 1))
    {
        return true;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << isSorted(arr, n);
    return 0;
}