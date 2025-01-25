#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int N = 1000, mod = 1e9 + 7;

int main() {
    FAST_IO
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n); 
        map<long long, long long> mpp; 
        long long s = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            mpp[arr[i]]++;
        }
        vector<long long> temp;
        for (auto it : mpp) {
            temp.push_back(it.second);
        }
        sort(temp.begin(), temp.end());
        for (size_t i = 0; i < temp.size(); i++) {
            if (temp[i] > 1) {
                s++;
            } else if (temp[i] == 1 && i % 2 == 0) {
                s += 2;
            }
        }
        cout << s << endl;
    }
    return 0;
}
