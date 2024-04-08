/*
sidb95
bhatoresiddharth@gmail.com 
verify_palindromic_string_one
08.04.2024
*/

// verify iff palindromic

short int verifyPalindromicString(char* str, int cmpOut) {
    cmpOut = 0;
    int i, j;
    i = 0, j = n-1;
    while(i < j) {
        if(str[i] != str[j]) {
            break;
        }
        else {
            i++;
            j--;
            continue;
        }
    }
    if(i > j) {
        cmpout = 1;
    }
    return cmpOut;
}