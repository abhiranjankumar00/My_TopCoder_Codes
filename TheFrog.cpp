#include <iostream>
#include <ctime>
#include <vector>
#include <list>
#include <queue>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <cassert>
#include <utility>
#include <sstream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <iterator>
#include <fstream>
using namespace std;

typedef long long 		int64;
typedef vector<int> 		vi;
typedef string 			ST;
typedef stringstream 		SS;
typedef vector< vector<int> > 	vvi;
typedef pair<int,int> 		ii;
typedef vector<string> 		vs;
/*
#if __cplusplus > 199711L	// for g++0x, value of __cplusplus must be greater thana 199711L.
	#define tr(i, c)	for(auto i = begin(c); i != end(c); i++)
#else
	#define tr(i, c)	for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#endif
*/
#define endl		("\n")
#define tr(i, c)	for(__typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define PI		M_PI
#define E 		M_E
#define	eps		1e-9

#define	Sf		scanf
#define	Pf		printf

#define forn(i, n)	for(int i = 0, lets_stop_here = (int)n; i <  lets_stop_here; i++)
#define forab(i, a, b)	for(int i = a, lets_stop_here = (int)b; i <= lets_stop_here; i++)
#define rep(i, a, b)	for(int i = a, lets_stop_here = (int)b; i >= lets_stop_here; i--)

#define	all(c)		(c).begin(), (c).end()
#define	CL(a, b)	memset(a, b, sizeof(a))
#define mp		make_pair
#define pb		push_back

#define	present(x, c)	((c).find(x) != (c).end())	//map & set//
#define	cpresent(x, c)	(find( (c).begin(), (c).end(), x) != (c).end())	//vector & list//

#define read(n)		scanf("%d", &n)
#define write(n)	printf("%d ", n)
#define writeln(n)	printf("%d\n", n)

#if (0 or defined ONLINE_JUDGE)
	#define DEBUG
#else 
	#define DEBUG(x)	cout << #x << " = " << x << "\n"
#endif

class TheFrog
{
public:
	double getMinimum(int D, vector <int> L, vector <int> R);
};

struct Frac {
	int num, den;
	Frac(int n, int d) {
		num = n;
		den = d;
		int g = __gcd(n, d);
		num /= g;
		den /= g;
	}
	bool operator < (const Frac & ob) const {
		return num*ob.den < ob.num*den;
	}
};

