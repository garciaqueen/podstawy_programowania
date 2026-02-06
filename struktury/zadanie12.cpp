#include <iostream>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <cstring>

using namespace std;

struct Node {
    int value;
    Node* next;
};

Node* list_append(Node* a, int value) {
    Node* a1 = new Node;
    a1->value = value;
    a1->next = NULL;
    if (a == nullptr) {
        return a1;
    }
    Node* current = a;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = a1;
    return a;


}

void list_print(Node* a) {
    while (a != nullptr) {
        cout << a->value << '\n';
        a = a->next;
    }
}

void list_delete(Node* a) {
    while (a != nullptr) {
        Node* next = a->next;
        delete a;
        a = next;
    }

}

int main()
{
    Node* node = nullptr;
    int x;
    while (true) {
        cin >> x;
        if (x == 0) break;
        node = list_append(node, x);
    }

    list_print(node);
    list_delete(node);
    return 0;

}
