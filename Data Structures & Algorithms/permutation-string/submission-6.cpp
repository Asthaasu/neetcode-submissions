class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> s1Count(26,0);
        vector<int> windowCount(26,0);
        int m = s1.size();
        int n = s2.size();
        if (m > n)
            return false;
        for(char c : s1){
            s1Count[c-'a']++;
        }
        for (int i = 0; i < m; i++) {
            windowCount[s2[i] - 'a']++;
        }
        if (s1Count == windowCount)
            return true;
        for (int right = m; right < n; right++) {

            // Add new character
            windowCount[s2[right] - 'a']++;

            // Remove old character
            windowCount[s2[right - m] - 'a']--;

            // Compare frequencies
            if (s1Count == windowCount)
                return true;
        }
        return false;
    }
};
