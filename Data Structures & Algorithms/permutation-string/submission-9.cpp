class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size();
        int n2 = s2.size();
        if(n2<n1)
            return false;

        string new_s1 = s1;
        sort(new_s1.begin(), new_s1.end());
        for(int i = 0; i<= n2 - n1 ; i++){
            string str = "";
            for(int j = i;j<i+n1;j++){
                str += s2[j];
            }
            sort(str.begin(),str.end());
            if(str == new_s1){
                return true;
            }
        }
        return false;
    }
};
