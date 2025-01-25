#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> temp(n);
        vector<int> temp1(n);
        for (int i = 0; i < n; i++) {
            cin >> temp[i];
        }
        for (int j = 0; j < n; j++) {
            cin >> temp1[j];
        }
        int cntr = 0;
        for (int i = 0; i < n; i++) {
            if (temp[i] < temp1[i]) {
                cntr++;
                
            }
        }
        if (cntr >= 2) {
            cout << "NO\n";
        } else if (cntr == 0) {
            cout << "YES\n";
        } else {
           int inc = 0;
            int dec = INT_MAX;
            for (int i = 0; i < n; i++) {
                if (temp[i] < temp1[i]) {
                    inc = temp1[i] - temp[i];
                } else {
                    dec = min(dec, (temp[i] - temp1[i])); 
                }
               
            }
            
            if (dec >= inc) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
