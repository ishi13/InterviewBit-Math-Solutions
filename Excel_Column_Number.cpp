/*
Given a column title as appears in an Excel sheet, return its corresponding column number.

Example:

    A -> 1
    
    B -> 2
    
    C -> 3
    
    ...
    
    Z -> 26
    
    AA -> 27
*/

int Solution::titleToNumber(string A) {
    int n = A.size(), number = 0;
    int j = n - 1;
    for(int i = 0; i < n; i++){
        number += pow(26, j) * (A[i] - 'A' + 1); // base conversion at 26
        j--;
    }
return number;
}
