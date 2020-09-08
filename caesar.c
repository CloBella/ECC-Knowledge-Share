#include <stdio.h>

int main (void){
    char message[1000];
    char c;
    int key;
    printf("Enter a message to encrypt: ");
    fgets(message, 10000, stdin);
    printf ("Enter the key you want to use: ");
    scanf("%d", &key);
    for(int i = 0; message[i] != '\0'; i++){
        c = message[i];
        //If the letter is between a and z
        if (c >= 'a' && c <= 'z'){
            c = c + key;
            //If the letter once shifted is past z, wrap it around to the beginning
            if (c > 'z'){
                c = c - 'z' + 'a' - 1;
            }
            message[i] = c;
            
        } else if (c >= 'A' && c <= 'Z'){
            c = c + key;
            if (c > 'Z'){
                c = c - 'z' + 'a' - 1;
            }
            message[i] = c;
        }
    }
    printf ("The encrypted message is : %s", message);
    return 0;
}
