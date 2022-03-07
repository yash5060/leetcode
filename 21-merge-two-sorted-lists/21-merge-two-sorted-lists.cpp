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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        vector<int>x;
        
        while(list1!=NULL)
        {
            x.push_back(list1->val);
            list1=list1->next;
        }
         while(list2!=NULL)
        {
            x.push_back(list2->val);
            list2=list2->next;
        }
        
        sort(x.begin(),x.end());
        
        ListNode *fix=new ListNode;
        ListNode *move=fix;
        
        for(int i=0;i<x.size();i++)
        {
           ListNode*tmp=new ListNode;
            tmp->val=x[i];
            move->next=tmp;
            move=move->next;
        }
        move->next=NULL;
        return fix->next;
    }
};