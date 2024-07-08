#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<long long> A(N + 1); 
    vector<long long> prefix_sum(N + 1, 0);

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    for (int i = 1; i <= N; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + A[i];
    }

    for (int i = 0; i < Q; i++) {
        int L, R;
        cin >> L >> R;
        cout << prefix_sum[R] - prefix_sum[L - 1] << endl;
    }

    return 0;
}
