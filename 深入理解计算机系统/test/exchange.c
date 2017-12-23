long exchange(long *xp, long y)
{
    long x = *xp;
    *xp = y;
    return x;
}

long scale(long x, long y, long z)
{
    long t = x + 4 * y + 12 * z;
    return t;
}

int main(void) 
{
    return 0;
}