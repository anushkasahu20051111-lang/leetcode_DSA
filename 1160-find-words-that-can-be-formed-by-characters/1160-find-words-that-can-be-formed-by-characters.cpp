class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans=0;
        for(int i=0;i<words.size();i++){
            string temp=chars;
            int count=0;
            for(int j=0;j<words[i].size();j++){
                int pos=temp.find(words[i][j]);
                if(pos!=string::npos){
                    count++;
                    temp.erase(pos,1);
                }
            }
            if(count==words[i].size()){
                ans+=count;
            }
        }
        return ans;
    }
};