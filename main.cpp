acv#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++){
        int n, sum = 0, otr = 0;
        cin >> n;
        for (int i = 0; i < n; i++){
            int now;
            cin >> now;
            sum += now;
            if (now == -1){
                otr += 1;
            }
        }
        int ans = 0;
        for (int i = 0; sum < 0; i++){
            sum += 2;
            otr -= 1;
            ans = i + 1;
        }
        if (otr%2 == 0){
            cout << ans << '\n';
        }
        else {
            cout << ans + 1 << '\n';
        }
    }
    return 0;
}
