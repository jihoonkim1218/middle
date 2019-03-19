#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int i,a,b,N,sum=0;
    scanf("%d", &N);
    for (i=0;i<N;i++) {
        scanf("%d %d", &a, &b);
        int c=b%a;
        sum+=c;
    }
    printf("%d", sum);
    return 0;
}
