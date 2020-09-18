#include <sys/wait.h>
bool checkPalindrome(char * inputString) {
    int n = strlen(inputString);
    char newString[n+1];
    newString[n] = '\0';
    
    for (int i = 0; i <= n - 1; i++){
        newString[i] = inputString[n-i-1];
    }
    
    if(strcmp(newString, inputString) == 0){
        return 1;
    }
    else return 0;
}

