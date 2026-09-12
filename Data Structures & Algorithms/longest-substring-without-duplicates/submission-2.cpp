class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> a(256 , 0);
        
        int i = 0;
        int j = 0;

        int maxi = 0;
        while(j < s.size()){
            if(a[int(s[j])] == 0){
                a[int(s[j])]++;
            }
            else{
                while(i < j && s[i] != s[j]){
                    a[int(s[i])] = 0;
                    i++;
                }
                i++;
            }
            maxi = max(maxi , j - i + 1);
            j++;
        }
        return maxi;
    }
};
