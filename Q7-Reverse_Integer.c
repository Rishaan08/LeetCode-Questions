// Q7 Reverse Integer
int reverse(int x){
    int last,rev = 0;
    while(x){
        last = x%10;
        if((x>0 && rev>(0x7fffffff-last)/10)||(x<0 && rev<((signed)0x80000000-last)/10)){
            return 0;
        }
        rev = rev*10 + last;
        x = x/10;
    }
    return rev;
}
