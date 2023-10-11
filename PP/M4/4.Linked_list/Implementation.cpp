#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

int main() {
    int n; // Number of nodes
    cin >> n;

    Node *head = NULL;
    Node *tail = NULL;
    Node *tmp;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;

        // Create a new node
        Node *newNode = new Node(x);

        // If the list is empty, set the new node as both head and tail
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            // Otherwise, add the new node to the end of the list
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Print the linked list
    Node *current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    // Free memory by deleting the nodes
    current = head;
    while (current != NULL) {
        Node *temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
