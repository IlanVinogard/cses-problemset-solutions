#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> books(n);
    for (int i = 0; i < n; i++) cin >> books[i];
    sort(books.begin(), books.end());
    if (n == 1) {
        cout << books[0] * 2;
        return 0;
    }
    long long left = 0, right = n - 1, time1 = 0, time2 = 0;
    while (right > left) {
        if (time2 > time1) {
            time1 += books[left];
            left += 1;
        }
        else {
            time2 += books[right];
            right -= 1;
        }
    }
    cout << (time1 + time2 + books[left] + max(0LL, abs(time1 - time2) - books[left]));
    return 0;
}