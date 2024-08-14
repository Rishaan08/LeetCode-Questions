// Q9 Palindrome Number

bool isPalindrome(int x) {
    int n,last,rev=0;
    if(x<0){
        return false;
    }
    n=x;
    while(x){
        last = x%10;
        if(rev>(0x7fffffff-last)/10){
            return false;
        }
        rev = rev*10 + last;
        x = x/10;
    }

    return(rev==n);
}
