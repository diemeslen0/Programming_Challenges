// ============================================================================
// 
//       Filename:  01209-festas_de_sao_petersburgo.cpp
// 
//    Description:  URI 1209 - Festas de São Petersburgo
// 
//        Version:  2.0 - Runtime Error
//        Created:  14/Feb/2013 19:26:40
//       Revision:  none
//       Compiler:  g++
// 
//         Author:  Julio Batista Silva (351202), julio(at)juliobs.com
//        Company:  UFSCar
// 
// ============================================================================
#include <cstdio>
#include <cstring>

int pessoas, relacoes, min_amigos, p1, p2;
bool g[1001][1001];
int amigos[1001];

inline void remover(int i)
{
    amigos[i] = 0;

    for (int j = 1; j <= pessoas; j++)
        if (g[i][j])
        {
            g[i][j] = g[j][i] = 0;
            amigos[j]--;

            if (amigos[j] && amigos[j] < min_amigos)
                remover(j);
        }
}

int main()
{
    while (scanf("%d %d %d", &pessoas, &relacoes, &min_amigos) != EOF)
    {
        if (min_amigos == 0)
        {
            for (int i = 0; i < relacoes; i++)
                scanf("%d %d", &p1, &p2);

            putchar('1');
            for (int i = 2; i <= pessoas; i++)
                printf(" %d", i);
            putchar('\n');
        }
        else
        {
            memset(g, 0, sizeof(g));
            memset(amigos, 0, sizeof(amigos));

            for (int i = 0; i < relacoes; i++)
            {
                scanf("%d %d", &p1, &p2);
                g[p1][p2] = g[p2][p1] = 1;
                amigos[p1]++;
                amigos[p2]++;
            }

            for (int i = 1; i <= pessoas; i++)
                if (amigos[i] && amigos[i] < min_amigos)
                    remover(i);

            // Imprime todos os que sobraram
            bool imprimiu = false;
            for (int i = 1; i <= pessoas; i++)
                if (amigos[i])
                {
                    if (!imprimiu)
                    {
                        imprimiu = true;
                        printf("%d", i);
                    }
                    else
                        printf(" %d", i);
                }

            if (imprimiu)
                putchar('\n');
            else
                puts("0");
        }
    }

    return 0;
}

