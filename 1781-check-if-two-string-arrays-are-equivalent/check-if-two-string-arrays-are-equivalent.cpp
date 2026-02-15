class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string major ="";
        string op = "";
        for(int i=0; i<word1.size(); i++){
            major += word1[i];
        }
        for(int i=0; i<word2.size(); i++){
            op += word2[i];
        }
        if(major==op) return true;
        return false;
    }
};