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
int main(){
    string Q,P;
    cin>>Q;
    stack < char > s;
    reverse(Q.begin(),Q.end());
    for(int i=0;i<Q.size();i++){
        if(Q[i]=='('){
            Q[i]=')'; 

        }
        else if (Q[i]==')')
        {
            Q[i]='(';
        }
        
    }
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
            while (!s.empty() && s.top() != '(' && (precedence(s.top()) > precedence(ch))) {
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
    reverse(P.begin(),P.end());
    cout << "Postfix : " << P << endl;

}