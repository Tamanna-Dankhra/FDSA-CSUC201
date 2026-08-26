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

void deleteValue(int x) {
    if (head == NULL)
        return;

    if (head->data == x) {
        Node* del = head;
        head = head->next;
        delete del;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL && temp->next->data != x)
        temp = temp->next;

    if (temp->next != NULL) {
        Node* del = temp->next;
        temp->next = del->next;
        delete del;
    }
}

void display() {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

void reversePrint(Node* temp) {
    if (temp == NULL)
        return;

    reversePrint(temp->next);
    cout << temp->data << " ";
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);

    cout << "Queue: ";
    display();

    deleteValue(30);

    cout << "After deletion: ";
    display();

    cout << "Reverse: ";
    reversePrint(head);
    cout << endl;

    cout << "Forward: ";
    display();

    return 0;
}