#include <bits/stdc++.h>
using namespace std;
class Queue {
    int *arr;
    int n;
    int front, rear, count;
public:
    Queue(int size) {
        n = size;
        arr = new int[n];
        front = 0;
        rear = -1;
        count = 0;
    }
    void join(int token) {
        if (count == n) {
            cout << "Queue Full" << endl;
            return;
        }
        rear = (rear + 1) % n;
        arr[rear] = token;
        count++;

        cout << "Front: " << arr[front] << endl;
    }
    void serve() {
        if (count == 0) {
            cout << "Queue Empty" << endl;
            return;
        }
        front = (front + 1) % n;
        count--;

        if (count == 0) {
            front = 0;
            rear = -1;
        }
        if (count > 0)
            cout << "Front: " << arr[front] << endl;
        else
            cout << "Queue Empty" << endl;
    }
};

int main() {
    int n, operations;
    cin >> n;
    cin >> operations;

    Queue q(n);
    for (int i = 0; i < operations; i++) {
        string operation;
        cin >> operation;

        if (operation == "join") {
            int token;
            cin >> token;
            q.join(token);
        }
        else if (operation == "serve") {
            q.serve();
        }
    }
    return 0;
}