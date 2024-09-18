#include <stdio.h>

int main() {
    char line[1000];
    FILE *hand;//FILE as a typedef

    // Open the file in read mode
    hand = fopen("romio.txt", "r"); // Use double quotes here
    
    //  print each line from the file
    while (fgets(line,1000, hand) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(hand);

    return 0; // Return with success code
}
