#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  

void update_timer(int minutes, int seconds) {
    printf("\033[H\033[J");
	
    printf("KEEP THIS WINDOW OPEN UNTIL THE TIMER ENDS\n(GET FUCKED DISCORD)\nTime Remaining: %02d:%02d\n", minutes, seconds);
}

int main() {
    int total_seconds = 15 * 60; 
    int minutes, seconds;

    while (total_seconds >= 0) {
        minutes = total_seconds / 60;
        seconds = total_seconds % 60;

        update_timer(minutes, seconds);

        sleep(1);

        total_seconds--;
    }


    printf("\033[H\033[J");  
    printf("FINISHED! ENJOY UR 5000 ORBS !!");

    return 0;
}

