﻿//Write an algorithm to determine if a number is "happy".
//
//A happy number is a number defined by the following process : Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.
//
//Example : 19 is a happy number
//
//		  12 + 92 = 82
//		  82 + 22 = 68
//		  62 + 82 = 100
//		  12 + 02 + 02 = 1
//	  Credits :
//			  Special thanks to @mithmatt and @ts for adding this problem and creating all test cases.
//
//			  Subscribe to see which companies asked this question


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <numeric>
#include <stack>
#include <map>
#include <list>

using namespace std;

class Solution {
public:
	bool isHappy(int n) {
		while (n > 6){
			int next = 0;
			while (n){ next += (n % 10)*(n % 10); n /= 10; }
			n = next;
		}
		return n == 1;
	}
};



void main()
{

}