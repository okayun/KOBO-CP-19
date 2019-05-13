#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;

int main() {
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        int sum = 0;

        for (int i = 1; i <= sqrt(n) && i < n; ++i) {
            sum += (n % i == 0 ? i + ((n / i) != i && (n / i) < n ? n / i : 0) : 0);
        }

        cout << sum << endl;
    }

    return 0;
}
