#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char S[] = { 'a', 'b', 'c' };
    int n = 3;
    int total = pow(2, n);

    for (int i = 0; i < total; ++i) {
        cout << "{";
        bool first = true;
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                if (!first) cout << ", ";
                cout << S[j];
                first = false;
            }
        }
        cout << "}" << endl;
    }
    return 0;
}