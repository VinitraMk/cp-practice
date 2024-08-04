class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<string, int>> q;
        unordered_set<string> toCheck(wordList.begin(), wordList.end());
        q.push(make_pair(beginWord, 1));
        
        int maxDepth = -9999;
        while(!q.empty()) {
            string currentWord = q.front().first;
            int depth = q.front().second;
            q.pop();
            if (currentWord == endWord) {
                maxDepth = max(depth, maxDepth);
            }

            int n = currentWord.length();
            for (int i = 0; i < n; i++) {
                char og = currentWord[i];
                for(char ch = 'a'; ch <= 'z'; ch++) {
                    currentWord[i] = ch;
                    auto it = toCheck.find(currentWord);
                    if(it != toCheck.end()) {
                        q.push(make_pair(currentWord, depth+1));
                        toCheck.erase(it);
                    }
                }
                currentWord[i] = og;
            }
        }
        return max(maxDepth, 0);
    }
};

