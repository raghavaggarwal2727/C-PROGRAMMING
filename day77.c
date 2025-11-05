#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inFile, *outFile;
    char ch;

    // Open input file for reading
    inFile = fopen("input.txt", "r");
    if (inFile == NULL) {
        printf("Error: Cannot open input.txt\n");
        return 1;
    }

    // Open output file for writing
    outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        printf("Error: Cannot open output.txt\n");
        fclose(inFile);
        return 1;
    }

    // Read and convert characters
    while ((ch = fgetc(inFile)) != EOF) {
        if (islower(ch))
            ch = toupper(ch);
        fputc(ch, outFile);
    }

    printf("Conversion complete. Check output.txt\n");

    fclose(inFile);
    fclose(outFile);
    return 0;
}