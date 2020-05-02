/* Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).

You are given a target value to search. If found in the array return its index, otherwise return -1.

You may assume no duplicate exists in the array.

Your algorithm's runtime complexity must be in the order of O(log n).

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4*/
class Solution {
public: 
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0) return -1;
        if(nums[0]==target) return 0;//isse fail hokr hi ....
        if(nums[n-1]==target) return n-1;//ispe jaega.
       int l=0;int h=n-1;
        while(l<=h)
        { int m=l+(h-l)/2;
         if(nums[m]==target)
          {return m; }
         else if(nums[l]<=nums[m])
            { if(nums[l]<=target && target<nums[m])
               { h=m-1; }
              else
              {l=m+1;}
           }
         else
         {
             if(nums[m]<target && target<=nums[h])
               { l=m+1; }
              else
              {h=m-1;}
         }
    }
        return -1;
    }
};