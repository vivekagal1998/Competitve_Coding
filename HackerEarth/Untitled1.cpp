#include <bits/stdc++.h>
using namespace std;
const int MAXN = 50005;
const int MAXV = 1000006;
const long long int MOD = 1000000007;
int SQRT, ctr[MAXV], A[MAXN], F[MAXN], l[MAXN], r[MAXN];
long long int power(long long int a, int b)
{
	if(!b)
		return 1;
	long long int ans = power(a, b/2);
	ans = (ans*ans)%MOD;
	if(b%2)
		ans = (ans*a)%MOD;
	return ans;
}
bool sorter(const int &x, const int &y)
{
	int bx = l[x]/SQRT, by = l[y]/SQRT;
	if(bx != by)
		return bx < by;
	return r[x] < r[y];
}
inline void add_value(int x, long long int &tot)
{
	tot = (tot*power(F[ctr[x]], MOD-2))%MOD;
	ctr[x]++;
	tot = (tot*F[ctr[x]])%MOD;
}
inline void rem_value(int x, long long int &tot)
{
	tot = (tot*power(F[ctr[x]], MOD-2))%MOD;
	ctr[x]--;
	tot = (tot*F[ctr[x]])%MOD;
}
int main()
{
	int n,c,q;
	cin>>n>>c>>q;
	for (int i = 1; i <= n; ++i)
		cin>>A[i];
	for (int i = 0; i <= n; ++i)
		cin>>F[i];
	vector <int> que;
	for (int i = 0; i < q; ++i)
	{
		cin>>l[i]>>r[i];
		que.push_back(i);
	}
	SQRT = sqrt(n + 5);
	sort(que.begin(), que.end(), sorter);
	int p1 = 0, p2 = 0;
	long long int cval = power(F[0],c), ans = 1;
	for (int i = 0; i < q; ++i)
	{
		int id = que[i];
		while(p2 < r[id])
		{
			p2++;
			add_value(A[p2], cval);
		}
		while(p2 > r[id])
		{
			rem_value(A[p2], cval);
			p2--;
		}
		while(p1 < l[id] - 1)
		{
			p1++;
			rem_value(A[p1], cval);
		}
		while(p1 >= l[id])
		{
			add_value(A[p1], cval);
			p1--;
		}
		ans = (ans*cval)%MOD;;
	}
	cout<<ans<<"\n";
	return 0;
}
