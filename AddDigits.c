int addDigits(int num) {
    int rev;
    unsigned int sum=0;
    while(num != 0)
    {
        rev = num % 10;
        sum = sum + rev;
        num = num/10;
        if(num==0 && sum/10 != 0)
        {
            num = sum;
            sum = 0;
        }
    }
    return sum;
}
