#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void main()
{
    int hours, mins, seconds;
    printf("Enter Hours , Minutes and Seconds \n");
    scanf("%d %d %d", &hours, &mins, &seconds);

    if (hours >= 24 || mins > 60 || seconds > 60)
    {
        printf("Invalid Date Please enter the correct Hours,Minutes and Seconds");
        exit(0);
    }
    while (1)
    {
        seconds++;
        if (seconds == 60)
        {
            mins++;
            seconds == 0;
        }
        if (mins == 60)
        {
            hours++;
            mins == 0;
        }
        if (hours == 24)
        {
            hours == 0;
            mins == 0;
            seconds == 0;
        }
        printf("Time : %02d %02d %02d", hours, mins, seconds);
        sleep(1);
        // system("cls");
    }
}