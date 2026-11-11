#include <stdio.h>
void main()
{
    FILE *fp;
    char name[300];

   

    // 1. Writing data into file
    fp = fopen("feedback.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened");
      
        return;
    }

    fprintf(fp, "DAY 5: All c programming classes I attended till now were'nt that much helpful to me, Our C programming sir doesn't teaches that much clearly. I learnt only some concepts like loops, operations also I'm not that much clear with it. ");

    fclose(fp);

    printf(" written successfully\n");


    // 2. Appending data into file
    fp = fopen("feedback.txt", "a");

    if (fp == NULL)
    {
        printf("File cannot be opened");
       
        return;
    }

    fprintf(fp, "\nDAY 30:The C programming classes which I attend now are much more helpful than previously, after Aravinth Sir assigned as our C programming sir I benifited so much, also I learnt new topics like Pointers, File Handling,etc. ");

    fclose(fp);

    printf("Data appended successfully\n");


    // 3. Reading data from file
    fp = fopen("student.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened");
       
        return;
    }

    printf("\nFile Contents:\n");

    while (fgets(name, sizeof(name), fp) != NULL)
    {
        printf("%s", name);
    }

    fclose(fp);


}
