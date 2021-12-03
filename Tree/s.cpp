#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {6, 4, 2, 5, 6, 3, 1, 3, 4};
    int n = 9;
    int k = 2;
    char sol[n];
    int count = 0, temp;
    for (int i = 0; i < n; i++)
    {
        temp = arr[i];
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (temp == arr[j])
            {
                count++;
            }
        }
        if (count < k)
        {
            sol[i] = '+';
        }
        else
        {
            sol[i] = '-';
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << sol[i] << " ";
    }
    return 0;
}