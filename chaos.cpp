#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    long int T;
    cin >> T;
    while (T--)
    {
        string str;
        cin >> str;
        int k = 0;
        string c = "chaos";
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == c[k])
                k++;
        }
        if (k > 4)
        {
            cout << "YES";
        }

        else
        {
            cout << "NO";
        }
    }
}
