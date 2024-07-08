#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Student {
    public: 
        string name;
        int roll;
        int marks;
};

bool srt(Student a, Student b){
    if (a.marks <= b.marks) return true;
    else return false;
}

int main(){
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].marks >> a[i].roll;
    }

    sort(a, a+n, srt);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].marks << " " << a[i].name << " " << a[i].roll << endl;
    }
    
    
    return 0;
}