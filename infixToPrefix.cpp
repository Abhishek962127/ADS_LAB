#include <bits/stdc++.h>
using namespace std;
int precedence(char op){
    if(op=='+' || op=='-'){
        return 1;
    }
    if(op=='/' || op=='*' || op=='%'){
        return 2;
    }
    if(op=='^'){
        return 3;
    }
}
bool isRight(char op) {
    return op == '^';
}
int main(){
    string Q,P;
    cin>>Q;
    stack < char > s;
    reverse(Q.begin(),Q.end());
    // for(int i=0;i<Q.size();i++){
    //     if(Q[i]=='('){
    //         Q[i]=')';
    //     }
    //     else if (Q[i]==')')
    //     {
    //         Q[i]='(';
    //     }
        
    // }
    for (int i = 0; i < Q.size(); i++) {
        char ch = Q[i];
        if (isalnum(ch)) {
            P += ch;
        }
        else if (ch == '(') {
            s.push(')');
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

}