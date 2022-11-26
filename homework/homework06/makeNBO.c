#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int swapEndians(int value)
{
    int result;
	int leftmost_byte;
    int rightmost_byte;
	int left_middle_byle;
	int right_middle_byte;

	leftmost_byte = (value & 0x000000FF) >> 0;

	left_middle_byle = (value & 0x0000FF00) >> 8;

	right_middle_byte = (value & 0x00FF0000) >> 16;

	rightmost_byte = (value & 0xFF000000) >> 24;

	leftmost_byte <<= 24;

	left_middle_byle <<= 16;

	right_middle_byte <<= 8;

	rightmost_byte <<= 0;

	result = (leftmost_byte | left_middle_byle
			| right_middle_byte | rightmost_byte);

	return result;
}

// Driver Code
int main(int argc, char *argv[]) 
{

    if(argc < 2) {
        printf("agument needed");
        return -1;
    }

	int little_Endian = atoi(argv[1]);

	int result;

	result = swapEndians(little_Endian);

    printf("The argument supplied is %s\n", argv[1]);
    printf("The argument supplied is2 %x\n", little_Endian);
	printf("network byte order is %d",
		result);

	return 0;
}
