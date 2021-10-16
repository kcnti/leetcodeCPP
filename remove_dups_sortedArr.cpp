class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        int dup=0;
//        sort(nums.begin(), nums.end()); Already sorted
        for(int i=1;i<nums.size();i++){
            if(nums[dup] != nums[i]){
                dup++;
                nums[dup] = nums[i];
            }
        }
        return dup+1;
    }
};
