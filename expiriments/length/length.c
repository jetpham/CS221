#include <stdio.h>

int length(char *nums)
{
    int length = 0;
    while (nums[length] != '\0')
    {
        length += 1;
    }
    return length;
}

int main(int argc, char *argv[])
{
    char *nums[3] = {'1','2,','3','\0'};
    printf("length: %d", length(nums));
}
