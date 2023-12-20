#include <iostream>

std::string encrypt()
{
  std::string msg
  char ch;

    int key;

    printf("Enter a message to encrypt: ");

    scanf("%s", msg);

    printf("Enter the key: ");

    scanf("%d", & key);

    // Visiting character by character.

    for (int i = 0; msg[i] != '\0'; ++i) {

        ch = msg[i];
        // Check for valid characters.
        if (isalnum(ch)) {

            //Lowercase characters.
            if (islower(ch)) {
                ch = (ch - 'a' + key) % 26 + 'a';
            }
            // Uppercase characters.
            if (isupper(ch)) {
                ch = (ch - 'A' + key) % 26 + 'A';
            }

            // Numbers.
            if (isdigit(ch)) {
                ch = (ch - '0' + key) % 10 + '0';
            }
        }
        // Invalid character.
        else {
            printf("Invalid Message");
        }

        // Adding encoded answer.
        msg[i] = ch;

    }

    return msg
}

std::string decrypt()
{
   char msg[500],ch;

    int key;

    // Taking user input.

    printf("Enter a message to decrypt: ");

    scanf("%s", msg);

    printf("Enter the key: ");

    scanf("%d", & key);

    // Visiting each character.
    for (int i = 0; msg[i] != '\0'; ++i) {

        ch = msg[i];
        // Check for valid characters.
        if (isalnum(ch)) {
            //Lowercase characters.
            if (islower(ch)) {
                ch = (ch - 'a' - key + 26) % 26 + 'a';
            }
            // Uppercase characters.
            if (isupper(ch)) {
                ch = (ch - 'A' - key + 26) % 26 + 'A';
            }
            // Numbers.
            if (isdigit(ch)) {
                ch = (ch - '0' - key + 10) % 10 + '0';
            }
        }
        // Invalid characters.
        else {
            printf("Invalid Message");
        }
        // Adding decoded character back.
        msg[i] = ch;

    }

}
int main() {

    std::string encryption = encrypt();
    std::cout << " the encrypted message : " << encryption << std::endl;
    std::string decryption = decrypt();
    std::cout << " the decrypted message is : " << decryption << std::endl;
    return 0;
}

