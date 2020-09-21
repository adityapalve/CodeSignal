bool isLucky(int n) {
    
    int temp = n;
    int i = 1;
    int power = 0;
    int sum1 = 0, sum2 = 0;
    
    while (n != 0){
        n /= 10;
        power++;
    }
    
    while (temp != 0){
        if (i <= power / 2){
            sum1 += temp%10;
        }
        else{
            sum2 += temp%10;
        }
        temp /= 10;
        i++;      
    }

    if (sum1 == sum2){
        return true;
    }
    else{
        return false;
    }
}
