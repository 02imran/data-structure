#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int middle = n / 2;

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (row < middle) {
                if (row == col) {
                    cout << "\\";
                } else if (col == n - 1 - row) {
                    cout << "/";
                } else {
                    cout << " ";
                }
            } else if (row == middle) {
                if (col == middle) {
                    cout << "X";
                } else {
                    cout << " ";
                }
            } else {
                if (col == n - 1 - row) {
                    cout << "/";
                } else if (col == row) {
                    cout << "\\";
                } else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}
