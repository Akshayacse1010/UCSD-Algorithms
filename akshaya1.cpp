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


lli gcds(lli a, lli b) {
	lli as;
	if (b == 0)
		return a;
	as = a % b;
	return gcds(b, as);
}

long long lcm(int a, int b)
{
	return (a / gcds(a, b)) * b;
}



int main() {

	// init();
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);



	lli a, b;
	cin >> a >> b;
	cout << lcm(a, b) << "\n";

}
