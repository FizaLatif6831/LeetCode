class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        vector<int> arr(n,0);

        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                arr[j]=nums[i];
                j++;
            }
        }

        for(int i=0;i<n;i++)
        {
            nums[i]=arr[i];
        }
    }
};