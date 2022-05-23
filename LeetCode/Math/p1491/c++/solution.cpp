class Solution {
public:
    double average(vector<int>& salary) {
        int maxSalary = 0,minSalary = INT_MAX,sum = 0;
        for(int n:salary) {
            maxSalary = max(maxSalary,n);
            minSalary = min(minSalary,n);
            sum += n;
        }
        return double((sum-maxSalary-minSalary)*1.0/(salary.size()-2));
    }
};