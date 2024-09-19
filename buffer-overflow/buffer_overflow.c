// #include <stdio.h>
// #include <string.h>

// void vulnerable_function(char *user_input) {
//     char buffer[10];  // A small buffer of 10 bytes

//     // Copying user input into buffer without checking the length
//     strcpy(buffer, user_input);  

//     printf("User input: %s\n", buffer);
// }

// int main(int argc, char *argv[]) {
//     if (argc < 2) {
//         printf("Usage: %s <input>\n", argv[0]);
//         return 1;
//     }

//     // Call the vulnerable function with user-provided input
//     vulnerable_function(argv[1]);

//     return 0;
// }


#include <stdio.h>
int main(){
    char a[15];
    // fgets(a,sizeof(a),stdin);
    gets(a);
    // fgets(a,sizeof(a),stdin);

    printf("s is %s\n",a);
}