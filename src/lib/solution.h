#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
	void InputOutput (int x, vector<int> input0);
	Solution(){current_state=-1;};
private:
	int current_state;
};

#endif
