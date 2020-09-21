int commonCharacterCount(char * s1, char * s2) {

    int counter = 0;
    
    for (int i = 0; i < strlen(s1); i++){
        for (int j = 0; j < strlen(s2); j++){
            if (s1[i] == s2[j]){
                s2[j] = ' ';
                counter++;
                break;
            }  
        }
    }
    return counter;
}
