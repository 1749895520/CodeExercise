class Solution {
    int[] preSum = null;
    public Solution(int[] w) {
        preSum = new int[w.length+1];
        for(int i=1;i<=w.length;i++) {
            preSum[i] = preSum[i-1]+w[i-1];
        }
    }
    
    public int pickIndex() {
        Random rand = new Random();
        int target = rand.nextInt(preSum[preSum.length-1])+1;
        return findLeft(preSum, target) - 1;
    }
    public int findLeft(int[] preSum,int target) {
        int left = 0,right = preSum.length;
        while(left<right) {
            int mid = left + (right-left)/2;
            if(preSum[mid]>=target) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
}

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(w);
 * int param_1 = obj.pickIndex();
 */