class Solution {
public:
    string findReplaceString(string s, vector<int>& indices,
                             vector<string>& sources, vector<string>& targets) {
        vector<pair<int,int>> v;
        for(int i = 0; i < indices.size(); i++) {
            v.push_back({indices[i], i});
        }
        sort(v.rbegin(), v.rend());
        int last = s.size();
        for(int i = 0; i < v.size(); i++) {
            int idx = v[i].first;
            int j = v[i].second;
            if(idx + sources[j].size() <= last &&
               s.substr(idx, sources[j].size()) == sources[j]) {
                s.replace(idx, sources[j].size(), targets[j]);
                last = idx;
            }
        }
        return s;
    }
};