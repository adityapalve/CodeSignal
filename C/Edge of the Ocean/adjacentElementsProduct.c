// Arrays are already defined with this interface:
// typedef struct arr_##name {
//   int size;
//   type *arr;
// } arr_##name;
//
// arr_##name alloc_arr_##name(int len) {
//   arr_##name a = {len, len > 0 ? malloc(sizeof(type) * len) : NULL};
//   return a;
// }
//
//
int adjacentElementsProduct(arr_integer inputArray) {
    
    int size = inputArray.size;
    int largestPair = inputArray.arr[0] * inputArray.arr[1];
    
    for (int i = 0; i < size - 1; i++){
        
        int temp = inputArray.arr[i] * inputArray.arr[i+1];
        
        if (temp > largestPair){
            largestPair = temp;
        }
    }
    
    return largestPair;
}
