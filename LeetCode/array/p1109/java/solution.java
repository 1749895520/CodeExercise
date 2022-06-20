class Solution {
    int[] diff;
    public int[] corpFlightBookings(int[][] bookings, int n) {
        diff = new int[n];
        for(int i=0;i<bookings.length;i++) {
            diff[bookings[i][0]-1] += bookings[i][2];
            if(bookings[i][1]<n) {
                diff[bookings[i][1]] -= bookings[i][2];
            }
        }
        for(int i=1;i<n;i++){
            diff[i] += diff[i-1];
        }
        return diff;
    }
}