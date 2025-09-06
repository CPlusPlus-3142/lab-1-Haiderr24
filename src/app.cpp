// practicing some imperative C++
// see README for instructions
#include <iostream>
#include <string>
using namespace std;

bool isPrime(int x);
int closestPrime(int x);

bool isPrime(int x) {
    if (x <= 1) {
        return false;
    }
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int closestPrime(int x) {
    if (isPrime(x)) {
        return x;
    }
    else {
        int checkPrime = (x < 2) ? 2 : x + 1;
        while (true) {
            if (isPrime(checkPrime)) {
                return checkPrime;
            }
            checkPrime++;
        }
    }
}

/** You should put in a main for testing, but then comment it out for submission.
 * The test.cpp file will include the main in your submission. You do not edit the test.cpp 
 * file. The only file to edit is app.cpp**/
 
 /*
int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;

    if (isPrime(a)) {
        cout << a << " is prime." << endl;
    } else {
        cout << a << " is not prime. Closest prime is "
             << closestPrime(a) << "." << endl;
    }
    return 0;
          
}
*/