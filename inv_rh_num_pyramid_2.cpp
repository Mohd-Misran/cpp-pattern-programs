/* Inverted Right Half Number Pyramid

1 2 3 4 5
2 3 4 5
3 4 5
4 5
5

*/

#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "Enter value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++)
            cout << j << " ";
        cout << endl;
    }
}