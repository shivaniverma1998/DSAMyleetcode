class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int left=0, right=nums.size()-1;
        vector<int> res(nums.size(),0);
        int i=res.size()-1;
        while(left<=right)
        {
            int leftp=pow(nums[left],2), rightp=pow(nums[right],2);
            if(leftp>=rightp) 
            {
                res[i]=leftp;
                left++;
                i--;
            }
            else
            {
                res[i]=rightp;
                right--;
                i--;
            }
        }
        return res;
    }
};
/*squares of array in sorted form 
int res[]  ek resultant array 
int n = a.size()
int l =0 , r= n-1

int k = n-1    // resultant array ko reverse iterate krenge
while(l<=r)    jab tak l r se chot hau
if(a[l ]> = a[r]) {
    return res[k] = a[l]   *  a[l]
    l++
    k--
else 
    return a[k] = a[r] * a[r] 
    r--
    k--   
}
return res    // last me return krwaa denge resulatnt array ko jisme value rakhi h 
*/