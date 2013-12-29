#include <bits/stdc++.h>
using namespace std;

class BinPacking
{
public:
	int minBins(vector <int> item);
};

class Node {
public:
  int i, j, k, wt;
  Node(int ii, int jj, int kk, int ww) {
    i = ii; j = jj; k = kk; wt = ww;
  }
  bool operator < (const Node &nd) const {
    return this->wt < nd.wt;
  }
};

int BinPacking::minBins (vector <int> item) 
{
//  sort(item.begin(), item.end());
  int N = item.size();  
  vector <bool> in(N, false);
	int ret = 0;
  vector <Node> nds;

  for(int i = 0; i < (int)N; ++i) {
    int wt = item[i];
    nds.push_back(Node(i, -1, -1, wt));
    for(int j = i+1; j < (int)N; ++j) {
      wt  = item[i] + item[j];
      nds.push_back(Node(i, j, -1, wt));
      for(int k = (int)j+1; k <= (int)N-1; ++k) {
        wt = item[i] + item[j] + item[k];
        nds.push_back(Node(i, j, k, wt));
      }
    }
  }
  sort(nds.begin(), nds.end());
  while(nds.empty() == false && nds.back().wt > 300) {
    nds.pop_back();
  }
  reverse(nds.begin(), nds.end());

  for(int i = 0; i < (int)nds.size(); ++i) {
    int u = nds[i].i, v = nds[i].j, w = nds[i].k;
    if( (u == -1 || (u != -1 && in[u] == false)) && ( v == -1 || (v != -1 && in[v] == false)) && ( w==-1 || (w != -1 && in[w] == false)) ) {
      printf("%d, %d, %d: %d\n", u, v, w, nds[i].wt);
      if(u != -1)
        in[u] = true;
      if(v != -1)
        in[v] = true;
      if(w != -1) 
        in[w] = true;
      ret++;
    }
  }

/*
  int cnt = 0;
  while(cnt < N) {
    int curWeight = 0;
    ret++;
    for(int i = (int)N-1; i >= (int)0; --i) {
      if(in[i] == false && curWeight + item[i] <= 300) {
        printf("%d ", item[i]);
        in[i] = true;
        cnt++;
        curWeight += item[i];
      }
    }
    printf(": %d\n", curWeight);
  }
*/

/*
  reverse(item.begin(), item.end());
  for(int i = 0; i < (int)N; ++i) if(in[i] == false){
    in[i] = true;
    int curWeight = item[i];
    int bestWeight = item[i];
    int jj = -1, kk = -1;
    ret++;
    for(int j = (int)i+1; j <= (int)N-1; ++j) if(in[j] == false) {

      int wt = curWeight + item[j] ;
      if( wt <= 300 && wt > bestWeight) {
        bestWeight = wt;
        jj = j; 
      }

      for(int k = (int)j+1; k <= (int)N-1; ++k) if(in[k] == false) {
        int wt = curWeight + item[j] + item[k];
        if( wt <= 300 && wt > bestWeight) {
          bestWeight = wt;
          jj = j; kk = k;
        }
      }
    }

    printf("%d ", item[i]);
    if(jj != -1) {
      in[jj] = true;
      printf("%d ", item[jj]);
    }
    if(kk != -1) {
      in[kk] = true;
      printf("%d ", item[kk]);
    }
    printf(": %d\n", bestWeight);
  }
*/
	
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
	BinPacking *obj;
	int answer;
	obj = new BinPacking();
	clock_t startTime = clock();
	answer = obj->minBins(p0);
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
	bool disabled;
	bool tests_disabled;
	all_right = true;
	tests_disabled = false;
	
	vector <int> p0;
	int p1;
	
	// ----- test 0 -----
	disabled = false;
	p0 = {150,150,150,150,150};
	p1 = 3;
	all_right = (disabled || KawigiEdit_RunTest(0, p0, true, p1) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 1 -----
	disabled = false;
	p0 = {130,140,150,160};
	p1 = 2;
	all_right = (disabled || KawigiEdit_RunTest(1, p0, true, p1) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 2 -----
	disabled = false;
	p0 = {100,100,100,100,100,100,100,100,100};
	p1 = 3;
	all_right = (disabled || KawigiEdit_RunTest(2, p0, true, p1) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 3 -----
	disabled = false;
	p0 = {100,200,100,100,100,100,200,100,200};
	p1 = 4;
	all_right = (disabled || KawigiEdit_RunTest(3, p0, true, p1) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 4 -----
	disabled = false;
	p0 = {157,142,167,133,135,157,143,160,141,123,162,159,165,137,138,152};
	p1 = 8;
	all_right = (disabled || KawigiEdit_RunTest(4, p0, true, p1) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 5 -----
	disabled = false;
	p0 = {150,150,150,150,150,100,100,100,100,100,100 };
	p1 = 5;
	all_right = (disabled || KawigiEdit_RunTest(5, p0, true, p1) ) && all_right;
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
// Fox Ciel has some items. The weight of the i-th (0-based) item is item[i]. She wants to put all items into bins.
// 
// 
// The capacity of each bin is 300. She can put an arbitrary number of items into a single bin, but the total weight of items in a bin must be less than or equal to 300.
// 
// 
// You are given the vector <int> item. It is known that the weight of each item is between 100 and 300, inclusive. Return the minimal number of bins required to store all items.
// 
// 
// DEFINITION
// Class:BinPacking
// Method:minBins
// Parameters:vector <int>
// Returns:int
// Method signature:int minBins(vector <int> item)
// 
// 
// CONSTRAINTS
// -item will contain between 1 and 50 elements, inclusive.
// -Each element of item will be between 100 and 300, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {150, 150, 150, 150, 150}
// 
// Returns: 3
// 
// You have five items and each bin can hold at most two of them. You need at least three bins.
// 
// 1)
// {130, 140, 150, 160}
// 
// Returns: 2
// 
// For example, you can distribute the items in the following way:
// 
// Bin 1: 130, 150
// Bin 2: 140, 160
// 
// 
// 
// 2)
// {100, 100, 100, 100, 100, 100, 100, 100, 100}
// 
// Returns: 3
// 
// 
// 
// 3)
// {100, 200, 100, 100, 100, 100, 200, 100, 200}
// 
// Returns: 4
// 
// 
// 
// 4)
// {157, 142, 167, 133, 135, 157, 143, 160, 141, 123, 162, 159, 165, 137, 138, 152}
// 
// Returns: 8
// 
// 
// 
// END KAWIGIEDIT TESTING
