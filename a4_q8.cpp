//Q34  Find First and Last Position of Element in Sorted Array
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //BINAry search
        int start=0;
        int end=nums.size()-1;
        while(start<=end){
            int mid=(start+end)/2;
       if(target==nums[mid]){
                    int left=mid;
                    while(left>0&&nums[left-1]==nums[mid]) left--;
                    int right =mid;
                    while(right<nums.size()-1 && nums[right+1]==nums[mid]) right++;
                    return{left,right};  //took hint
                }
             
            
            else if(target<nums[mid]){
                end=mid-1;
            }
            else if(target>nums[mid]){
                start=mid+1;
            } 
        }

           return {-1,-1};
    }
};
