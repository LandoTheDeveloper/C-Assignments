#include <stdio.h>
#include <string.h>
#include <ctype.h>

void encryption(char word[100]){
    printf("Original word: %s\n", word);
    char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char encoded[] =  {'h', 'i', 'v', 'j', 'k', 'w', 'l', 'a', 'm', 'y', 'n', 'b', 'x', 'o', 'z', 'c', 't', 'p', 'u', 'd', 'q', 's', 'r', 'e', 'g', 'f'};
    
    for (int i = 0; i < strlen(word); i++){
        for (int j = 0; j < 26; j++){
            if (word[i] == alphabet[j]){
                word[i] = encoded[j];
                break;
            }
        }
    }
    printf("Encoded word: %s\n", word);
}

void decryption(char word[100]){
    char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char encoded[] =  {'h', 'i', 'v', 'j', 'k', 'w', 'l', 'a', 'm', 'y', 'n', 'b', 'x', 'o', 'z', 'c', 't', 'p', 'u', 'd', 'q', 's', 'r', 'e', 'g', 'f'};
    
    for (int i = 0; i < strlen(word); i++){
        for (int j = 0; j < 26; j++){
            if (word[i] == encoded[j]){
                word[i] = alphabet[j];
                break;
            }
        }
    }
    printf("Decoded word: %s\n", word);
}

int main(){
    int running = 1;
    while (running){
        char secret_word[100];
        printf("Secret word: ");
        scanf("%s", &secret_word);
        for(int i = 0; secret_word[i]; i++){
          secret_word[i] = _tolower(secret_word[i]);
        }
        int choice;
        printf("1. Encrypt or 2. Decrypt? ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                encryption(secret_word);
                break;
            case 2:
                decryption(secret_word);
                break;
        }
    }
    return 0;
}
