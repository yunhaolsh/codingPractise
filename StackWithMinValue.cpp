#include <iostream>
using namespace std;
#include <stack>
class MinStack
{
public:
	MinStack()
	{
		while(!stk.empty())
		{
			stk.pop();
		}
		while(!minStk.empty())
		{
			minStk.pop();
		}
	}

	~MinStack(){}

	void push(int x)
	{
		stk.push(x);
		if(x < minVal)
		{
			minVal = x;
		}
		minStk.push(minVal);
	}

	void pop()
	{
		if(stk.empty()) return;
		stk.pop();
		minStk.pop();
	}

	int top()
	{
		return stk.top();
	}

	int min()
	{
		return minStk.top();
	}

private:
	stack<int>stk, minStk;
	int minVal = INT_MAX;
};  //LEETCODE INT_MAX范围不够



class MinStack
{
public:
	MinStack()
	{
		while(!stk.empty())
		{
			stk.pop();
		}
		while(!minStk.empty())
		{
			minStk.pop();
		}
	}

	~MinStack(){}

	int min(int a, int b)
	{
		return a < b ? a : b;
	}

	void push(int x)
	{
		stk.push(x);
		if(minStk.empty())
		{
			minStk.push(x);
		}
		else
		{
			minStk.push(min(minStk.top(), x));
		}
	}

	void pop()
	{
		if(stk.empty()) return;
		stk.pop();
		minStk.pop();
	}

	int top()
	{
		return stk.top();
	}

	int min()
	{
		return minStk.top();
	}

private:
	stack<int>stk, minStk;
	int minVal = INT_MAX;
}; 