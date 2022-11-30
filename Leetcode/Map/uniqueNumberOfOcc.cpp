class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int>mp;
        for(auto it:arr){
            mp[it]++;
        }
        unordered_set<int>s;
        for(auto x:mp){
            if(s.count(x.second))
                return false;
            s.insert(x.second);
            
        }
        return true;
    }
};