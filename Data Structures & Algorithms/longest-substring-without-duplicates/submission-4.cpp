class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> a(256 , -1);
        
        int i = 0;
        int j = 0;

        int maxi = 0;
        while(j < s.size()){
            if(a[s[j]] >= i){
                i = a[s[j]] + 1;
            }

            a[s[j]] = j;
            maxi = max(maxi , j - i + 1);
            j++;
        }
        return maxi;
    }
};
