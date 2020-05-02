/*Given an array of non-negative integers, you are initially positioned at the first index of the array.

Each element in the array represents your maximum jump length at that position.

Determine if you are able to reach the last index. */

class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n=nums.size();
        if(n==1)
            return true;
        int prev=nums[0];
        for(int i=0;i<n-1;i++)
        {if(prev==0)
        { return false;break;}
         prev=max(prev-1,nums[i]);
        }
        if(prev>=1)
            return true;
        else
                       return false;
 
    }
};