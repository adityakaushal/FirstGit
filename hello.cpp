#include <bits/stdc++.h>
#include <boost/math/common_factor.hpp>

using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        long long int n, a, b, k;
        cin >> n >> a >> b >> k;
        long long int x = 0, y = 0, z = 0;
        x = n / a;
        y = n / b;
        long long int lcm = boost::math::lcm(a, b);
        z = n / lcm;
        int c = (x + y) - 2 * z;
        if (c >= k)
        {
            cout << "Win" << endl;
        }
        else
        {
            cout << "Lose" << endl;
        }
    }
    return 0;
}
