class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int csum=nums[0];
    
        //osum-> Overall sum
        int osum=nums[0];
        for(int i=1;i<nums.size();i++){
            if(csum>=0){
                csum+=nums[i];
            }
            else
            {
                csum=nums[i];
            }
            osum=max(osum,csum);
        }
        return osum;
    }
};
