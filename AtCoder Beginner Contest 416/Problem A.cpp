#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, l, r;
    string s;
    cin >> n >> l >> r >> s;
    bool all_o = true;
    for (int i = l - 1; i <= r - 1; ++i) {
        if (s[i] == 'x' || s[l-1] == 'x' || s[r-1] == 'x') {
            all_o = false;
            break;
        }
        if (s[i] == 'o') {
            all_o = true;
        }
    }
    if (all_o) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}