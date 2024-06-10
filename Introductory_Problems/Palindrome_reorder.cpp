#include<bits/stdc++.h>
using namespace std;
 
int main() {
    string a;
    cin >> a;
    int i = 0;
    vector<int> b(26, 0);
    
    while (a[i] != '\0') {
        b[int(a[i] - 'A')]++;
        i++;
    }
    
    int odd = 0;
    int even = 0;
    int odd_index;
    
    for (int i = 0; i < 26; i++) {
        if (b[i] % 2 == 0) {
            even++;
        } else {
            odd++;
            odd_index = i;
        }
    }
    
    if (odd > 1) {
        cout << "NO SOLUTION";
    } else {
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < b[i]/2; j++) {
                if (i != odd_index || b[i] % 2 == 0) {
                    cout << char('A' + i);
                }
            }
        }
        if (odd == 1) {
            for (int j = 0; j < b[odd_index]; j++) {
                cout << char('A' + odd_index);
            }
        }
        for (int i = 25; i >= 0; i--) {
            for (int j = 0; j < b[i]/2; j++) {
                if (i != odd_index || b[i] % 2 == 0) {
                    cout << char('A' + i);
                }
            }
        }
    }
    return 0;
}