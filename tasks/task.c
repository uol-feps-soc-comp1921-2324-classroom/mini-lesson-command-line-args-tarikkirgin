#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int string_is_number(char* string)
{
    for (size_t i = 0; i < strlen(string); i++)
    {
        if(!isdigit(string[i]))
        {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char *argv[]) {
    if(argc != 3 || !string_is_number(argv[1]) || !string_is_number(argv[2]))
    {
        printf("Usage: task <integer> <integer>\n");
        return 1;
    }
    
    int num1, num2;
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    // Calculate and print the sum
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}
