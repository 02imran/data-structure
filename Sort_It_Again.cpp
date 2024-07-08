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
};

bool srt(const Student &a, const Student &b) {
    if (a.englishMark != b.englishMark) {
        return a.englishMark > b.englishMark;
    } else if (a.mathMark != b.mathMark) {
        return a.mathMark > b.mathMark;
    } else {
        return a.id < b.id;
    }
}

int main() {
    int n;
    cin >> n;

    vector<Student> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id >> a[i].mathMark >> a[i].englishMark;
    }

    sort(a.begin(), a.end(), srt);

    for (const auto &student : a) {
        cout << student.name << " " << student.cls << " " << student.section << " " << student.id << " " << student.mathMark << " " << student.englishMark << endl;
    }

    return 0;
}
