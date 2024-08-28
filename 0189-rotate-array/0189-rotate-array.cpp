class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();
        if (n == 0) 
        {
            return;
        }

        k = k % n; 

        reverse(nums.begin(), nums.end()); //reverse complete array
        reverse(nums.begin(), nums.begin() + k); //reverse k elements
        reverse(nums.begin() + k, nums.end()); //reverse remainig elements
    }
};