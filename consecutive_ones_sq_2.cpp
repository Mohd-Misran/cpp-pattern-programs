/*
     1  
    121 
   12321
  1234321
 123454321

Idea:
When i = 1, pattern = 1^2
When i = 2, pattern = 11^2
When i = 3, pattern = 111^2
When i = 4, pattern = 1111^2

*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int n;
	unsigned long long int k = 0;
    cout << "Enter value of n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {

        for (int sp = 1; sp <= n - i; sp++)
            cout << " ";

        k = k + (pow(10, i) + 0.1);

        cout << (k * k);
        
        cout << endl;
    }
}