#include <iostream>
using namespace std;

class Stack {
private:
    struct Node {
        int val;
        Node *next;
        Node (int x) : val(x), next(nullptr) {}
    };
    Node *head;

public:
    Stack() : head(nullptr) {}

    void push(int x) {
        Node *newNode = new Node(x);
        newNode->next = head;
        head = newNode;
    }

    int pop() {
        if (head == nullptr) {throw runtime_error("Stack underflow: Stack is empty");}
        Node *temp = head;
        int ret = head -> val;
        head = head -> next;
        delete temp;
        return ret;
    }

    int top() {
        if (head == nullptr) {throw runtime_error("Stack underflow: Stack is empty");}
        return head -> val;
    }

    bool empty() {
        return head == nullptr;
    }

    ~Stack() {
        while (!empty()) {pop();}
    }
};

void Hanoi(Stack &origen, Stack &destiny, Stack &aux, int n) {
    origen.push(n);
}

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top: " << s.top() << endl;   // 30
    cout << "Pop: " << s.pop() << endl;   // 30
    cout << "Top: " << s.top() << endl;   // 20
    cout << "Pop: " << s.pop() << endl;   // 20
    cout << "Pop: " << s.pop() << endl;   // 10
    cout << "Esta vacia :" << (s.empty() ? "Si" : "No") << endl;

    return 0;

}