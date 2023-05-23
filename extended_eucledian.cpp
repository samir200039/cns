// for two  given integers a  and b , where d=gcd(a,b) there exist two nnumber s and t such that as+bt=d , WAP to compute s and t using extended
// Euclid's Algorithm.

#include <iostream>

using namespace std;

// Function to compute the GCD and the coefficients s and t
int extendedEuclidean(int a, int b, int& s, int& t) {
    // Base case
    if (a == 0) {
        s = 0;
        t = 1;
        return b;
    }

    // Recursive call
    int gcd = extendedEuclidean(b % a, a, s, t);

    // Update coefficients
    int temp = s;
    s = t - (b / a) * s;
    t = temp;

    return gcd;
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    int s, t;
    int gcd = extendedEuclidean(a, b, s, t);

    cout << "GCD: " << gcd << endl;
    cout << "Coefficients (s, t): " << s << ", " << t << endl;

    return 0;
}
