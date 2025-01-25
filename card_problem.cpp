#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        vector<int> height;
        int i = 0;
        long long cur = 0;

        
        while (cur <= x) {
            if (cur != 0) {
                height.push_back(cur);
            }
            i++;
            cur += 2 * i + i - 1;
        }

        int r = 0;  
   
        for (int i = height.size() - 1; i >= 0; i--) {
            while (x >= height[i]) {
                r++;
                x -= height[i];
            }
        }

        cout << r << endl;  
    }

    return 0;
}
