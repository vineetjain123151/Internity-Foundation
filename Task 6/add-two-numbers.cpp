class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        ListNode* dummy=new ListNode();
         ListNode* tail=dummy;
        
        
        while(temp1 || temp2)
        {
            int sum=0;
            if(temp1)
            {
                sum=sum+temp1->val;
            }
            if(temp2)
            {
                sum=sum+temp2->val;
            }
            
            sum=sum+carry;
            carry=sum/10;
            sum=sum%10;
             ListNode* curr=new ListNode(sum);
            tail->next=curr;
            tail=curr;
            if(temp1)
            {
                temp1=temp1->next;

            }
            if(temp2)
            {
                temp2=temp2->next;

            }
            
            
        }
        /*while(temp1)
        {
            temp1->val=(temp1->val+carry)%10;
            carry=(temp1->val+carry)/10;
            tail->next=temp1;
            temp1=temp1->next;
        }
        
        while(temp2)
        {
            temp2->val=(temp2->val+carry)%10;
            carry=(temp2->val+carry)/10;
            tail->next=temp2;
            temp2=temp2->next;
        }*/
        if(carry>0)
        {
            ListNode* z=new ListNode(carry);
            tail->next=z;
            tail=z;
        }
        
        return dummy->next;
    }
};
