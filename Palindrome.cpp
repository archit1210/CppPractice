#include <bits/stdc++.h>
using namespace std;

bool solve(string &str)
{
    int n = str.length();

    int i = 0;
    int j = n - 1;

    while (i <= j)
    {
        if (str[i] != str[j])
        {
            return false;
        }

        i++;
        j--;
    }
}
int main()
{
    string str;
    cout << "Enter the string : " << endl;
    cin >> str;

    if (solve(str) == true)
    {
        cout << "String is Palindrome";
    }
    else
    {
        cout << "String is not a Palindrome";
    }
    return 0;
}