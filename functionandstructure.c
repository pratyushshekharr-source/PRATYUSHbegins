// # include <stdio.h>
// # include <string.h>
// struct student{
// char name[100];
// int roll;
// float percentage;
// };
// void printinfo(struct student s1);

// int main(){
//   struct student s1;
//   s1.roll = 10;
//   strcpy(s1.name,"Pratyush Shekhar");
//   s1.percentage = 92.0;
// printinfo(s1); //it is call by value so it will not change the value of s1 in main function
// }

// void printinfo(struct student s1){
//   printf("Name = %s\n",s1.name);
//   printf("Roll no = %d\n",s1.roll);
//   printf("Percentage = %f\n",s1.percentage);
// }