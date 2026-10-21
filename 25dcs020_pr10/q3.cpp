#include <bits/stdc++.h>
using namespace std;

int main() {
    int table[10];

    for (int i = 0; i < 10; i++) {
        table[i] = -1;
    }

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int id;
        cin >> id;

        int index = id % 10;
        int jump = 7 - (id % 7);
        int count = 0;

        while (table[index] != -1 && count < 10) {
            index = (index + jump) % 10;
            count++;
        }

        if (count == 10) {
            cout << "Hash table is full or no slot found\n";
        } else {
            table[index] = id;
        }
    }

    cout << "Final hash table:\n";

    for (int i = 0; i < 10; i++) {
        cout << i << " : " << table[i] << endl;
    }

    return 0;
}