int digitRightShift(int n){
    int lastdigit=n%10;
    int temp = n;
    int place =1;
    while(temp>=10){
        temp =temp/10;
        place = place%10;
    }
    return lastdigit*place +n/10;
    
    
}