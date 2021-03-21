/*
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1

Idea:
When i = 1, pattern = 1^2
When i = 2, pattern = 11^2
When i = 3, pattern = 111^2
When i = 4, pattern = 1111^2

*/

#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i; j++)
            cout << "  ";

        for (int k = 1; k <= i; k++)
            cout << k << " ";
        
        for (int l = i - 1; l > 0; l--)
            cout << l << " ";
        
        cout << endl;
    }
}