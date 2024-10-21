class Solution {
public:
    void check(string &s, int pos, int &count, unordered_set<string> &strs) {
        if(pos == s.size()) {
            count = max(count, (int)strs.size());
            return; 
        }
        string str;
        for(int i=pos; i<s.size(); i++) {
            str.push_back(s[i]);
            if(strs.count(str) == 0) {
                strs.insert(str);
                check(s, i+1, count, strs);
                strs.erase(str);
            }
        }
    }
    int maxUniqueSplit(string s) {
        int count = 0;
        unordered_set<string> strs;
        check(s, 0, count, strs);
        return count;
    }
};
