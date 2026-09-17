#include <stdio.h>

// Deallocation of memory
int main()
{
    char *str = "Hi Harry!";
    int a;
    int *ptr = (int *)malloc(a*sizeof(int));
    free(ptr);  // ptr now become a dangling pointer
    ptr = NULL; // ptr no longer dangling
}

// Returning local variables in function calls
int *myfunc()
{
    int a = 34;
    return &a;
}

int main()
{
    int *arr = myfunc();
    printf("%d", *arr);
    return 0;
}

// Variable going out of scope
int main()
{
    int *str;
    {
        int i = 0;
        str = &i;
    }

    printf("%d", *str);
    return 0;
}