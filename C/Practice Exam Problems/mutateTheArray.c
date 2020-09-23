
arr_integer mutateTheArray(int n, arr_integer a) {

    n = a.size;
    arr_integer b = alloc_arr_integer(n);
    
    
    for(int i = 0; i < n; i++){
        
        if (i==0){
            b.arr[i] = a.arr[i] + a.arr[i+1];
        }
        
        else if (i == n-1){
             b.arr[n-1] = a.arr[i-1] + a.arr[i];
        }
        
        else{
            b.arr[i] = a.arr[i-1] + a.arr[i] + a.arr[i+1];
        }
    }
    return b;
}
