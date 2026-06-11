class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> stored;

        for(int i = 0; i < nums.size(); i++){
            int comp = target - nums[i];
            if (stored.count(comp) > 0){
                return{stored[comp], i};
            }
            stored[nums[i]] = i;
        }
    }
};
