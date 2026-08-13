#include <bits/stdc++.h>

using namespace std;
int precedence(char op) {
    if (op == '+' || op == '-') {
        return 1;
    }
    if (op == '*' || op == '/' || op == '%') {
        return 2;
    }
    if (op == '^') {
        return 3;

    }
    return 0;

}
bool isRight(char op) {
    return op == '^';
}
int main() {
    string Q, P;
    cin >> Q;
    stack < char > s;
    for (int i = 0; i < Q.size(); i++) {
        char ch = Q[i];
        if (isalnum(ch)) {
            P += ch;
        }
        else if (ch == '(') {
            s.push(ch);
        }
        else if (ch == ')') {
            while (!s.empty() && s.top() != '(') {
                P += (s.top());
                s.pop();
            }
            s.pop();
        }
        else {
            while (!s.empty() && s.top() != '(' && (precedence(s.top()) > precedence(ch) || (precedence(s.top()) == precedence(ch) && !isRight(ch)))) {
                P += (s.top());
                s.pop();
            }
            s.push(ch);

        }
    }
    while (!s.empty()) {
        P += s.top();
        s.pop();
    }
    cout << "Postfix :-" << P << endl;

}