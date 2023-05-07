#include<bits/stdc++.h>

using namespace std;
// using namespace __gnu_pbds;


typedef long long int lli;
typedef vector<lli> vl;
typedef vector<int> vi;
typedef vector<string> vs;
typedef set<int> si;
typedef unordered_map<char, int> mci;
typedef pair<int, int> pii;


// // #define f first
// // #define s second
// // #define endl '\n'
// // #define sp <<" "<<
// // #define pb push_back
// // #define MOD 1000000007
// // #define gcd(a,b) __gcd(a,b)
// #define rep(i,a,b)  for(int i=a;i<b;i++)
// // #define lcm(a,b) (a*(b/gcd(a,b)))
// // #define all(a) (a).begin(),(a).end()
// // #define rall(a) (a).rbegin(),(a).rend()
// #define test ll tc; cin>>tc; while(tc--)

// // #define printm(a) {for(auto u:a) cout<<u.f sp u.s<<endl;}
// // #define printv(a) {for(auto u:a) cout<<u<<" "; cout<<endl;}
// // #define abid() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// // #define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);


// // ///**************************** C o n s t ****************************///
// const double eps = 1e-9;
// const int inf = 2000000000;

// ///************************ Template End Here ************************///

void init() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
}


void solve() {

	std::vector<int> v;
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '+') {
			continue;
		}
		if (i == s.length() - 1) {
			cout << s[i];
		}
		else {
			cout << s[i] << '+';
		}
	}
}


// long long maxpp(const vector<int>& nums) {
// 	int n = nums.size();
// 	int maxi1 = -1;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		if ((maxi1 == -1) || (nums[i] > nums[maxi1]))
// 			maxi1 = i;
// 	}
// 	int maxi2 = -1;
// 	for (int j = 0; j < n; ++j)
// 	{
// 		/* code */
// 		if ((j != maxi1) && ((maxi2 == -1) || (nums[j] > nums[maxi2])))
// 			maxi2 = j;
// 	}
// 	return ((lli)(nums[maxi1])) * nums[maxi2];
// }

lli fib(int n) {
	lli n1 = 1;
	lli n2 = 1;
	for (int i = 0; i < n - 1; ++i)
	{
		/* code */
		lli b = n2;
		n2 = (n1 % 10 * n1 % 10) + (n2 % 10 * n2 % 10);
		n1 = b;

	}
	return n1;
}

int main() {

	init();
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);


	int n;
	cin >> n;
	cout << fib(n) << "\n";

}
