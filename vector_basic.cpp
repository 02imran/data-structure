#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> num(n);

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    
    replace(num.begin(), num.end(), 3, 10);
    
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }
    

    return 0;
}