int fact(int val)
{
    if (val == 1) {
        return 1;
    }
    return val * fact(val - 1);
}