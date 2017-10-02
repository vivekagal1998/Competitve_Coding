#include <string>
#include <vector>
#include <map>
#include <list>
#include <iterator>
#include <set>
#include <queue>
#include <iostream>
#include <sstream>
#include <stack>
#include <deque>
#include <cmath>
#include <memory.h>
#include <cstdlib>
#include <cstdio>
#include <cctype>
#include <algorithm>
#include <utility>
#include <time.h>
#include <cassert>
using namespace std;
#define FOR(i, a, b) for(int i=(a);i<(b);i++)
#define RFOR(i, b, a) for(int i=(b)-1;i>=(a);--i)
#define FILL(A,value) memset(A,value,sizeof(A))
#define ALL(V) V.begin(), V.end()
#define SZ(V) (int)V.size()
#define PB push_back
#define MP make_pair
#define Pi 3.14159265358979
typedef long long Int;
typedef unsigned long long UInt;
typedef vector<int> VI;
typedef pair<int, int> PII;
const int INF = 1000000007;
const int MAX = 40007;
const int MAX2 = 1000000;
const int MAXD = 20;
const int BASE = 1000000007;
const int MOD = 1000000007;
int main()
{
	//ifstream inUser("users.csv");
	//ifstream inProblem("problems.csv");
	//freopen("in.txt" , "r" , stdin);
	//freopen("out.csv" , "w" , stdout);
	string s;
	cin >> s;
	assert(s.size() >= 1 && s.size() <= 100000);
	int x = 0;
	int y = 0;
	set<PII> S;
	S.insert(MP(0,0));
	int res = 0;
	FOR(i,0,s.size())
	{
		assert(s[i] == 'L' || s[i] == 'R' || s[i] == 'U' || s[i] == 'D');
		if (s[i] == 'L') --y;
		if (s[i] == 'R') ++y;
		if (s[i] == 'U') --x;
		if (s[i] == 'D') ++x;
		if (S.count(MP(x , y))) ++res;
		S.insert(MP(x , y));
	}
	set<PII> ::iterator itr;
	for(itr=S.begin();itr!=S.end();itr++){
		cout<<itr->first<<" "<<itr->second<<"\n";
	}
	cout << res << endl;
    return 0;
}
