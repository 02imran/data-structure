#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    string jasi = "Jessica";

    int a = s.find(jasi);

    for (int i = 0; i < s.length(); i++)
    {
        if(s[a] == 'J' && s[a + 6]== 'a' && s[a + 7]== ' '){
            cout << "YES" << endl;
            break;
        } else {
            cout << "NO" << endl;
            break;
        }
    }

    
    return 0;
}