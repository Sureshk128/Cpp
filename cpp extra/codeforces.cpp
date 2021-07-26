#include <bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        int n;
        cin >> n;
        int arr[n][5];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cin >> arr[i][j];
            }
        }
    int id = 0;
    for (int i = 1; i < n; i++) {
      int cc = 0;
      for (int j = 0; j < 5; j++) {
        cc += (arr[i][j] < arr[id][j]);
      }
      if (cc >= 3) {
        id = i;
      }
    }
    for (int i = 0; i < n; i++) {
      int cc = 0;
      for (int j = 0; j < 5; j++) {
        cc += (arr[i][j] < arr[id][j]);
      }
      if (cc >= 3) {
        id = -2;
        break;
      }
    }
    cout << id + 1 << '\n';
    }
    return 0;
}