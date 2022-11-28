#include<bits/stdc++.h>
using namespace std;

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
    ListNode* middleNode(ListNode* head) {
        int cnt=1;
        ListNode* temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
            cnt++;
        }
        temp=head;
        for(int i=1;i<cnt/2+1;i++){
            temp = temp->next;
        }
        return temp;
    }
};