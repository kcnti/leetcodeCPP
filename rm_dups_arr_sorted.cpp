class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int sum=0;
        int count=1;
        for(size_t i=0;i<nums.size()-1;i++) {
            // cout << "count: " << count << endl;
            if(i+1 == nums.size()-1 && i+2 == nums.size()-1)
                break;
            if(nums[i] != nums[i+1]) {
                // cout << "Change: " << nums[i] << " " << nums[i+1] << endl;
                count = 1;
                i++;
            }
            // cout << "i: " << i << endl;
            if(nums[i] == nums[i+1] && count <=2) {
                ++count;
            }
            if(nums[i] == nums[i+1] && count == 3) {
                count = 1;
                // cout << "lucky: " << nums[i] << endl;
                nums.erase(nums.begin()+(i));
                i--;
                if(nums[i+1] == nums[i+2]){
                    nums.erase(nums.begin()+(i));
                    // i++;
                }
            }
        }
        return nums.size();
    }
};