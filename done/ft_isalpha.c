int ft_isalpha(int c)
{
    unsigned char   b;

    b = (unsigned char) c;
    if((b > 64 && b < 91) || (b > 96 && b < 123))
    {
        return 1;
    }
    else
        return 0;
}
