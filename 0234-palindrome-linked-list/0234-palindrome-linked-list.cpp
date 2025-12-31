/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse_link_list(ListNode* &node)
    {
        if(node == NULL || node->next == NULL)
        {
            return node;
        }
        ListNode* prev = NULL;
        ListNode* curr = node;
        ListNode* forv = NULL;
        while(curr)
        {
            forv = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forv;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;
           ListNode* fast = head;
           ListNode* slow = head;

           while(fast->next != NULL && fast->next->next != NULL)
           {
            slow = slow->next;
            fast = fast->next->next;
           }

           ListNode* newnode = reverse_link_list(slow->next);

           slow = head;
           fast = newnode;

           while(fast != NULL)
           {
            if(slow ->val != fast->val)
            {
                reverse_link_list(newnode);
                return false;
            }
            fast = fast->next;
            slow = slow->next;
           }
           
           reverse_link_list(newnode);
           return true;
    }
};