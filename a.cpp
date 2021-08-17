#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
struct ListNode{
    int val;
    ListNode * next;
    ListNode():val(0),next(nullptr){};
    ListNode(int x):val(x),next(nullptr){};
    ListNode(int x ,ListNode*next):val(x),next(next){};
    
};

class Solution{
public:

       ListNode* reverse(ListNode* head,int k){
           ListNode * first = head;
           ListNode *before = nullptr;
           ListNode *after = nullptr;
           for(int i = 0 ; i < k-1 ; i++){
               after = head->next;
               head->next = before;
               before = head;
               head = after;
           }
           return head;
       }/*
       ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode * forward = head;
        bool flag = true;
        while(forward){
            ListNode * temp = forward;
            int count = 0;
            for(int i = 0 ; i < k ; i++){
                
                if(temp){
                    temp = temp->next;
                    count++;
                }
                else break;

            }
            if(count == k){
                reverse(forward,k);
            }
            if(flag){
                head = forward;
                flag = false;
            }
        }
        return nullptr;
    }*/
};
int main(){
    ListNode a{1};
    ListNode b{2,&a};
    ListNode head{3,&b};
    cout << (&head)->next->val;
    int k = 3;
    Solution sol;
    ListNode * test = sol.reverse(&head , k);
    while(test){
        cout << test->val;
        test = test->next;
    }
    return 0;
}
/*
class Solution {
public:
    int strStr(char * haystack, char * needle){
        int idx1 = 0;
        int flag = 0;
        int hlen = strlen(haystack);
        int nlen = strlen(needle);
        if((haystack[0] == 0) && (needle[0] != 0))return -1;
        if((haystack[0] == 0) || (needle[0] == 0))return 0;
        if(hlen < nlen)return -1;
    
        while(haystack[idx1]){
            int idx2 = 0;
            while(needle[idx2]){
                
                if(haystack[idx1] == needle[idx2]){
                    idx1++;
                    idx2++;
                }else{
                    idx1++;
                    break;
                }
            
            if(idx2 == nlen)return idx1 - idx2;
            }

        }
        return -1;
    }   
};
int main(){

    char haystack[10] = "hello";
    char needle[10] = "ll";
    Solution sol;    
    cout << sol.strStr(haystack,needle);
    return 0;
}*/
