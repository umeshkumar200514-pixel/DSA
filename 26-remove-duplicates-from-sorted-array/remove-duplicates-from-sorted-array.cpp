class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // umesh
        int i =0;
        int res=1;
        int j=1;
        int n = nums.size();
        while(j<n) {
            if (nums[i]==nums[j]){
                j++;
                continue;}
                
            nums[i+1]=nums[j];
            res++;
            i++;
            j++;
            
        }
       return res; 
    }
};