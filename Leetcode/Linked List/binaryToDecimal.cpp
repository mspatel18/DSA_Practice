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
        int ans = 0;
        while (head) {
            ans = 2 * ans + head->val;
            head = head->next;
        }
        return ans;
        // string s;
        // ListNode* temp = head;
        // int cnt=0;
        // while(temp!=NULL){
        //     s[cnt++]=temp->val;
        //     // s[cnt]='\0';
        //     cout<<s[0];
        //     temp=temp->next;
        // }
        // // s[cnt+1]='\0';
        // int number = 0;
        // // number = stoi(s,0,2);
        // cout<<s<<endl;
        // return number;
    }
};