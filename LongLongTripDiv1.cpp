#include <bits/stdc++.h>
using namespace std;

class LongLongTripDiv1
{
public:
	string isAble(int N, vector <int> A, vector <int> B, vector <int> D, long long T);
};

string LongLongTripDiv1::isAble (int N, vector <int> A, vector <int> B, vector <int> D, long long T)
{
	string ret;
	return ret;
}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit-pf 2.3.0
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cmath>
using namespace std;
bool KawigiEdit_RunTest(int testNum, int p0, vector <int> p1, vector <int> p2, vector <int> p3, long long p4, bool hasAnswer, string p5) {
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
	cout << "}" << "," << "{";
	for (int i = 0; int(p3.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p3[i];
	}
	cout << "}" << "," << p4;
	cout << "]" << endl;
	LongLongTripDiv1 *obj;
	string answer;
	obj = new LongLongTripDiv1();
	clock_t startTime = clock();
	answer = obj->isAble(p0, p1, p2, p3, p4);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << "\"" << p5 << "\"" << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << "\"" << answer << "\"" << endl;
	if (hasAnswer) {
		res = answer == p5;
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
	bool disabled;
	bool tests_disabled;
	all_right = true;
	tests_disabled = false;
	
	int p0;
	vector <int> p1;
	vector <int> p2;
	vector <int> p3;
	long long p4;
	string p5;
	
	// ----- test 0 -----
	disabled = false;
	p0 = 3;
	p1 = {0,0,1};
	p2 = {2,1,2};
	p3 = {7,6,5};
	p4 = 11ll;
	p5 = "Possible";
	all_right = (disabled || KawigiEdit_RunTest(0, p0, p1, p2, p3, p4, true, p5) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 1 -----
	disabled = false;
	p0 = 3;
	p1 = {0,0,1};
	p2 = {2,1,2};
	p3 = {7,6,5};
	p4 = 25ll;
	p5 = "Possible";
	all_right = (disabled || KawigiEdit_RunTest(1, p0, p1, p2, p3, p4, true, p5) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 2 -----
	disabled = false;
	p0 = 2;
	p1 = {0};
	p2 = {1};
	p3 = {1};
	p4 = 9ll;
	p5 = "Possible";
	all_right = (disabled || KawigiEdit_RunTest(2, p0, p1, p2, p3, p4, true, p5) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 3 -----
	disabled = false;
	p0 = 2;
	p1 = {1};
	p2 = {0};
	p3 = {1};
	p4 = 1000000000000000000ll;
	p5 = "Impossible";
	all_right = (disabled || KawigiEdit_RunTest(3, p0, p1, p2, p3, p4, true, p5) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 4 -----
	disabled = false;
	p0 = 4;
	p1 = {0,0,1};
	p2 = {2,1,2};
	p3 = {10,10,10};
	p4 = 1000ll;
	p5 = "Impossible";
	all_right = (disabled || KawigiEdit_RunTest(4, p0, p1, p2, p3, p4, true, p5) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 5 -----
	disabled = false;
	p0 = 9;
	p1 = {4,8,5,8,3,6,2,6,7,6,6};
	p2 = {2,7,1,5,1,3,1,1,5,4,2};
	p3 = {6580,8822,1968,673,1394,9337,5486,1746,5229,4092,195};
	p4 = 937186357646035002ll;
	p5 = "Impossible";
	all_right = (disabled || KawigiEdit_RunTest(5, p0, p1, p2, p3, p4, true, p5) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	if (all_right) {
		if (tests_disabled) {
			cout << "You're a stud (but some test cases were disabled)!" << endl;
		} else {
			cout << "You're a stud (at least on given cases)!" << endl;
		}
	} else {
		cout << "Some of the test cases had errors." << endl;
	}
	return 0;
}
// PROBLEM STATEMENT
// There is a country with N cities. The cities are numbered 0 through N-1. There are some bidirectional roads in the country. Each road connects a pair of cities. More precisely, for each i, road i connects the cities A[i] and B[i].
// 
// Limit is a deer that likes to travel along the roads. Traveling along road i (in either direction) takes him exactly D[i] minutes. Limit does not like cities, so he never waits in a city.
// 
// Limit is currently in the city 0, starting his travels. In exactly T minutes, he wants to be in the city N-1.
// 
// You are given the int N; the vector <int>s A, B, and D; and the long long T.
// Return "Possible" (quotes for clarity) if Deer Limit can reach city N-1 in exactly T minutes.
// Otherwise, return "Impossible".
// 
// DEFINITION
// Class:LongLongTripDiv1
// Method:isAble
// Parameters:int, vector <int>, vector <int>, vector <int>, long long
// Returns:string
// Method signature:string isAble(int N, vector <int> A, vector <int> B, vector <int> D, long long T)
// 
// 
// CONSTRAINTS
// -N will be between 2 and 50, inclusive.
// -A will contain between 1 and 50 elements, inclusive.
// -A, B and D will each contain the same number of elements.
// -Each element in A and B will be between 0 and N-1, inclusive.
// -Each element in D will be between 1 and 10,000, inclusive.
// -For each valid i, A[i] and B[i] will be different.
// -No two roads will connect the same pair of cities.
// -T will be between 1 and 10^18, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// 3
// {0,0,1}
// {2,1,2}
// {7,6,5}
// 11
// 
// Returns: "Possible"
// 
// city 0 -> city 1 -> city 2 is a valid way.
// 
// 1)
// 3
// {0,0,1}
// {2,1,2}
// {7,6,5}
// 25
// 
// Returns: "Possible"
// 
// city 0 -> city 2 -> city 1 -> city 0 -> city 2 is a valid way.
// 
// 2)
// 2
// {0}
// {1}
// {1}
// 9
// 
// Returns: "Possible"
// 
// Here, Limit just travels back and forth between cities 0 and 1 along the only road in the country.
// 
// 3)
// 2
// {1}
// {0}
// {1}
// 1000000000000000000
// 
// Returns: "Impossible"
// 
// 
// 
// 4)
// 4
// {0,0,1}
// {2,1,2}
// {10,10,10}
// 1000
// 
// Returns: "Impossible"
// 
// In this test case, there is absolutely no way how to reach city N-1 from city 0.
// 
// 5)
// 9
// {4,8,5,8,3,6,2,6,7,6,6}
// {2,7,1,5,1,3,1,1,5,4,2}
// {6580,8822,1968,673,1394,9337,5486,1746,5229,4092,195}
// 937186357646035002
// 
// Returns: "Impossible"
// 
// 
// 
// END KAWIGIEDIT TESTING
