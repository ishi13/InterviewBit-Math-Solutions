/*
Given a positive integer, return its corresponding column title as appear in an Excel sheet.

For example:

    1 -> A
    2 -> B
    3 -> C
    ...
    26 -> Z
    27 -> AA
    28 -> AB 
 */

string Solution::convertToTitle(int n) {
    string res = "";
        while(n > 0)
        {
            int i = (n - 1) % 26; 
            res = (char)('A' + i) + res;
            n = (n - 1) / 26;
        }
        return res;
}
