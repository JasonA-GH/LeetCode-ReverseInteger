void reverse_string(long a, char ansStr[])
{
    char str[256];
     sprintf(str, "%ld", a);
    int size = strlen(str);
    int c = 0;
     for(int i=size-1; i >= 0; i--)
     {
         ansStr[c] = str[i];
         c++;
     }
}
int reverse(int x)
{
    char ansStr[256];
    reverse_string(x, ansStr);
    long v = atol(ansStr);
    if(x < 0)
    v = -v;
    if(v > INT_MAX || v < INT_MIN)
    v = 0;
    return v;
}
