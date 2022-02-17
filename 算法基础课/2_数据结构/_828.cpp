#include <iostream>

using namespace std;

const int N = 1e6+10;

int m;
int stk[N], idx;

int main()
{
    cin >> m;
    while (m -- )
    {
        string op;
        int x;
        cin >> op;
        if (op == "push")  cin >> x, stk[++idx] = x;
        else if (op == "pop") idx -- ;
        else if (op == "empty") cout << (idx ? "NO" : "YES") << endl;
        else cout << stk[idx] << endl;
    }

    return 0;
}