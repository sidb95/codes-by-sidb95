/*
sidb95
bhatoresiddharth@gmail.com
string_matching_One
04.04.2024
*/

int stringMatching(char* strOne, char* strTwo) {
    int i = 0;
    int flag = 1;
    while(strOne[i] != EOF) {
        if(strOne[i] != strTwo[i]) {
            flag = 0;
            break;
        }
        i++;
    }
    if(flag != 0) {
        if(strOne[i] == EOF) {
            if(strTwo[i] == EOF) {
               flag = 1;
            }
        }
    }
    return flag;
}
