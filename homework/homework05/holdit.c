#include <time.h>
#include <stdio.h>
/*
 * helper method to output instructions for the user for next time
 */
void instructions()
{
    printf("\n\n   This is program will time how long you can hold your breath\n");
    printf("   Take a deep breath, then press the 'Enter' key.\n");
    printf("   When you absolutely have to exhale, press the enter key again.\n");
    printf("   The duration will be displayed in minutes and seconds.\n");
    printf("\n\n");
}

void countBreathe() {
    printf("   Recording time now. Press Enter when you can't hold your breath any longer.\n");
    while(1) {
        if(getchar() == '\n') {
           break;
        }
    }
}

int main(int argc, char *argv[]) {
    time_t startTime, endTime;
    double totalTime, minutes, seconds;

    instructions();

    //check if enter key is pressed
    if(getchar() == '\n') {
        startTime = time(NULL);
        countBreathe();
        endTime = time(NULL);
        totalTime = endTime - startTime;
        minutes = totalTime / 60;
        printf("You held your breathe for %f minutes or %f seconds \n", minutes, totalTime);
        printf("       ");
    }

    return 0;
}