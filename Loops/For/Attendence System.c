//Author: Luqman Khan
#include <stdio.h>
int main(){
    int num, present_students = 0, absent_students = 0, count;

    printf("Total students in the class: ");
    scanf("%d", &num);

    for (int i = 1;i <=num; i++){
        printf("Student %d : ", i);
        scanf(" %c", &count);

        if (count == 'P'||count == 'p'){
            present_students++;
        } else if (count == 'A'||count == 'a'){
            absent_students++;
        } else{
            printf("Invalid input!\n");
        }
    }

    printf("Present students: %d\n", present_students);
    printf("Absent students: %d\n",absent_students );

    return 0;
}
