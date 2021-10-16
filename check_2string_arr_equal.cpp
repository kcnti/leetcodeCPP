class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string merge = "";
        string merge2 = "";
        for(auto i: word1){
            merge = merge + i;
        }
        for(auto i: word2){
            merge2 = merge2 + i;
        }
        return merge==merge2;
    }
};
