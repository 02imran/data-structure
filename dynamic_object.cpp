#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Student {
    public:
        int roll;
        int cgpa;
        int age;

        Student(int roll, int cgpa, int age){
            this->roll = roll;
            this->cgpa = cgpa;
            this->age = age;
        }
};

Student * func(){
    Student *student = new Student(10,2,10);
    return student;
}

int main(){
    
    Student *ans = func();
    cout << ans->cgpa << endl;
    return 0;
}