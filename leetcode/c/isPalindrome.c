
bool isPalindrome(int x){
    long result = 0 ;
    int src = x, value = 0;
    if( src >= 0 ) {
        while(true) {
            value = src%10;
            if(src < 10){
                result =value ? (result*10 + value) : result;                
            } else {
                result = result*10 + value;
            }

            src = src/10;          
            if(src == 0)
                break;
        }
    } else
        return false;
    
    if(result == x)
        return true;
    else 
        return false;
}

