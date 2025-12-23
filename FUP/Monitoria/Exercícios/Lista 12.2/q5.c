#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int v[20], i, num, div;

    for(i=0;i<20;i++)
    {
        v[i] = rand()%100 + 1;
        num = v[i] + i;
        div=0;
        for(int x=1;x<=num;x++)
        {
            if(num % x == 0)
            {
                div++;
            }
        }
        if(div == 2)
        {
            printf("%d ", num);
        }
    }

    return 0;
}
