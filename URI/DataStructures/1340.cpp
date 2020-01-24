//Eu Posso Adivinhar a Estrutura de Dados!:
//Assunto: Stack, Queue, PriorityQueue
#include<bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int n, c, e;
    bool pilha, fila, pfila;
    while(cin >> n) {
        stack<int> s;
        queue<int> q;
        priority_queue<int> p;
        pilha = true, fila = true, pfila = true;
        for(int i = 0; i < n; i++) {
            cin >> c >> e;
            if(c == 1) {
                s.push(e);
                q.push(e);
                p.push(e);
            } else {
                if(s.empty() or s.top() != e) {
                    pilha = false;
                }
                if(q.empty() or q.front() != e) {
                    fila = false;
                }
                if(p.empty() or p.top() != e) {
                    pfila = false;
                }
                if(!s.empty()) {
                    s.pop();
                }
                if(!q.empty()) {
                    q.pop();
                }
                if(!p.empty()) {
                    p.pop();
                }
            }
        }
        if(pilha) {
            if(fila) {
                cout << "not sure\n";
            } else if(pfila) {
                cout << "not sure\n";
            } else {
                cout << "stack\n";
            }
        } else if(fila) {
            if(pfila) {
                cout << "not sure\n";
            } else {
                cout << "queue\n";
            }
        } else if(pfila) {
            cout << "priority queue\n";
        } else {
            cout << "impossible\n";
        }
    }
}
