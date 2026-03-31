class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> options;

        for(int i = 0; i < nums.size(); i++){
            int complement = target - nums[i];
            if (options.count(complement)){
                return{options[complement], i};
            }
            options[nums[i]] = i;
        }
        return{};
    }
};
