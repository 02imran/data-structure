#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    vector<int> secondArr(m);
    for (int i = 0; i < m; i++)
    {
        cin >> secondArr[i];
    }

    int x;
    cin >> x;

    arr.insert(arr.begin() + x, secondArr.begin(), secondArr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}