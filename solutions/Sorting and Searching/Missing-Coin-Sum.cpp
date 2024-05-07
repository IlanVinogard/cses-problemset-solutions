#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	vector<ll> arr(N);
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	ll X = 1LL;
	for (int i = 0; i < N; i++) {

		if (arr[i] > X) {
			cout << X;
			return 0;
		}
		X += arr[i];
	}
	cout << X;
	return 0;
}
