#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int i,n,k,s,y,cntb[6]={},cntg[6]={},cl=0;
    scanf("%d %d", &n, &k);
    for (i=0;i<n;i++) {
        scanf("%d %d", &s, &y);
        if (s==0) {
            cntb[y-1]++;
        }
        if (s==1) {
            cntg[y-1]++;
        }
    }
        if (cntb[i]>k) {
            while(cntb[i]>0) {
                cntb[i]-=k;
                cl++;
            }
        }
        if (cntg[i]>k) {
            while(cntg[i]>0) {
                cntg[i]-=k;
                cl++;
            }
        }
    }
     for (i=0;i<6;i++) {
        if (cntb[i]>0) {
            cl++;
        }
        if (cntg[i]>0) {
            cl++;
        }
    }
    printf("%d\n", cl);
    return 0;
}
