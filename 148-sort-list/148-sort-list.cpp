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
    ListNode* sortList(ListNode* head) {
        
        vector<int>x;
        
        while(head !=NULL)
        {
            x.push_back(head->val);
            head =head->next;
        }
        
       sort(x.begin(), x.end());
        
        ListNode *fix;
        fix=new ListNode;
        ListNode *ac=fix;
        
        for(int i=0;i<x.size();i++)
        {
            ListNode *temp;
            temp=new ListNode(x[i]);
            ac->next=temp;
            ac=ac->next;
            
        }
        
       return fix->next;
    }
};