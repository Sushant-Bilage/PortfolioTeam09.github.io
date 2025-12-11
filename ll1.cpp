#include <iostream>
using namespace std;

struct Node {
    string match;
    Node* next;
};

int main() {
    Node* head = new Node{"Match 1", nullptr};
    head->next = new Node{"Match 2", nullptr};
    head->next->next = new Node{"Match 3", nullptr};

    Node* temp = head;
    while(temp != nullptr) {
        cout << temp->match << endl;
        temp = temp->next;
    }
}
