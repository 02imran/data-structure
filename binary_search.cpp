#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    while (q--)
    {
        int x;
        cin >> x;
        bool flag = false;
        int l = 0, r = n-1;

        while (l<=r)
        {
            int mid = (l+r)/2;
            if(x==arr[mid]){
                flag = true;
                break;
            }
            if(x > arr[mid]){
                l  = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        if(flag) cout << "found" << endl;
        else cout << "not found"<< endl;
        

    }
    
    
    return 0;
}