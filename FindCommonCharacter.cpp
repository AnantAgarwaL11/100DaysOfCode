class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int letterCount[26];
        memset(letterCount, 0x3f, sizeof(letterCount));

        for (const auto& word : words) {
            int wordLetterCount[26] = {0};
          
            for (char letter : word) {
                ++wordLetterCount[letter - 'a'];
            }

            for (int i = 0; i < 26; ++i) {
                letterCount[i] = min(letterCount[i], wordLetterCount[i]);
            }
        }

        vector<string> result;
        for (int i = 0; i < 26; ++i) {
            while (letterCount[i] > 0) {
                result.emplace_back(1, static_cast<char>(i + 'a'));
                --letterCount[i];
            }
        }

        return result; 
    }
};