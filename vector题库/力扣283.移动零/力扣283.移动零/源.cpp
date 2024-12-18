class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        const int N = nums.size();
        int fast = 0;
        int slow = 0;
        while (fast < N)
        {
            if (nums[fast] != 0)
            {
                nums[slow] = nums[fast];
                slow++;
            }
            fast++;
        }
        while (slow < fast)
        {
            nums[slow] = 0;
            slow++;
        }
    }
};