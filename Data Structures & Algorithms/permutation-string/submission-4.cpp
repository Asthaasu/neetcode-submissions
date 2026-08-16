class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(), s1.end());
        int n = s2.size();
        int m = s1.size();
        string str;
        if (s1.length() > s2.length()) {
            return false;
        }
        for(int i=0;i<m;i++){
            for(int j=i;j<n;j++){
                if(s1[i] == s2[j]){
                    str.push_back(s1[i]);
                }
            }
        }
        sort(str.begin(), str.end());
                if (str == s1) {
                    return true;
                }
        return false;
    }
};
