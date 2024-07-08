// #include <iostream>
// #include <string>
// using namespace std;

// class Student {
// public:
//     int id;
//     string name;
//     string section;
//     int totalMarks;
// };

// int main() {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n = 3;
//         Student students[n];

//         for (int i = 0; i < n; ++i) {
//             cin >> students[i].id >> students[i].name >> students[i].section >> students[i].totalMarks;
//         }

//         sort(students, a+n, srt);
//         Student st = students[0];
//         for (int i = 1; i < 3; ++i) {
//             if (students[i].totalMarks > st.totalMarks || 
//                 (students[i].totalMarks == st.totalMarks && students[i].id < st.id)) {
//                 st = students[i];
//             }
//         }

//         cout << st.id << " " << st.name << " " << st.section << " " << st.totalMarks << endl;
//     }

//     return 0;
// }



#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int id;
    string name;
    string section;
    int totalMarks;
};

bool srt(Student a, Student b){
    if (a.totalMarks > b.totalMarks) return true;
    else if(a.totalMarks == b.totalMarks) {
        return a.id < b.id;
    }
    else return false;
}

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n = 3;
        Student students[n];

        for (int i = 0; i < n; ++i) {
            cin >> students[i].id >> students[i].name >> students[i].section >> students[i].totalMarks;
        }

        sort(students, students+n, srt);

        cout << students[0].id << " " << students[0].name << " " << students[0].section <<" " << students[0].totalMarks << endl;

    }

    return 0;
}

