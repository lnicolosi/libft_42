int ft_isprint(int c)
{
    unsigned char b = (unsigned char) c;
    return b > 31 && b < 127;
}
