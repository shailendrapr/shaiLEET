class Solution {
public:
    
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m==0){
            nums1=nums2;
            return;
        }
        else if(n==0)
            return;
        int i1=m-1,i2=n-1,index=m+n-1;
        while(i1>=0 && i2>=0)
        {
            if(nums1[i1]>=nums2[i2])
            {
                nums1[index]=nums1[i1];
                i1--;
                index--;
            }
            else
            {
                nums1[index]=nums2[i2];
                i2--;
                index--;
            }
        }
        while(i2>=0)
        {
            nums1[index]=nums2[i2];
            index--;
            i2--;
        }
    }
};