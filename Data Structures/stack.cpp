#include <iostream>
using namespace std;

class Stack {
public:
    Stack() {
        top = 0;
    }
    bool empty() const {
        return top == 0;
    }
    void push(int info) {
        if (top >= size) {
            cout << "Error: Stack Overflow! Cannot push " << info << "." << endl;
            return;
        }
        data[top++] = info;
    }
    int pop() {
        if (empty()) {
            cout << "Error: Stack Underflow! Returning -1." << endl;
            return -1;
        }
        return data[--top];
    }
private:
    static const int size = 10;
    int data[size];
    int top;
};

int main () {
    Stack s;
    for (int i = 0; i < 10; ++i) s.push(i);

    s.push(99);

    for (int i = 0; i < 10; ++i) {
        cout << s.pop() << endl;
    }

    if (s.empty()) {
        cout << "Stack is empty!" << endl;
    }
    
    s.pop();
    return 0;
}
