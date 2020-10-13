int adjacentElementsProduct(int[] inputArray) {
    int product = inputArray[0] * inputArray[1];
    for(int i = 1; i < inputArray.length-1; i++){
        int temp = inputArray[i] * inputArray[i+1];
        if(temp > product){
            product = temp;
        }
    }
    return product;
}
