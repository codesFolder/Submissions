Counting number of occurence of character in an string and strong it in unordered map and then accessing it for further another string

Here is an code for this:

```cpp
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    string s = "CBEDDBCEDEDDCD";
    int n = s.length();  // Define the size of the string

    string alp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    unordered_map<char, int> um;

    // Count occurrences of each letter
    for (int i = 0; i < n; i++) {
        char c = s[i];
        um[c]++;
    }

    int count = 0;

    // Check occurrences against positions in the alphabet
    for (int i = 0; i < 26; i++) {
        if (um[alp[i]] >= i + 1) {
            count++;
        }
    }

    cout << "Count: " << count << endl;

    return 0;
}
```

In this code um[c]++ stores the counting of c character and um[alp[i]] access the count of alp[i] character.
