class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
    //Umesh Kumar
   
    
    int left=0,prod=1,count=0;
    for(int end=0;end<nums.size();end++){
        prod*=nums[end];

        while(prod>=k and left<nums.size()){
            prod=prod/nums[left];
            left++;
        }
        if(prod<k)
           count += end-left+1;
    }
    return count;


    }
};