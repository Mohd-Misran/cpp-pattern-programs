/* Pascal's Triangle

               1
             1   1
           1   2   1
         1   3   3   1
       1   4   6   4   1
     1   5  10  10   5   1

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int n, coef = 1;
    cout << "Enter value of n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {

        for (int sp = 1; sp <= n - i; sp++)
            cout << "  ";
    
        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;
            cout << setw(4) << coef;
        }
        cout << endl;
    }
}