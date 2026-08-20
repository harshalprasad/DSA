class Solution {
public:
    int maxFreqSum(string s) {
        
        vector<int>freq(26);

        for(int i=0; i<s.size(); i++)
        {
            freq[s[i]-'a']++;
        }

        int vowels = max(freq[0],max(freq[4],max(freq[8],max(freq[14],freq[20]))));

        freq[0] = 0;
        freq[4] = 0;
        freq[8] = 0;
        freq[14] = 0;
        freq[20] = 0;
        int consonants = 0;

        for(int i=0; i<26; i++)
        {
            consonants = max(consonants,freq[i]);
        }


        return vowels+consonants;
    }
};