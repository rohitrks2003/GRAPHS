//jai bholenath
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007
#define float double
#define pb push_back
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define endl "\n"
#define inf 3e18
const int N = 1e5 + 5;

// coding is not about solving questions, its about seeing that you are a fighter within you

int dx[] = {-1, 0, 1, 0, -1, -1, 1, 1};
int dy[] = {0, 1, 0, -1, -1, 1, 1, -1};
char dir[] = {'U', 'R', 'D', 'L'};
string ansss = "we will get through this together";

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].ff;
        v[i].ss = i + 1;
    }
    sort(all(v));
    cout << v[n - 2].ss;
    return;
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int q = 1;
    //cin>>q;
    for (int i = 0; i < q; i++)
    {
        solve();
        cout << "\n";
    }
    return 0;
}
