#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
/*
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
           for(int i = 0 ; i < k-1; i++){
               after = head->next;
               head->next = before;
               before = head;
               head = after;
           }
           head->next = before;
           return head;
       }
       ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode * forward = head;
        bool flag = true;
        ListNode * temp3 = nullptr;
        while(forward){
            ListNode * temp = forward;
            ListNode *temp2 = nullptr,*first = nullptr;
            int count = 0;
            for(int i = 0 ; i < k ; i++){
                
                if(temp){
                    temp = temp->next;
                    count++;
                }
                else break;

            }
            if(count == k){
                first = forward;
                temp2 = reverse(forward,k);
                first->next = temp;
                forward = temp;
              
            }else{
                temp2 = forward;
                forward = nullptr;
            }
            if(flag){
                head = temp2;
                temp3 = first;
                flag = false;
           }else{
                temp3->next = temp2;
                temp3 = first;
            }
        }
        return head;
    }
};
ListNode * create(vector<int> v){
    ListNode *head = nullptr;
    for(auto n : v){
        ListNode *a = new ListNode(n,head);
        head = a;
    }
    return head;
}
int main(){
    vector<int> t{1,2,3,4,5,6};
    ListNode *head = create(t);
    int k = 5;
    Solution sol;
    ListNode * test = sol.reverseKGroup(head , k);
    while(test){
        cout << test->val;
        test = test->next;
    }
    return 0;
}
*/
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


class Solution{
public:
    vector<vector<int>> threeSum(vector<int> &nums){
        vector<vector<int>> ans;
        for(int i = 0 ; i < nums.size()-2 ; i++){
            for(int j = i+1 ; j < nums.size()-1 ; j++){
                for(int k = j+1 ; k < nums.size() ; k++){
                    if(nums[i]+nums[j]+nums[k] == 0 && (i!=j && i!=k && j!=k)){
                        vector<int> a{nums[i],nums[j],nums[k]};
                        ans.push_back(a);
                    }
                }
 
            }
 
       }
       return ans;
    }
};

int main(){
   Solution sol;
   vector<int> nums{-1,0,1,2,-1,-4};
   vector<vector<int>> ans = sol.threeSum(nums);
   for(auto i : ans){
       for(auto j : i)cout << j;
       cout << endl;
   }
       return 0;
}