double TheFrog::getMinimum (int D, vector <int> L, vector <int> R) 
{
	vector < pair <Frac, Frac> > pt;

	forn(i, L.size()) 
		forab(K, 1, D)
			pt.pb(mp(Frac(L[i], K), Frac(R[i], K)) );

	sort(all(pt));

	vector <pair <Frac, Frac> > ans;
	tr(it, pt) {
		if(ans.empty()) {
			ans.pb(*it);
			continue;
		}
		if(it->first < ans.back().second)
			ans.back().second = max(ans.back().second, it->second);
		else
			ans.pb(*it);
	}

	return ans.front().second.num*1.0/ans.front().second.den;
}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, int p0, vector <int> p1, vector <int> p2, bool hasAnswer, double p3) {
	cout << "Test " << testNum << ": [" << p0 << "," << "{";
	for (int i = 0; int(p1.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p1[i];
	}
	cout << "}" << "," << "{";
	for (int i = 0; int(p2.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p2[i];
	}
	cout << "}";
	cout << "]" << endl;
	TheFrog *obj;
	double answer;
	obj = new TheFrog();
	clock_t startTime = clock();
	answer = obj->getMinimum(p0, p1, p2);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p3 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == answer && fabs(p3 - answer) <= 1e-9 * max(1.0, fabs(p3));
	}
	if (!res) {
		cout << "DOESN'T MATCH!!!!" << endl;
	} else if (double(endTime - startTime) / CLOCKS_PER_SEC >= 2) {
		cout << "FAIL the timeout" << endl;
		res = false;
	} else if (hasAnswer) {
		cout << "Match :-)" << endl;
	} else {
		cout << "OK, but is it right?" << endl;
	}
	cout << "" << endl;
	return res;
}
int main() {
	bool all_right;
	all_right = true;
	
	int p0;
	vector <int> p1;
	vector <int> p2;
	double p3;
	
	{
	// ----- test 0 -----
	p0 = 16;
	int t1[] = {2};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {7};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = 7.0;
	all_right = KawigiEdit_RunTest(0, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = 25;
	int t1[] = {11,3};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {21,7};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = 10.5;
	all_right = KawigiEdit_RunTest(1, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = 100;
	int t1[] = {0};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {100};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = 100.0;
	all_right = KawigiEdit_RunTest(2, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = 100;
	int t1[] = {0,50};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {50,100};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = 50.0;
	all_right = KawigiEdit_RunTest(3, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = 30000;
	int t1[] = {17,25281,5775,2825,14040};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {55,26000,5791,3150,14092};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = 787.8787878787879;
	all_right = KawigiEdit_RunTest(4, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	p0 = 1;
	int t1[] = {0};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {1};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	all_right = KawigiEdit_RunTest(5, p0, p1, p2, false, p3) && all_right;
	// ------------------
	}
	
	if (all_right) {
		cout << "You're a stud (at least on the example cases)!" << endl;
	} else {
		cout << "Some of the test cases had errors." << endl;
	}
	return 0;
}
// PROBLEM STATEMENT
// Frog Jim is fond of jumping.
// Moreover, all his jumps have the same length X.
// Currently, he is standing at the point 0 on the real axis.
// He needs to jump along the axis until he gets to point D or beyond it.
// 
// There are several pits between points 0 and D. 
// For each valid i, there is a pit strictly between L[i] and R[i].
// This means that Jim cannot step onto any point that is strictly between points L[i] and R[i].
// (He is allowed to step onto the points L[i] and R[i]: as all pits are disjoint, the endpoints of each pit are always safe.)
// 
// Find the minimum length of jump X such that if Jim performs only jumps of length X, he can avoid every pit and get to point D or any point beyond it. Note that this length can be non-integer.
// 
// DEFINITION
// Class:TheFrog
// Method:getMinimum
// Parameters:int, vector <int>, vector <int>
// Returns:double
// Method signature:double getMinimum(int D, vector <int> L, vector <int> R)
// 
// 
// NOTES
// -The returned value must have an absolute or relative error less than 1e-9.
// 
// 
// CONSTRAINTS
// -D will be between 1 and 30,000, inclusive.
// -L will contain between 1 and 50 elements, inclusive.
// -Each element of L will be between 0 and D-1, inclusive.
// -R will contain the same number of elements as L.
// -The i-th element of R will be between L[i]+1 and D, inclusive.
// -The intervals given by (L[i], R[i]) will not intersect.
// 
// 
// EXAMPLES
// 
// 0)
// 16
// {2}
// {7}
// 
// Returns: 7.0
// 
// Moving by jumps of length 7, Jim goes from point 0 to point 7, then to point 14 and then to point 21, which is beyond 16. If Jim chose a shorter jump, he would end up in the pit.
// 
// 1)
// 25
// {11, 3}
// {21, 7}
// 
// Returns: 10.5
// 
// There are two pits. One of them is between points 11 and 21 and the other between points 3 and 7. By fixing jump length at 10.5, Jim successfully avoids them.
// 
// 2)
// 100
// {0}
// {100}
// 
// Returns: 100.0
// 
// Jim has no other choice but to jump right to point 100.
// 
// 3)
// 100
// {0, 50}
// {50, 100}
// 
// Returns: 50.0
// 
// In this case, point 50 is a suitable place to land, so Jim can choose X = 50.
// 
// 4)
// 30000
// {17, 25281, 5775, 2825, 14040}
// {55, 26000, 5791, 3150, 14092}
// 
// Returns: 787.8787878787879
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
