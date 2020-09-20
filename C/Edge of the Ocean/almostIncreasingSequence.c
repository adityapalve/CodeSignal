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
bool almostIncreasingSequence(arr_integer sequence) {
    
    int size = sequence.size;
    int p = -1, c = 0;
    for (int i = 1; i < size; i++){
        if (sequence.arr[i-1] >= sequence.arr[i]){
            p = i;
            c++;
        }
    }
    if (c > 1){
        return false;
    }
    if (c == 0){
        return true;
    }
    if (p == sequence.size - 1){
        return true;
    }
    if (p == 1){
        return true;
    }
    if (sequence.arr[p-1] < sequence.arr[p+1]){
        return true;
    }
    if (sequence.arr[p-2] < sequence.arr[p]){
        return true;
    }
    return false;
}
