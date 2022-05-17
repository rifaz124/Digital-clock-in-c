#include <stdio.h>
#include <stdlib.h> //for system("cls");
#include <unistd.h> //for usleep

int main()
{
    int h, m, s;
time:
    printf("SET TIME :HH MM SS");
    scanf("%d%d%d", &h, &m, &s);
    if (h > 23 || m > 59 || s > 59)
    {
        printf("Error!!!\n");
        goto time;
    }
    while (1)
    {
        system("cls"); // to clear screen each seconds
        printf("%02d:%02d:%02d", h, m, s);
        s++;
        if (s == 60)//if second is 60 increament minute
        {
            m++;
            s = 0;
        }
        if (m == 60)//if minute is 60 increament hour
        {
            h++;
            m = 0;
        }
        if (h == 24)//if hour is 24 make everything 0
        {
            h = 0;
            m = 0;
            s = 0;
        }
        usleep(1000000); // 1 second delay(1000000microsecond = 1 second)
    }
    return (0);
}