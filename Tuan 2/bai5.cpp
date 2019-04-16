#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    int n;
    cin >> n;

    string command;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> command;
        if (command == "push") {
            cin >> x;
            s.push(x);
        } else {
            s.pop();
        }
    }
    stack<int> result;
    while (!s.empty()) {
        result.push(s.top());
        s.pop();
    }
    while (!result.empty()) {
        cout << result.top() << " ";
        result.pop();
    }
}

