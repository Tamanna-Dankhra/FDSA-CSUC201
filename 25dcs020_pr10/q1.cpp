#include <bits/stdc++.h>
using namespace std;

int main() {
    int slot[10];

    for (int i = 0; i < 10; i++) {
        slot[i] = -1;
    }

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int reg;
        cin >> reg;

        int index = reg % 10;
        int count = 0;

        while (slot[index] != -1 && count < 10) {
            index = (index + 1) % 10;
            count++;
        }

        if (count == 10) {
            cout << "Parking lot is full\n";
        } else {
            slot[index] = reg;
        }
    }

    cout << "Final parking slots:\n";

    for (int i = 0; i < 10; i++) {
        cout << i << " : " << slot[i] << endl;
    }

    return 0;
}