class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> saved;

        for(int i = 0; i < nums.size(); i++){
            int need = target - nums[i];
            if (saved.count(need) > 0){
                return{saved[need], i};
            }
            saved[nums[i]] = i;
        }
    }
};
