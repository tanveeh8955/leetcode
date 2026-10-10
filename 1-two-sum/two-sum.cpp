class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        for (int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                int *p1 = &nums[i];
                int *p2 = &nums[j];


                if(*p1 + *p2 == target) {
                    return {i , j};
                }
            }
        }
       return {}; 
    }
};