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
arr_integer sortByHeight(arr_integer a) {


    for (int i = 0; i < a.size; i++){
        if (a.arr[i] == -1){
            continue;
        }
        for (int j = 1 + i; j < a.size; j++){
            if (a.arr[j] == -1){
                continue;
            }
            if (a.arr[i] > a.arr[j]){
                int temp = a.arr[i];
                a.arr[i] = a.arr[j];
                a.arr[j] = temp;
            }
        }
    }

    return a;
}
