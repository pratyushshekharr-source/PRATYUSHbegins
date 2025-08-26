// # include <stdio.h>
// int swap(int a , int b);
// int _swap(int* a, int * b);
// int main(){
//   int x = 10 ;
//   int y = 30 ;
//   swap(x,y);// {call by value} so it will not change the value of x and y in main function 
//   printf("x = %d & y = %d \n",x,y);

//   _swap(&x,&y);// {call by reference} so it will change the value of x and y in main function
//   printf("x = %d & y = %d \n",x,y);
//   return 0;
// }
// // call by value
// int swap(int a , int b){
//   int t = a;
//   a = b;
//   b = t;
//   printf("a = %d & b = %d \n",a,b); 
//   return 0;
// }
// // call by reference
// int _swap(int* a, int * b){
//   int t = *a;
//   *a = *b;
//   *b = t; 
//   printf("\na = %d & b = %d \n",*a,*b);
//   return 0;
// }
