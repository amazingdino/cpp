#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Person
{
    char name[100];
    int age;
    bool gender;
};

int main(void)
{
    int N, i;

    printf("Type the amount of people you would like to input: ");
    scanf("%d", &N);

    struct Person *human = (struct Person *)malloc(sizeof(struct Person) * N);

    printf("Type the person's name, age and 1 for female, 0 for male: ");
    for(i=0; i<N; i++)
    {
        scanf("%s %d %d", &human[i].name, &human[i].age, &human[i].gender);
    }

    for(i=0; i<N; i++)
    {
        if(human[i].gender)
        {
            printf("Female\n");
        }
        else
        {
            printf("Male\n");
        }
        printf("On the %d index, person name is %s and his/her age is %d\n", i, human[i].name, human[i].age);
    }

    // printf("Type your person's name and age: ");
    // scanf("%s %d\n", human.name, human.age);

    // printf("The first person's name is %s and his/her age is %d\n", human.name, human.age);
  
    free(human);

    return 0;
}