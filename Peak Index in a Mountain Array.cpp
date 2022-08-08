class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int start=0;
        int end=arr.size()-1;
        int mid=start-(start-end)/2;
        int ans =-1;
        while(start<end){
            if(arr[mid]<arr[mid+1])
            {
                start=mid+1;
            }
            else{
                end=mid;
            }
             mid=start-(start-end)/2;
            
        }
        
        return start; 
    }
};
