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
    bool isPalindrome(ListNode* head) {
        
        string s;
        
        bool ans;
        ListNode *ptr;
        ptr=new ListNode;
        ptr=head;
        while(head!=NULL)
        {
            s+=to_string(head->val);
            head=head->next;
        }
        string x=s;
        reverse(s.begin(), s.end());;
        
        if(s==x)
        {
            return true;
        }
        else{
            return false;
        }
    }
};