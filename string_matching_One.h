/*
sidb95
bhatoresiddharth@gmail.com
string_matching_One
04.04.2024
*/

short int stringMatching(char* strOne, char* strTwo, short int cmpOut) {
    int i = 0;
    int cmpOut = 1;
    while(strOne[i] != EOF) {
        if(strOne[i] != strTwo[i]) {
            cmpOut = 0;
            break;
        }
        i++;
    }
    if(cmpOut != 0) {
        if(strOne[i] == EOF) {
            if(strTwo[i] == EOF) {
               cmpOut = 1;
            }
        }
    }
    return cmpOut;
}
