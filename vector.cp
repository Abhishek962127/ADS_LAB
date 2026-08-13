#include <bits/stdc++.h>

using namespace std;
#define maxsize 5
class Stack {
    int s[maxsize];
    int top;
    public:
        Stack() {
            top = -1;

        }

    bool isoverflow() {
        return top == maxsize - 1;
    }
    bool isunderflow() {
        return top == -1;
    }
    void push(int x) {
        if (isoverflow()) {
            cout << "stackfull";
            return;
        }
        top++;
        s[top] = x;
    }
    void pop() {
        if (isunderflow()) {
            cout << "stackempty";
            return;
        }
        top--;
    }
    void peek() {
        if (isunderflow()) {
            cout << "stackempty";
            return;
        }
        cout << s[top];
    }
    void display() {
        if (isunderflow()) {
            cout << "stackempty";
            return;
        }
        for (int i = top; i >= 0; i--) {
            cout << s[i] << " ";
        }
    }
};
int main() {
    Stack s1;
    int ch, val;
    cout << "1 for Push, 2 for Pop, 3 for Peek, 4 for Display, 5 for exit"<<endl;
    cin >> ch;
    do {
        switch (ch) {
        case 1:
            cout << "enterelement";
            cin >> val;
            s1.push(val);
            break;
        case 2:
            s1.pop();
            break;
        case 3:
            s1.peek();
            break;
        case 4:
            s1.display();
            break;
        case 5:
            cout << "exiting";
            break;
        default:
            cout << "invalid";
            break;
    }
    while(ch!=5);
        
    }
}