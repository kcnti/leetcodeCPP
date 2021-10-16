class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closest=0, ans;
        for(int i=0;i<nums.size();i++){
            closest+=nums[i];   
        }
        int temp = abs(closest-target); //to find how different between closest and target
        if(nums.size() == 3){
            ans = closest;
            return ans;
        }
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    if(nums[i]+nums[j]+nums[k] == target && nums[i]+nums[j]+nums[k]-target < temp)
                        ans = nums[i]+nums[j]+nums[k];
                }
            }
        }
        return ans;
    }
};
