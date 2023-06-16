int past(int h, int m, int s) {
    int res = ((h*60*60) + (m*60) + s) * 1000;
    return res;
}