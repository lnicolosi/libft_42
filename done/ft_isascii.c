int ft_isascii(int c)
{
    unsigned char b;

    b = (unsigned char) c;
    if(b < 128)
        return 1;
    else
        return 0;
}
