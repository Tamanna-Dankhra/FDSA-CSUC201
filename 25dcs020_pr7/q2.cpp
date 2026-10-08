#include <bits/stdc++.h>
using namespace std;

class Queue {
    list<int> q;

public:
    void arrive(int patient) {
        q.push_back(patient);
        cout << "Front: " << q.front() << endl;
    }

    void attend() {
        if (q.empty()) {
            cout << "Queue Empty" << endl;
            return;
        }

        q.pop_front();

        if (q.empty())
            cout << "Queue Empty" << endl;
        else
            cout << "Front: " << q.front() << endl;
    }
};

int main() {
    Queue q;

    int operations;
    cin >> operations;

    for (int i = 0; i < operations; i++) {
        string op;
        cin >> op;

        if (op == "arrive") {
            int patient;
            cin >> patient;
            q.arrive(patient);
        }
        else if (op == "attend") {
            q.attend();
        }
    }

    return 0;
}