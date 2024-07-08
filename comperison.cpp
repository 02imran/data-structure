#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int left = 0;
    int right = n - 1;
    bool isPalindrone = true;
    while (left < right)
    {
        if(arr[left] != arr[right]){
            isPalindrone = false;
            break;
        }
        left++;
        right--;
    }

    if(isPalindrone){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    
    return 0;
}