#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

#define MAX_PASSWORD_LENGTH 256
#define FILE_PATH_LENGTH 256

char *clean_password(char *password) {
    // Remove extra characters from the password
    int j = 0;
    for (int i = 0; i < strlen(password); i++) {
        if (isalnum((unsigned char)password[i]) || strchr("!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~", password[i])) {
            password[j++] = password[i];
        }
    }
    password[j] = '\0';
    return password;
}

void brute_force_password(char *target_password, char *password_file) {
    FILE *file = fopen(password_file, "r");
    if (!file) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    printf("Brute-forcing the password %s:\n", target_password);

    char line[MAX_PASSWORD_LENGTH];
    int current_line_number = 0;
    while (fgets(line, sizeof(line), file)) {
        clean_password(line);

        printf("\033[2K\rTrying password: %s", line);
        fflush(stdout);

        printf("\n(Line %d)", ++current_line_number);
        usleep(1000);  // Very short delay for visual effect

        if (strcmp(line, target_password) == 0) {
            printf("\nPassword found: %s\n", line);
            fclose(file);
            return;
        }
    }

    printf("\nPassword not found. Reached end of file (Line %d).\n", current_line_number);
    fclose(file);
}

int main() {
    char target_password[MAX_PASSWORD_LENGTH];
    char password_file[FILE_PATH_LENGTH];

    printf("Enter the password to brute force: ");
    fgets(target_password, sizeof(target_password), stdin);
    target_password[strcspn(target_password, "\n")] = '\0';

    printf("Enter the path to the password file: ");
    fgets(password_file, sizeof(password_file), stdin);
    password_file[strcspn(password_file, "\n")] = '\0';

    brute_force_password(target_password, password_file);

    return 0;
}
