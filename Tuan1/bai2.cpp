#include<bits/stdc++.h>
using namespace std;
int main () {
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    double a1,a2,c1,c2,X,Y;
    a1=(y2-y1)/(x2-x1);
    a2=(y3-y4)/(x3-x4);
    c1=y1-a1*x1;
    c2=y3-a2*x3;
    X=(c1-c2)/(a2-a1);
    Y=a1*X+c1;
    cout<< X<< " " << Y;
    return 0;
}
