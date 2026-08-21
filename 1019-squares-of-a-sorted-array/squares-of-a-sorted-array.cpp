class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        //Umesh
        int n = nums.size();
        vector<int> res(n);
        int i = 0, j = n - 1, k = 0;  

        while (i <= j) {
            if (abs(nums[i]) > abs(nums[j])) {
                res[k] = nums[i] * nums[i];
                i++;
            } else {
                res[k] = nums[j] * nums[j];
                j--;
            }
            k++;  
        }

        reverse(res.begin(), res.end()); 
        return res;
    }
};

