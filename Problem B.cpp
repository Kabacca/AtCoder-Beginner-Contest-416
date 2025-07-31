#include <bits/stdc++.h>
using namespace std;

//Contiguous strings of the character '.' should have no more than one 'o';
//We are not allowed to replace another '.' with an o in that string until broken by a '#'.


int main ()
{
    string s, t;
    cin >> s;
    int i=0
    while (i<s.size()) {
        //Will catch edge case where string s begins with .
        if (s[i] == '.') {
            t[i] = 'o';
            i++
        }
        //If there is not then go to this case where it is a # and this is where to set si = ti;
        if (s[i] == '#') {
            t[i] = '#';
            i++;
            //check next character is it a period?
            if (s[i] == '.') {
                t[i] = 'o';
            }
        }
    }

    return 0;
}