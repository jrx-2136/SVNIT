#include <stdio.h>

int main() {
    char str[] = "ABCDE";  // Traversing a string like in python
    int i,j,len = 5;           
    
    for (i = 1; i <= len; i++) 
	{
        for (j = 0; j < i; j++) {
            printf("%c", str[j]);
        }
        printf("\n");
    }
    
    return 0;
}

