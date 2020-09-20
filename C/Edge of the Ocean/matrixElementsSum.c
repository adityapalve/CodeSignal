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
int matrixElementsSum(arr_arr_integer matrix) {
    
    int sum = 0;
    int rows = matrix.size;
    int columns = matrix.arr->size;
    
    for (int j = 0; j < columns; j++){
        for (int i = 0; i < rows; i++){
            
            if (matrix.arr[i].arr[j] == 0){
                break;
            }
            sum += matrix.arr[i].arr[j]; 
        }
    }
    return sum;
}
