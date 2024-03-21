class Solution {
public:
    void sortColors(vector<int>& nums) {
        // Write your code here.
        int mapArray[3] = {0};
        for (int i = 0; i < nums.size(); i++) {
            mapArray[nums[i]]++;
        }
        int j = 0;
        for (int i = 0; i <= 2; i++) {
            while (mapArray[i] >= 1) {
                nums[j] = i;
                mapArray[i]--;
                j++;
            }
        }
    }
};