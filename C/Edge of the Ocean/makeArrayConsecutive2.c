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
int makeArrayConsecutive2(arr_integer statues) {
    
    if (statues.size + 1 == 1){
        return 0;
    }
    
    else {
        
        int min = statues.arr[0];
        int max = statues.arr[0];
        
        for (int i = 0; i < statues.size; i++){
            if (statues.arr[i] > max){
               max = statues.arr[i];
            } 
        }
        
        for (int i = 0; i < statues.size; i++){
            if (statues.arr[i] < min){
               min = statues.arr[i];
            } 
        }
        
        int difference = max - min + 1;
        return difference - statues.size;
        
    }
}
