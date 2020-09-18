int centuryFromYear(int year) {
    double temp = year / 100;
    if(year % 100 == 0){
        return floor(temp);
    }
    else {
        return floor(temp) + 1;
    }
}
