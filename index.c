#include <stdio.h>
#include <stdbool.h>

int main()
{

    int t, n, a;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) // i = 4 
    {

        scanf("%d", &n); // n = 5 
        int resultado = 0;
        bool ehPraSoma = true;

        for (int j = 1; j <= n; j++) // = 5 - 5
        {

            scanf("%d", &a); // a = 5
            if (ehPraSoma == true) // true
            {

                resultado += a; // resultado = 10

                ehPraSoma = false; // false
            }
            else
            {

                resultado -= a; // 6 - 1

                ehPraSoma = true; // true
            }
        }

        printf("%d\n", resultado); // = 10 
    }

    return 0;
}

//ignorar comentarios//
