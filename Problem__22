//Problema 2697 -- Leetcode

char * makeSmallestPalindrome(char * s){
    int i = 0;
    int j = strlen(s)-1;
    while(i < strlen(s) && j > 0){
        if (s[i] != s[j]) {
            if (s[i] < s[j]) {
                s[j] = s[i];
            } else {
                s[i] = s[j];
            }
        }
        i++;
        j--;
    }
return s;
}
