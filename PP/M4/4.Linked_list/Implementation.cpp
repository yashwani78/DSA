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
        Node *tmp = new Node(x);

        // If the list is empty, set the new node as both head and tail
        if (head == NULL) {
            head = tmp;
            tail = tmp;
        } else {
            // Otherwise, add the new node to the end of the list
            tail->next = tmp;
            tail = tail->next;
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
