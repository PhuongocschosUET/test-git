#include<iostream>
#include<cmath>

using namespace std;

class Num{
public:
    int number;
    Num*next;
};

Num *head = NULL;
int sum = 0, max1 = -1000000, min1 = 1000000, c[10000];

void insert();

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < 10000; i++) c[i] = 0;
    for(int i = 0; i < n; i++){
        insert();
    }
    //swap
    Num*temp = head;
    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++){
            Num *tmp = temp->next;
            if (temp->number > tmp->number){
                int tmpNum = temp->number;
                temp->number = tmp->number;
                tmp->number = tmpNum;
            }
            tmp = tmp->next;
        }
        temp = temp->next;
    }

    int count = 0, mode;
    temp = head;
    while (temp)
    {
        if (c[temp->number] > count) {
            count = c[temp->number];
            mode = temp->number;
        }
        temp = temp->next;
    }

    int median;
    temp = head;
    if (n%2 != 0){
        for (int i = 0; i < n % 2; i++)
            temp = temp->next;
            median = temp->number;
    }
    else {
        for (int i = 0; i < n %2; i++)
            temp = temp->next;
            median = temp->number + temp->next->number;
    }

    cout << "Range: " << max1 - min1 << endl;
    cout << "Mean: " << sum / n << endl;
    cout << "Mode: " << mode << endl;
    cout << "Median: " << median;
}
void insert()
{
    Num *newNum= new Num;
    int num;
    cin >> num;
    if (max1 < num) max1 = num;
    if (min1 > num) min1 = num;
    sum = sum + num;
    c[num]++;
    newNum->number = num;
    newNum->next = NULL;
    if (head!=NULL){
        newNum->next = head;
    }
    head = newNum;
}
