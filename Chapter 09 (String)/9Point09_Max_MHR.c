// Implemented by Mehedi Hasan Rifat on (13.04.23) & (14.04.23)
// Include the necessary header files
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 1002         // Define a constant for maximum length of string
void format_string(char str[]); // Declare the function prototype
int main()
{
    char str[MAX_LENGTH];          // Declare a character array to store the string
    fgets(str, MAX_LENGTH, stdin); // Read the string from user input
    printf("\n");
    format_string(str); // Call the function to format the string
    printf("\n");
    return 0;
}
void format_string(char str[])
{
    int is_word_started = 0;             // Flag to check if a word has started
    str[strcspn(str, "\n")] = 0;         // Remove the trailing new line character
    for (int i = 0; str[i] != '\0'; i++) // Loop through each character in the string
    {
        if (is_word_started == 0) // Check if a word has started
        {
            if (str[i] >= 'a' && str[i] <= 'z') // Check if the character is lowercase
            {
                str[i] -= 32;        // Convert the character to uppercase
                is_word_started = 1; // Set the flag to indicate that a word has started
            }
            else if (str[i] >= 'A' && str[i] <= 'Z') // Check if the character is uppercase
            {
                is_word_started = 1; // Set the flag to indicate that a word has started
            }
            else if (str[i] >= '0' && str[i] <= '9')
            {
                is_word_started = 1;
            }
        }
        else
        {
            if (str[i] >= 'A' && str[i] <= 'Z') // Check if the character is uppercase
            {
                str[i] += 32; // Convert the character to lowercase
            }
        }

        if (str[i] != ' ') // Check if the character is not a space
        {
            if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z' || str[i] >= '0' && str[i] <= '9') // Check if the character is an alphabet or a number
            {
                printf("%c", str[i]); // Print the character
                continue;             // Skip the rest of the loop
            }
            continue; // Skip the rest of the loop
        }

        if (is_word_started == 1)
        {
            printf("\n");        // Print a new line
            is_word_started = 0; // Reset the flag to indicate that a word has ended
        }
    }
}
