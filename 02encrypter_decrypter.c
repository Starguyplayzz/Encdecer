#include <stdio.h>
#include <string.h>

char *encrypter(char str[])
{
    int temp;
    for (int i = 0; i < strlen(str) / 2; i++)
    {
        temp = str[i];
        str[i] = str[strlen(str) - i - 1];
        str[strlen(str) - i - 1] = temp;
    }

    int n = 0;
    while (str[n] != '\0')
    {
        str[n] += 4;
        n++;
    }
    return str;
}

char *decrypter(char str[])
{
    int temp;
    for (int i = 0; i < strlen(str) / 2; i++)
    {
        temp = str[i];
        str[i] = str[strlen(str) - i - 1];
        str[strlen(str) - i - 1] = temp;
    }

    int n = 0;
    while (str[n] != '\0')
    {
        str[n] -= 4;
        n++;
    }
    return str;
}

int main()
{
    int task;
    printf("what do you want to do ? \n 1. Encryption \t 2. Decryption \n\n Enter what task you want to perform ");
    scanf("%d", &task);
    getchar(); // scanf or fgets ek sung use krte hai toh ek error aata hai newline/input buffer problem isme scanf jo \n chodta hai fget usko utha leta hai toh siha input mai \n chle jaa rha or input le nhi rha or code end ho jaa rha hai isliye yeh use kiya hai jisse jo bhi extra buffer me hai use kha jaaye yeh 
    if (task == 1)
    {
        printf("Enter you message to encrypt \n");
        char str[1000] = "";
        fgets(str, 1000, stdin);
        str[strcspn(str, "\n")] = '\0'; //fgets ke baad enter dbate hai toh \n ko bhi as input utha leta hai usko hatane ke liye we use strcspn string  complement span usecase is like this strcspn(strname, "char") char me jisko target krna hai woh usueally itna dalne se uska index no. aata hai we  are giving that index no. a null char so uski jagah string end ho jaye
        printf("\"%s\"", encrypter(str));
    }
    else
    {
        printf("Enter you message to decrypt \n");
        char str2[1000] = "";
        fgets(str2, 1000, stdin);
        str2[strcspn(str2, "\n")] = '\0';
        printf("\"%s\"", decrypter(str2));
    }

    return 0;
}