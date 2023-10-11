#include <iostream>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--){
		long long n;
		cin >> n;
		long long low = 0, high = n;
		long long ans;

			while (low <= high)
			{
				long long mid = (low + high) / 2;

				if (mid * mid > n)
				{
					high = mid - 1;
				}
				else
				{
					if ((mid + 1) * (mid + 1) > n)
					{
						ans = mid;
						break;
					}
					else
						low = mid + 1;
				}
			}
		cout << ans << endl;
	}
	return 0;
}