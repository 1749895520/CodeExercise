class Solution {
public:        
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(),n = nums2.size();
        int len = (m+n)/2;
        double number = findNumber(nums1,nums2,len,m,n);
        if((m+n)%2==0){
            double number2 = findNumber(nums1,nums2,len-1,m,n);
            number = (number+number2)/2.0;
        }
        return number;
    }
    double findNumber(vector<int>& nums1, vector<int>& nums2, int len,int m,int n){
        int i=0,j=0;
        double number;
        while(len>=0&&i<m&&j<n){
            number = nums1[i]<nums2[j]?nums1[i++]:nums2[j++];
            len--;
        }
        while(len-->=0){
            number = i<m?nums1[i++]:nums2[j++];
        }
        return number;
    }
};