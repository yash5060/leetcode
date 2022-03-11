class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
       
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        ListNode * temp = head;
        int length =0;
        while(temp!= NULL){
            temp = temp->next;
            length++;
        }
        if ( k%length == 0){
            return head;
        }
        int n ;
        n = k%length;
        
        
       
        for(int i = 1 ; i <= n ; i++ ){
            temp = head;
            while(temp->next->next!=NULL){
                temp = temp->next;
            }
            temp->next->next = head;
            head = temp->next;
            temp->next = NULL;
        }
        
        return head;
    }
};