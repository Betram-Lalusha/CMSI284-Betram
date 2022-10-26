#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int inWord = 0;
    char currentChar;
    int wordCount = 0;
    char filename[250];

    if (argc < 2)
    {
        printf("   Enter a file name: ");
        fflush(stdout);
        scanf("%s", filename);
        fflush(stdout);
    }
    else
    {
        strcpy(filename, argv[1]);
        fflush(stdout);
    }
    printf(" reading contents of %s.\n", filename);

    /*
     * open the input file and check open error
     */
    FILE *in = fopen(argv[1], "r");
    if (!in)
    {
        printf("File %s does not exist\n", filename);
        return 2;
    }

    while ((currentChar = fgetc(in)) != EOF) {
        //detect white space
        if(currentChar == ' ' || currentChar == '\t' || currentChar == '\0' || currentChar == '\n') {
            if (inWord) {
                inWord = 0;
                wordCount++;
            }

        } else {
           inWord = 1;
        }
    }

    printf("number of words in file %s is: %d", filename, wordCount);

    fclose(in);

    exit(0);
}