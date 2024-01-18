#include <iostream>
using namespace std

int main() {
    int n ;
    cin>>n;

    for (int i = 1, k = 0; i <= n; ++i) {
        for (int j = 1; j <= i; ++j, ++k) {
            cout << k + 1 << "\t";
        }
        cout << endl;
    }

    return 0;
}
