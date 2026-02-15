for (int i = len - 1; i >= 0; i--)
    {
        arr[i] = temp % 10;
        temp /= 10;
    }

    if (is_palindrome(arr, len))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}

int is_palindrome(int arr[], int len)
{
    for (int i = #include <stdio.h>

int is_palindrome(int arr[], int len);

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int temp = n, len = 0;

    while (temp > 0)
    {
        len++;
        temp /= 10;
    }

    int arr[len];
    temp = n;0; i < len / 2; i++)
    {
        if (arr[i] != arr[len - 1 - i])
            return 0;
    }
    return 1;
}
