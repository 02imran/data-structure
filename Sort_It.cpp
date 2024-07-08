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
        int mathMark;
        int englishMark;
        int sumOfMark;

};

bool srt(Student a, Student b){
    if (a.sumOfMark > b.sumOfMark) {
        return true; 
    } else if(a.sumOfMark == b.sumOfMark) {
        if(a.id < b.id) {
            return true;
        }
    } else {
        return false;
    }
    return false;
}

int main(){
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id >> a[i].mathMark >> a[i].englishMark;
    }

    for (int i = 0; i < n; i++)
    {
        a[i].sumOfMark = a[i].mathMark + a[i].englishMark;
    }

    sort(a, a+n, srt);

    for (int i = 0; i < n; i++)
    {
        // cout << "sum - " << a[i].sumOfMark << endl;
        cout << a[i].name << " " << a[i].cls << " " << a[i].section << " " << a[i].id << " " << a[i].mathMark << " " << a[i].englishMark << endl;
    }
    

    
    
    return 0;
}