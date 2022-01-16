#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int x, y, a, b;
	cin >> x >> y >> a >> b;

	auto ans = abs(y - x);
	
	{
		auto t = abs(a - x) + abs(y - b);
		if (t < ans) {
			ans = t;
		}
	}

	{
		auto t = abs(b - x) + abs(y - a);
		if (t < ans) {
			ans = t;
		}
	}

	cout << ans;

	return 0;
}