#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        
        int sumFirstHalf = 0, sumSecondHalf = 0;
        for (int i = 0; i < 3; i++) {
            sumFirstHalf += s[i] - '0'; 
        }
        
        for (int i = 3; i < 6; i++) {
            sumSecondHalf += s[i] - '0'; 
        }

        if (sumFirstHalf == sumSecondHalf) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
