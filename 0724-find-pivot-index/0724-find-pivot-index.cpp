class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int  n = nums.size();
        int  lsum = 0;
        int  rsum = 0;
        for(auto el :nums){
            rsum += el;
        };    
        int  pivot  = -1;
        for(int  i = 0;i<n ;i++){
            rsum -= nums[i];
            if(rsum == lsum ){
                return i;
            }
            lsum += nums[i];
            
        }
        return pivot;
        
    }
};