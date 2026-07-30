class Solution {
public:
    bool isPalindrome(string s) {
        // int left = 0;
        // int right = s.size()-1;

        string newStr = "";
        for(char c : s){
            if(isalnum(c)){
                newStr += tolower(c);
            }
        }
        return newStr == string(newStr.rbegin(), newStr.rend());
    }
};
