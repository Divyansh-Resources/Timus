#include <cstdio>

int main()
{
    const int MAX_LENGTH = 100 + 5;
    char word[MAX_LENGTH];
    scanf("%s", word);

    int numbers[MAX_LENGTH], i;
    for(i = 0; word[i] != '\0'; i++)
        numbers[i] = word[i] - 'a' + 26*(i > 0);

    for( ; i >= 1; i--)
        numbers[i] = (numbers[i] - numbers[i - 1] + 26)%26;

    numbers[0] = (numbers[0] - 5 + 26)%26;

    for(int i = 0; word[i] != '\0'; i++)
        word[i] = 'a' + numbers[i];

    printf("%s\n", word);
    return 0;
}
