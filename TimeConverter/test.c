#include <stdio.h>

int main()
{
    int sekunden ;
    int minuten;
    int stunden;

    printf("Geben Sie ein Wie viele Sekunden sie konventieren wollen: \n");
    scanf("%d ",&sekunden);
    stunden = sekunden / 3600;
    minuten  = sekunden % 3600 / 60; 
    int sekundenAusgabe = sekunden % 3600 % 60;
    printf("Stunden sind : %d", stunden);
    printf("Minuten sind : %d",minuten);
     printf("Sekunden sind : %d",sekundenAusgabe);
}
