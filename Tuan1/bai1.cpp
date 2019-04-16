#include<bits/stdc++.h>
using namespace std;
/*
int main () {
   string s;
   getline(cin,s);
   reverse (s.begin(), s.end());
   cout<<s;
   return 0;
}
*/

int main () {
    string s;
    getline(cin,s);
   for(int i=s.size()-1;i>=0;i--) {
    cout<<s[i];
   }
}
