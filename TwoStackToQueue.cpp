#include <iostream>
using namespace std;
#include <stack>
class CQueue
{
	CQueue()
	{
		//初始化
		while(!stk1.empty()) stk1.pop();
		while(!stk2.empty()) stk2.pop();
	}
	~CQueue(){};
public:
	void appendTail(int value)
	{
		stk1.push(value);
	}

	int DeleteHead()
	{
		if(stk2.empty())
		{
			if(stk1.empty()) return -1;
			while(!stk1.empty())
			{
				int val = stk1.top();
				stk2.push(val);
				stk1.pop();
			}
		}
		int res = stk2.top();
		stk2.pop();
		return res;

	}
protected:
	stack<int>stk1;
	stack<int>stk2;
};
