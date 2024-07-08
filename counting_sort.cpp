#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int alf[26] = {0};

    for(char c : s){
        alf[c - 'a']++;
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        for (int j = 0; j < alf[i - 'a']; j++)
        {
            cout << i;
        }
        
        
    }
    


    return 0;
}