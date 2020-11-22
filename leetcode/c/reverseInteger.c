
int reverse(int x){
    long int result = 0;
    int tmp = 0;
    int i = 0; long int k = 2;
    for(i = 1;i < 31;i++)
    {
        k *= 2;
    }    
       
    while(true){
        tmp = x%10 ;
        result = result*10 + tmp;
        if((result > (k-1)) || (result < -k))
            return 0;
        x  = x/10;
        if(x == 0){
            break;
        }
    }
    return result;
}
