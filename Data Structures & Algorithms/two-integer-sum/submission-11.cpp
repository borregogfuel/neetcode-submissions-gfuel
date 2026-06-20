class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numeros;

        for(int i = 0; i < nums.size(); i++){
            int comp = target - nums[i];
            if (numeros.count(comp) > 0){
                return{numeros[comp], i};
            }
            numeros[nums[i]] = i;
        } 
    }
};
