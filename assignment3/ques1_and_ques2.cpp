#include <iostream>
#include <string>
using namespace std;

class Stack {
private:
    int arr[100];
    int top;

public:
    Stack() { top = -1; }

    void push(int x) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push " << x << endl;
            return;
        }
        arr[++top] = x;
        cout << x << " pushed into stack." << endl;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Nothing to pop." << endl;
            return;
        }
        cout << arr[top--] << " popped from stack." << endl;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == 99;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements (top to bottom): ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // (vi) peek
    void peek() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Top element is: " << arr[top] << endl;
    }
};

// Function to reverse a string using stack
string reverseString(string str) {
    Stack s;
    // Instead of int stack, we use char stack here
    char charStack[100];
    int top = -1;

    // push characters
    for (char ch : str) {
        if (top == 99) {
            cout << "Stack overflow while reversing string." << endl;
            return str;
        }
        charStack[++top] = ch;
    }

    // pop characters to reverse
    string reversed = "";
    while (top != -1) {
        reversed += charStack[top--];
    }
    return reversed;
}

int main() {
    Stack s;
    int choice, value;
    string input;

    while (true) {
        cout << "1. Push\n2. Pop\n3. isEmpty\n4. isFull\n5. Display\n6. Peek\n7. Reverse String\n8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            s.push(value);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            cout << (s.isEmpty() ? "Stack is empty." : "Stack is not empty.") << endl;
            break;
        case 4:
            cout << (s.isFull() ? "Stack is full." : "Stack is not full.") << endl;
            break;
        case 5:
            s.display();
            break;
        case 6:
            s.peek();
            break;
        case 7:
            cout << "Enter string to reverse: ";
            cin >> input;
            cout << "Reversed string: " << reverseString(input) << endl;
            break;
        case 8:
            cout << "Exiting program" << endl;
            return 0;
        default:
            cout << "Invalid choice" << endl;
        }
    }
}
