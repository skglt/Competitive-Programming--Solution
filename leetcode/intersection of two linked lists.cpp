// Question link : https://leetcode.com/problems/intersection-of-two-linked-lists/

// Question : 160. Intersection of Two Linked Lists

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL)
        {
            return NULL;
        }
        int count1 = 0,count2 = 0;
        ListNode* temp = headA, *temp2;
        while(temp != NULL)
        {
            count1++;
            temp = temp->next;
        }
        temp = headB;
        while(temp != NULL)
        {
            count2++;
            temp = temp->next;
        }
        int difference = abs(count1 - count2);
        if(count1 > count2)
        {
            temp = headA;
            while(difference--)
            {
                temp = temp->next;
            }
            temp2 = headB;
        }
        else
        {
            difference = abs(count1 - count2);
            temp2 = headB;
            while(difference--)
            {
                temp2 = temp2->next;
            }
            temp = headA;
        }
        difference = abs(count1 - count2);
        
        while(temp != temp2)
        {
            temp = temp->next;
            temp2 = temp2->next;
        }
        return temp;
    }
};
