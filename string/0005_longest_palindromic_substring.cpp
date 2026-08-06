class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if(n==0) return "";
        
        //every string with single character is palindrome
        int starting = 0;    // by default one character, if no palindrome 
        int length = 1;
    
        // every index is a center and expand then
        for(int i=0;i<n;i++) {
            // for odd length
            expand(s,i,i,starting,length);

            // for even length
            expand(s,i,i+1,starting,length);
        }

        return s.substr(starting,length);
    }

private : 
    void expand(string &s, int l, int r, int &starting,int &length) {
        /* exand left and right from center and skip if equal - means left and right should 
           stop if they are not equal */
        while(l>=0 && r<s.size() && s[l] == s[r]) {
            l--;
            r++;
        }

        /* after that loop l and r are beyond the palindrome string - means l is before 
           palindrome starting point and right is after palindrome */
        // find lenght
        int len = r - l -1; // -1 for beyond limits 
        if(len > length) {    // check if really palindrome string exists or not
            length = len;
            starting = l+1;    // beyond limits
        }
    }
};