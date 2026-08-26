#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* head = NULL;

void insertFront(int x) {
    Node* n = new Node(x);
    n->next = head;
    head = n;
}

void insertEnd(int x) {
    Node* n = new Node(x);

    if (head == NULL) {
        head = n;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = n;
}

void insertPosition(int x, int pos) {
    if (pos <= 1) {
        insertFront(x);
        return;
    }

    Node* n = new Node(x);
    Node* temp = head;

    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) {
        insertEnd(x);
        return;
    }

    n->next = temp->next;
    temp->next = n;
}

void display() {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {
    int choice, value, pos;

    while (true) {
        cout << "\n1. Insert Front";
        cout << "\n2. Insert End";
        cout << "\n3. Insert at Position";
        cout << "\n4. Display";
        cout << "\n5. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter value: ";
            cin >> value;
            insertFront(value);
            display();
        }
        else if (choice == 2) {
            cout << "Enter value: ";
            cin >> value;
            insertEnd(value);
            display();
        }
        else if (choice == 3) {
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> value;
            insertPosition(value, pos);
            display();
        }
        else if (choice == 4) {
            display();
        }
        else if (choice == 5) {
            break;
        }
        else {
            cout << "Invalid choice";
        }
    }

    return 0;
}