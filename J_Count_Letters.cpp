#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    vector<int> frequency(26, 0);

    for (char c : S) {
        frequency[c - 'a']++;
    }

  
    for (char c = 'a'; c <= 'z'; c++) {
        if (frequency[c - 'a'] > 0) {
            cout << c << " : " << frequency[c - 'a'] << endl;
        }
    }

    return 0;
}
