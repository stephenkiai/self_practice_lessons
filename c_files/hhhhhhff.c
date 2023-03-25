    #include <stdio.h>  
    #include <string.h>  
       
    int main() {  
        char a[] = {"Hello from JournalDev"};  
       
        printf("a = %s\n", a);  
           
        printf("Filling the first 5 characters a with 'H' using memset\n");  
           
        memset(a, 'H', 5 * sizeof(char));  
           
        printf("After memset, a = %s\n", a);  
       
        return 0;  
    }  