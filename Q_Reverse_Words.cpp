#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include<string>
using namespace std;

void countWords(string& str) {
    stringstream s(str);
    string word;
    string result;

    while (s >> word) {
        reverse(word.begin(), word.end()); 
        if (!result.empty()) {
            result += " "; 
        }
        result += word; 
    }

    cout << result << endl;

}

int main(){
    string s;
    getline(cin, s);

    countWords(s);
    return 0;
}