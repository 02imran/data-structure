#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include<string>
using namespace std;

void print(stringstream & ss)
{
    string word;
    if(ss >> word) {
        print(ss);
        cout << word << endl;
    }
    
}
int main(){
    string s;

    // cout << s;


    getline(cin, s);

    stringstream ss(s);
    print(ss);


    return 0;
}