class Solution {
public:
    int pivotIndex(vector<int>& nums) {
     
        int n = nums.size();
int sum = 0;
int lsum = 0;
for(int i = 0;i<n;i++)
{
sum = sum + nums[i];
}

    int rsum = sum;
    for(int i = 0;i<n;i++)
    {
        rsum = rsum - nums[i];
        if(lsum == rsum)
        {
            return i;
        }
        lsum = lsum + nums[i];
    }
    return -1;
        
    }
};
