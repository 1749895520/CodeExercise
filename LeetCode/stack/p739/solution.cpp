class Solution {
public:
    struct date {
        int day;
        int temperature;
        date (int day,int temperature) : day(day),temperature(temperature){}
    };
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size());
        stack<date> st;
        int len = temperatures.size();
        for(int i=len-1;i>=0;i--) {
            while(!st.empty() && st.top().temperature<=temperatures[i]) {
                st.pop();
            }
            ans[i] = st.empty() ? 0 : st.top().day-i;
            date *t = new date(i,temperatures[i]);
            st.push(*t);
        }
        return ans;
    }
};