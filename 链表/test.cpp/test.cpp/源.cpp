#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int flag = true;
    for (int i = 0; i < 6; i++)
    {
        if (i >= 1 && i % 2 != 0)
        {
            if (s[i - 2] != s[i]) flag = false;
        }
        else if (i >= 2 && i % 2 == 0)
            if (s[i - 2] == s[i]) flag = false;
    }
        
    if (flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}