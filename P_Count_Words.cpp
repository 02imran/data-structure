#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include<string>
using namespace std;

bool containsAlphabet(string& word) {
    for (char c : word) {
        if (isalpha(c)) {
            return true;
        }
    }
    return false;
}

int countWords(string& str) {
    stringstream s(str);
    string word;
    int count = 0;
    while (s >> word) {
        if (containsAlphabet(word)) {
            count++;
        }
    }
    return count;
}

int main(){
    string s;
    getline(cin, s);

    cout << countWords(s) << endl;
    return 0;
}