class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len1 = word1.length();
        int len2 = word2.length();
        string str= "";
        
        int j=0,k=0;

        while(j<len1 && k<len2)
        {
            str +=word1[j];
            j++;
            str +=word2[k];
            k++;
        }

        while(j<len1)
        {
            str +=word1[j];
            j++;
        }

        while(k<len2)
        {
            str +=word2[k];
            k++;
        }

        return str;
    }
};