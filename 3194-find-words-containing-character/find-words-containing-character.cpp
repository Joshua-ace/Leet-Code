class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int indices = 0;
        vector<int>indi;
        for(int i=0; i<words.size(); i++){

           if(words[i].find(x)!=-1){
            indi.push_back(i);
           }
        }
        return indi;
    }
};