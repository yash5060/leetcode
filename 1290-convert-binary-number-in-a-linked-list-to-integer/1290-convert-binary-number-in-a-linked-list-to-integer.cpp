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
    int getDecimalValue(ListNode* head) {
        
        
        vector<int>x;
        
        while(head !=NULL)
        {
            x.push_back(head->val);
              head=head->next;
        }
       
    
   
   
    long long ans = 0;
    long long base = 1;
    
    
    for(int i=x.size()-1;i>=0;i--)
    {
        
        ans += x[i] * base;
        base = base * 2;
    }
 
        
    return ans;
    }
    
};