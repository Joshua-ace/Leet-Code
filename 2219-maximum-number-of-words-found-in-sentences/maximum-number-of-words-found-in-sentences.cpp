class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
      
        int maxy = 0;
        int n =sentences.size();
        for(auto &s : sentences){
            int words = 1+count(s.begin(),s.end(), ' ');
            maxy = max(words, maxy); 
        }
        return maxy;
    }
};