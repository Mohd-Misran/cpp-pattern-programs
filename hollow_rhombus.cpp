/* Hollow Rhombus

      *
    *   *        
  *       *      
*           *    
  *       *      
    *   *        
      *

*/

#include <iostream>

using namespace std;

int main() {

    int n, a;

    cout << "Enter value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        for (int sp = 1; sp <= n - i; sp++)
            cout << " " << " ";

        for (int j = 1; j <= (2 * i - 1); j++) {

            if (j == 1 || j == (2 * i - 1))
                cout << "*" << " ";
            else
                cout << " " << " ";
        }
        cout << endl;
    }

    a = n - 1;
    for (int i = 1; i <= n-1; i++) {

        for (int sp = 1; sp <= i; sp++)
            cout << " " << " ";

        for (int j = 1; j <= (2 * a - 1); j++) {

            if (j == 1 || j == (2 * a - 1))
                cout << "*" << " ";
            else
                cout << " " << " ";
        }
        a--;
        cout << endl;
    }



}