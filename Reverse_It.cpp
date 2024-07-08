#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>
#include<cstring>
using namespace std;

class Student {
    public: 
        string name;
        int cls;
        char section;
        int id;
        char section2;

};



int main(){
    int n;
    cin >> n;

    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id;
    }
    for (int i = 0; i < n; i++) {
        swap(a[i].section, a[n-i-1].section2);
    }

    for (int i = 0; i < n; i++)
    {
    
        cout << a[i].name << " " << a[i].cls << " " << a[i].section2 << " " << a[i].id << endl;
    }
    
    return 0;
}