long long pot(long long base, unsigned expo){
    long long r=1;
    while(expo--){ r*=base; }
    return r;
}
