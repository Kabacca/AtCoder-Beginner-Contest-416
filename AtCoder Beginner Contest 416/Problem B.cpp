#include <iostream>
#include <string>
using namespace std;

//Contiguous strings of the character '.' should have no more than one 'o';
//We are not allowed to replace another '.' with an o in that string until broken by a '#'.
int main ()
{
    string s;
    cin >> s;
    string t = s;
    int i=0;
    while (i<s.size()) {
        //Will catch edge case where string s begins with .
        if (s[i] == '.') {
            t[i] = 'o';
            i++;
            while (i<s.size() && s[i] == '.' ) {
                t[i] = '.';
                i++;
            }
        }
        if (s[i] == '#') {
            t[i] = '#'; 
            i++;
        }
    }
    
    cout << t;
    return 0;
}