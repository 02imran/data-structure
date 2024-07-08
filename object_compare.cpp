#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Student {
    public: 
        string name;
        int roll;
        int marks;
};

int main(){
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].marks >> a[i].roll;
    }

    // int max = INT_MIN;
    Student st;
    // st.marks = INT_MIN;
    st.marks = INT_MAX;
    
    for (int i = 0; i < n; i++)
    {
        if(a[i].marks < st.marks){
            st = a[i];
        }
    }

    cout << st.marks << endl;
    
    return 0;
}