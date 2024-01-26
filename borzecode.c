//borzecode


#include <stdio.h>
#include <string.h>

int main() {
    char bc[201];
    scanf("%s", bc);

    int length = strlen(bc);
    char t[3 * length]; 
    int j = 0;

    for (int i = 0; i < length; ++i) 
    {
        if (bc[i] == '.') {
            t[j++] = '0';
    } 
        else if (bc[i] == '-' && bc[i + 1] == '.') 
        {
            t[j++] = '1';
            ++i; 
        }
        else if (bc[i] == '-' && bc[i + 1] == '-') {
            t[j++] = '2';
            ++i; 
        }
    }
    t[j] = '\0'; 

    printf("%s\n", t);

    return 0;
}
