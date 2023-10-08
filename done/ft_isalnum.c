int ft_isalnum(int c)
{
    unsigned char b;

    b = (unsigned char) c;
    if(b > 47 && b < 58)
        return 1;
    else
        return 0;
}
