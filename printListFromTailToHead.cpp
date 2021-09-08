#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> reversePrint(ListNode* head) {

        if(!head) return "";

        ListNode* p_iter = head;
        while(p_iter)
        {
            m_stk.push(p_iter->value);
            p_iter = p_iter -> next;
        }
        while(!m_stk.empty())
        {
            int tmp = m_stk.top();
            m_stk.pop();
            m_vec.push_back(tmp);
        }
        return m_vec;
    }
private:
    vector<int>m_vec;
    stack<int>m_stk;
};

//递归思路
class Solution {
public:
    vector<int> reversePrint(ListNode* head) {

    //递归出口
    if(!head) return {};

    vector<int>vec = reversePrint(head->next);
    vec.push_back(head->val);

    return vec;
    }
};