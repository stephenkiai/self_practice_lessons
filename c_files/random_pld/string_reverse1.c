    #include<stdio.h>  
    #include <string.h> 

    int main()
    {    
        int i;
    char ch[20]={'j', 'a', 'v', 'a', 't', 'p', 'o', 'i', 'n', 't', '\0'};    
       printf("Length of string is: %ld\n",strlen(ch));   

        printf("When string is reversed :\t");
       for (i = strlen(ch); i >= 0; i--)
       {
            printf("%c", ch[i]);
       } 
       printf("\n");
     return 0;    
    }    