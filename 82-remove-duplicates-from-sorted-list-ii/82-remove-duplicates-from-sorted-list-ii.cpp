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
    ListNode* deleteDuplicates(ListNode* head) {
        
        vector<int>x;
        vector<int>ans;
        
        while(head !=NULL)
        {
            x.push_back(head->val);
            head=head->next;
        }
        
          map<int,int>mp;

    for(auto it:x)
    {
        mp[it]++;
    }
    vector<int> fq;
    
    
    for(auto x:mp)
    {
        
        if(x.second==1)
        {
            fq.push_back(x.first);
        }   
    }
        ListNode *fix=new ListNode;
        ListNode *move =fix;
       for(int i=0;i<fq.size();i++)
       {
           ListNode *temp=new ListNode(fq[i]);
           move->next =temp;
           move=move->next;
       }
        move->next=NULL;
        return fix->next;
    }
};