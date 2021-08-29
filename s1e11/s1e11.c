#include <stdio.h>
#include "ssebtr1.h"

int main ()
{
    int age, heart_rate_high;
    int music = 150;

    heart_rate_high = 220 - age;

    playsound(music);

    heart_rate = getHeartRate();

    if (heart_rate>heatrt_rate_high)
        {
            printf ("请马上停止跑步，否则会有绳命危险... ...\n");
        }
    else if (heart_rate>heart_rate_high*0.85)
        {
            printf("请放慢脚步。\n");
            music -= 20;
            playsound (music);
        }
    else if (heart_rate>heart_rate_high*0.75)
        {
            printf ("Come on，请加快节奏！\n");
            music += 20;
            playsound (music);
        }
    else
        {
            playsound (music);
        }

    return 0;
}