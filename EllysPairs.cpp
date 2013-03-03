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

class EllysPairs
{
public:
	int getDifference(vector <int> knowledge);
};

int EllysPairs::getDifference (vector <int> knowledge) 
{
	int best = 0, worst = 1e9;
	sort(all(knowledge));

	for(int i = 0, e = knowledge.size()-1; i <= e; i++, e--) {
		best = max(best, knowledge[i] + knowledge[e]);
		worst = min(worst, knowledge[i] + knowledge[e]);
	}
	return best - worst;
}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <int> p0, bool hasAnswer, int p1) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p0[i];
	}
	cout << "}";
	cout << "]" << endl;
	EllysPairs *obj;
	int answer;
	obj = new EllysPairs();
	clock_t startTime = clock();
	answer = obj->getDifference(p0);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p1 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
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
	int p1;
	
	{
	// ----- test 0 -----
	int t0[] = {2,6,4,3};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 1;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {1,1,1,1,1,1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 0;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {4,2,4,2,1,3,3,7};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 2;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {5,1,8,8,13,7,6,2,1,9,5,11,3,4};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 3;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
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
// In one of her subjects at the university, Elly and her classmates have to prepare projects. The professor wants the students to work in pairs (groups of two). Each student must belong to exactly one pair and each pair should produce one project. You may assume that the number of people in the class is even.
// 
// You are given a vector <int> knowledge. Each element of knowledge is the amount of knowledge of one of the students. The quality of a project is the total knowledge of the students that work on it. That is, if students i and j form one of the pairs, the quality of their project will be knowledge[i] + knowledge[j].
// 
// This creates some problems. If there is a really strong group, their project will be of really high quality. The professor will then compare the other projects to it and will be disappointed by them, giving low grades to the other pairs. Thus, the students want to form the groups in such way that the difference between the quality of the best project and the quality of the worst project is as small as possible.
// 
// Return that minimal difference in the quality between the best and the worst project if the students split into pairs in the best possible way.
// 
// DEFINITION
// Class:EllysPairs
// Method:getDifference
// Parameters:vector <int>
// Returns:int
// Method signature:int getDifference(vector <int> knowledge)
// 
// 
// CONSTRAINTS
// -knowledge will contain between 2 and 50 elements, inclusive.
// -The number of elements of knowledge will be even.
// -Each element of knowledge will be between 1 and 1000, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {2, 6, 4, 3}
// 
// Returns: 1
// 
// Here obviously grouping the two best people in the class (with knowledge 6 and 4) doesn't make sense.
// If 6 pairs with 3 and 4 pairs with 2 they will get qualities of 9 and 6, respectively, leading to difference 3.
// However, there is an even better grouping: 2 with 6 and 4 with 3 for qualities of 8 and 7, respectively. The difference then would be only 1.
// 
// 
// 1)
// {1, 1, 1, 1, 1, 1}
// 
// Returns: 0
// 
// Some or even all students can have the same knowledge.
// 
// 2)
// {4, 2, 4, 2, 1, 3, 3, 7}
// 
// Returns: 2
// 
// 
// 
// 3)
// {5, 1, 8, 8, 13, 7, 6, 2, 1, 9, 5, 11, 3, 4}
// 
// Returns: 3
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
