class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1,right = 0;
        for(int n:piles){
            right+=n;
        }
        while(left<right){
            int mid = left+(right-left)/2;
            if(sumTime(piles,mid)<=h){
                right = mid;
            }
            else{
                left = mid+1;
            }
        }
        return left;
    }
    int sumTime(vector<int>& piles, int speed){
        int hours = 0;
        for(int n:piles){
            hours += n/speed;
            if(n%speed!=0){
                hours++;
            }
        }
        return hours;
    }
};