#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1, str2, str3 = "", str4 = "";
    cin >> str1 >> str2;
    //generating 2 new strings after using hash functions
    for (int index = 0; index < str1.length(); index++)
    {
        if (str1[index + 1] == '#')
        {
            continue;
        }
        if (str1[index] != '#')
            str3 = str3 + str1[index];
    }
    for (int index = 0; index < str2.length(); index++)
    {
        if (str2[index + 1] == '#')
        {
            continue;
        }
        if (str2[index] != '#')
            str4 = str4 + str2[index];
    }
    if (str3 == str4)
    {
        cout << "Match" << endl;
    }
    else
    {
        cout << "Do Not Match" << endl;
    }

    return 0;
}