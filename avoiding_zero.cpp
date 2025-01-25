#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        ll s = 0;
        for (int i = 0; i < n; i++) {
            s += arr[i];
        }
        
        if (s == 0) {
            cout << "NO" << '\n';
        } else {
            if (s > 0) {
                sort(arr.begin(), arr.end(), greater<ll>());
            } else {
                sort(arr.begin(), arr.end());
            }
            cout << "YES" << '\n';
            for (int i = 0; i < n; ++i) {
                cout << arr[i] << " ";
            }
            cout << '\n';
        }
    }
    return 0;
}
