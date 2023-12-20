#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        int result = n; // Initialize result with the length of x
        for (int i = 1; i <= n; ++i) {
            string temp = x.substr(0, i); // Take the prefix of length i from x
            string temp_s = temp; // Initialize a temporary string with the prefix

            // Append the temporary string with itself until its length is greater than or equal to n
            while (temp_s.length() < n) {
                temp_s += temp;
            }

            // If s is a substring of the modified temporary string
            if (temp_s.find(s) != string::npos) {
                // Update the result with the minimum number of operations required
                result = min(result, i);
            }
        }

        // If s is not a substring of any modified string, output -1
        if (result == n) {
            cout << -1 << endl;
        } else {
            // Otherwise, output the minimum number of operations
            cout << result << endl;
        }
    }

    return 0;
}
