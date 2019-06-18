/*
Reverse digits of an integer.

Example1:

x = 123,

return 321
Example2:

x = -123,

return -321

Return 0 if the result overflows and does not fit in a 32 bit signed integer
*/

int Solution::reverse(int A) {
    if(A < 0)
    A = - A;
    long long int B = 0, s = A;
    if(A == 0)
    return 0;
    while(s > 0){
        B = B * 10 + s % 10;
        s = s / 10;
    }
    if(A != B)
    return 0;
    else
    if(A == B){
      if(s > 0)
    return s;
    else
    return(-s); 
    }
}
