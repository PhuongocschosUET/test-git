#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    int n;
    cin >> n;

    string command;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> command;
        if (command == "enqueue") {
            cin >> x;
            q.push(x);
        } else {
            q.pop();
        }
    }
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
}
