#include <iostream>
using namespace std;
int A(int m, int n)
{
    if (m == 0)
        return n + 1;
    else if (n == 0)
        return A(m - 1, 1);
    else
        return A(m - 1, A(m, n - 1));
}

int main()
{
    int m, n, a;
    cout << "請輸入m：";
    cin >> m;
    cout << "請輸入n：";
    cin >> n;
    a = A(m, n);
    cout << "A = " << a;
}
