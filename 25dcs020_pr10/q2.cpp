#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> shelf[10];
    // hashing using seperate chaining 
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int code;
        cin >> code;

        int index = code % 10;
        shelf[index].push_back(code);
    }

    cout << "Final shelf contents:\n";

    for (int i = 0; i < 10; i++) {
        cout << i << " : ";

        for (int book : shelf[i]) {
            cout << book << " ";
        }

        cout << endl;
    }

    return 0;
}