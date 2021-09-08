class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr) return nullptr;
        ListNode* p_preNode = nullptr;
        ListNode* p_curNode = head;
        while (p_curNode)
        {
            ListNode* p_nextNode = p_curNode -> next;
            p_curNode -> next = p_preNode;
            p_preNode = p_curNode;
            p_curNode = p_nextNode;
        }
        return p_preNode;
    }
};

//递归
class Solution {
    ListNode* reverseList()
};