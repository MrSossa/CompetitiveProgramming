//retorna (b^p)mod(m)
int bigmod(int b, int p, int m){
    int mask = 1;
    int pow2 = b % m;
    int r = 1;
    while (mask){
        if (p & mask) r = (r * pow2) % m;
        pow2 = (pow2 * pow2) % m;
        mask <<= 1;
    }
    return r;
}