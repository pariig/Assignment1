#include <iostream>

using namespace std;

int main() {
    int n;

    
    cout << "Enter the size of the diamond: ";
    cin >> n;

    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i ; ++j)
            cout << "\t";

        cout << "*";

        if (i > 0) {
            for (int k = 0; k < 2 * i - 1; ++k)
                cout << "\t";
            cout << "*";
        }

        cout << endl;
    }

    for (int i = n - 2; i >= 0; --i) {
        for (int j = 0; j < n - i ; ++j)
            cout << "\t";

        cout << "*";

        if (i > 0) {
            for (int k = 0; k < 2 * i - 1; ++k)
                cout << "\t";
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
