class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Write your code here.
        int maxEle = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            maxEle = max(maxEle, nums[i]);
        }

        int* mapArr = new int[maxEle + 1]();
        for (int i = 0; i < maxEle + 1; i++) {
            if (mapArr[nums[i]] == 1) {
                delete[] mapArr;
                return nums[i];
            }
            mapArr[nums[i]] = 1;
        }
        delete[] mapArr;
        return -1;
    }
};