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

    int x;
    cin >> x;

    int l = 0;
    int r = n-1;
    bool flag = false;
    while (l<=r)
    {
        int mid = (l+r)/2;
        if(arr[mid] == x){
            flag = true;
            break;
        } 
         
        if(x > arr[mid]){
            l = mid +1;
        } else {
            r = mid -1;
        }
    }

    if(flag){
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }
    
    
    return 0;
}