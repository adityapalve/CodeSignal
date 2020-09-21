arr_string allLongestStrings(arr_string inputArray) {
    
    arr_string newArray = alloc_arr_string(inputArray.size);
    
    int max = 0;
    
    for (int i = 0; i < inputArray.size; i++){
        
        if (strlen(inputArray.arr[i]) > max){
            max = strlen(inputArray.arr[i]);
        }
    }
    int temp = 0;
    
    for (int j = 0; j < inputArray.size; j++){
        if (strlen(inputArray.arr[j]) == max){
            newArray.arr[temp++] = inputArray.arr[j];
        }
        newArray.size = temp;
    }
    
    return newArray;

}
