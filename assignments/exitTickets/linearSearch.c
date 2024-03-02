/* if target is found, return the target. Otherwise, return -1 */
int linearSearch(int *numbers, int target, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == target)
        {
            return target;
        }
    }
    return -1;
}

int main(int argc, char *argv[])
{
    int numbers[] = {1, 2, 3, 4, 5};
    int target = 3;
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int result = linearSearch(numbers, target, size);
    printf("%d\n", result);
    return 0;
}