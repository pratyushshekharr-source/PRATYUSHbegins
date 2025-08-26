// #include <stdio.h>
// #include <string.h>
// struct student {
//   char name[100];
//   int roll;
//   float percentage;
// };

// int main() {
//   struct student s1;
//   s1.roll = 10;
//   strcpy(s1.name, "Pratyush Shekhar");
//   s1.percentage = 92.8;
//   struct student *ptr = &s1; // pointer stores the address of s1
//   printf("Roll no with *ptr is : %d\n",(*ptr).roll); // (*ptr) means the value at address of ptr
//   printf("Roll no with arrow is : %d\n", ptr->roll);
//    printf("Roll no with arrow is : %s\n", ptr->name);
//    printf("Roll no with arrow is : %f\n", ptr->percentage);
//   return 0;
// }