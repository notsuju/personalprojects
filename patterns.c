#include <stdio.h>

int main()
{
    int control;
    do
    {
    // FOR CHOOSING THE PATTERN
        int choose;
        printf("Choose one of the following patterns():\n");
        printf("1. Rectangle\n");
        printf("2. Right Angled Triangle\n");
        printf("3. Inverted Right Angled Triangle\n");
        printf("4. Twin Tower\n");
        do
        {
        printf("Choose(1-4): ");
        scanf("%i", &choose);
        }
        while (choose > 4 || choose < 1);
        // OUTER IF ELSE
        if (choose == 1)
        {
            int r;
            int c;
            do
            {
                printf("Enter the amount of rows: \n");
                scanf("%i",&r);
                printf("Enter the amount of column: \n");
                scanf("%i",&c);
            }
            while (r < 1 || c < 1);

            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    printf("#");
                }
                printf("\n");
            }
        }
        else if (choose == 2)
        {
            int height;
            do
            {
                printf("Enter the height of the triangle: ");
                scanf("%i", &height);
            }
            while (height < 1);

            for(int i = 0; i < height; i++)
            {
                for(int j = 0; j <= i; j++)
                {
                    printf("#");
                }
                printf("\n");
            }
        }
        else if (choose == 3)
        {
            int height;
            do
            {
                printf("Enter the height of the triangle: ");
                scanf("%i", &height);
            }
            while (height < 1);

            for(int i = 0; i < height; i++)
            {
                for(int j = height; j > i; j--)
                {
                    printf("#");
                }
                printf("\n");
            }
        }
        else if (choose == 4)
        {
            int height;
            int length;
            do
            {
                printf("Enter the number: ");
                scanf("%i", &height);
                printf("Enter the another number: ");
                scanf("%i", &length);
            }
            while (height < 1 || length < 1);
            for (int i = 0; i < height; i++)
            {
                for (int j = 0; j < height-(i+1); j++)
                {
                    printf(" ");
                }
                for (int k = 0; k <= i; k++)
                {
                    printf("#");
                }
                printf("*");
                for (int l = 0; l <= i; l++)
                {
                    printf("#");
                }
                for (int n = 0; n < (height*2)+1+(height-(i+1)); n++)
                {
                    printf(" ");
                }
                for (int j = 0; j < height-(i+1); j++)
                {
                    printf(" ");
                }
                for (int k = 0; k <= i; k++)
                {
                    printf("#");
                }
                printf("*");
                for (int l = 0; l <= i; l++)
                {
                    printf("#");
                }
                printf("\n");
            }
            for (int m = 0; m < 3*((height*2)+1); m++)
            {
            printf("&");
            }
            printf("\n");
            for (int i = 0; i < length; i++)
            {
                for (int j = 0; j < (height*2)+1; j++)
                {
                    printf("#");
                }
                for (int j = 0; j < (height*2)+1; j++)
                {
                    printf(" ");
                }
                for (int j = 0; j < (height*2)+1; j++)
                {
                    printf("#");
                }
                printf("\n");
            }

        }
        printf("Continue or Quit(1/2): ");
        scanf("%i", &control);


    }
    while (control == 1);
}
