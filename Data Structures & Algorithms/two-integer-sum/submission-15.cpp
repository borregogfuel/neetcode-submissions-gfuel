class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> blabla;

        for(int i = 0; i < nums.size(); i++){
            int need = target - nums[i];
            if (blabla.count(need) > 0){
                return{blabla[need], i};
            }
            blabla[nums[i]] = i;
        }
    }
};
