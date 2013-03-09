// ============================================================================
//
//       Filename:  01169-trigo_no_tabuleiro.cpp
//
//    Description:  URI 1169 - Trigo no Tabuleiro
//
//        Version:  1.0
//        Created:  11/Oct/2012 08:21:42
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Julio B. Silva (351202), julio(at)juliobs.com
//        Company:  UFSCar
//
// ============================================================================
#include <cstdio>

typedef unsigned long long int ULLI;

int main()
{
    ULLI trigo[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 5, 10, 21,
                    43, 87, 174, 349, 699, 1398, 2796, 5592, 11184, 22369,
                    44739, 89478, 178956, 357913, 715827, 1431655, 2863311,
                    5726623, 11453246, 22906492, 45812984, 91625968, 183251937,
                    366503875, 733007751, 1466015503, 2932031007, 5864062014,
                    11728124029, 23456248059, 46912496118, 93824992236,
                    187649984473, 375299968947, 750599937895, 1501199875790,
                    3002399751580, 6004799503160, 12009599006321,
                    24019198012642, 48038396025285, 96076792050570,
                    192153584101141, 384307168202282, 768614336404564,
                    1537228672809129};
    int cases, n;
    scanf("%d", &cases);
    while (cases--)
    {
        /*
        ULLI n;
        scanf("%llu", &n);
        if (n < 14)
            puts ("0 kg");
        else
        {
            n = 1L << (n-5);
            //printf("%llu kg\n", n/375);
            printf("%llu kg\n", n/375);
        }
        */
        scanf("%d", &n);
        printf("%llu kg\n", trigo[n]);
    }
    return 0;
}
