#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> arr(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<long long> pre(n, 0);
    pre[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        pre[i] = arr[i] + pre[i-1];
        
    }
    
    for (int i = n-1; i >= 0; i--)
    {
        cout << pre[i] << " ";
    }
    



    
    return 0;
}