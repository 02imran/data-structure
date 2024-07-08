#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int min_sum = numeric_limits<int>::max();
        
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int sum = arr[i] + arr[j] + j - i;
                if (sum < min_sum) {
                    min_sum = sum;
                }
            }
        }
        
        cout << min_sum << endl;
        
    }
    
    return 0;
}