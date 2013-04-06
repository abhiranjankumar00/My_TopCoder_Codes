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

class OrderedNim
{
public:
	string winner(vector <int> layout);
};

string OrderedNim::winner (vector <int> layout) 
{
	string alice = "Alice", bob = "Bob";
	if(count(all(layout), 1) == layout.size())
		return layout.size() % 2 == 1 ? alice : bob;

	int len = 0;
	forn(i, layout.size())	{
		if(layout[i] == 1)
			len++;
		else
			break;
	}
	return len % 2 == 1 ? bob : alice;
	string ret;
	
	return ret;
}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <int> p0, bool hasAnswer, string p1) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p0[i];
	}
	cout << "}";
	cout << "]" << endl;
	OrderedNim *obj;
	string answer;
	obj = new OrderedNim();
	clock_t startTime = clock();
	answer = obj->winner(p0);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << "\"" << p1 << "\"" << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << "\"" << answer << "\"" << endl;
	if (hasAnswer) {
		res = answer == p1;
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
	
	vector <int> p0;
	string p1;
	
	{
	// ----- test 0 -----
	int t0[] = {5};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "Alice";
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {1,2};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "Bob";
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {2,1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "Alice";
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {10,9,8,7,6,5,4,3,2,1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "Alice";
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	int t0[] = {1,1,1,1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "Bob";
	all_right = KawigiEdit_RunTest(4, p0, true, p1) && all_right;
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
// Nim is a game in which two players take turns removing stones from heaps.  On each turn, a player must choose a single heap and remove one or more stones from that heap.  The player who takes the last stone wins.
// 
// Alice and Bob are bored with playing Nim over and over again, so they've decided to create a new variation called Ordered Nim.  Ordered Nim differs from regular Nim in the following way.  The heaps are numbered 0 through n-1 (where n is the number of heaps), and a player can only remove stones from a heap if all the lower-numbered heaps are empty.
// 
// You are given a vector <int> layout, where the i-th element (0-indexed) is the number of stones in heap i at the beginning of the game.  Alice will take the first turn.  Determine who will win the game, assuming both players play optimally.  Return "Alice" if Alice will win, or "Bob" if Bob will win (all quotes for clarity).
// 
// DEFINITION
// Class:OrderedNim
// Method:winner
// Parameters:vector <int>
// Returns:string
// Method signature:string winner(vector <int> layout)
// 
// 
// CONSTRAINTS
// -layout will contain between 1 and 50 elements, inclusive.
// -Each element of layout will be between 1 and 1000000000, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {5}
// 
// Returns: "Alice"
// 
// Alice takes all 5 stones and wins.
// 
// 1)
// {1,2}
// 
// Returns: "Bob"
// 
// According to the rules of the game, Alice is not allowed to take stones from heap 1 because heap 0 is not empty.  Her only option is to take the one stone from heap 0.  Heap 0 will then be empty, so Bob can take both stones from heap 1 to win the game.
// 
// 2)
// {2,1}
// 
// Returns: "Alice"
// 
// 
// 
// 3)
// {10,9,8,7,6,5,4,3,2,1}
// 
// Returns: "Alice"
// 
// 
// 
// 4)
// {1,1,1,1}
// 
// Returns: "Bob"
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
