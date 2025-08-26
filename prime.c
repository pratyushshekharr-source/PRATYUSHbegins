// #include <stdio.h>
// int main() {
//   int n, c = 1;
//   printf("Enter the value of n : ");
//   scanf("%d", &n);
//   if (n <= 1) {
//     c = 0;
//   } 
//   else {
//     for (int i = 2; (i <= n / 2); i++) {
//       if (n % i == 0) {
//         c = 0;
//         break;
//       }
//     }
//   }
//   if (c == 1) {
//     printf("%d in a prime number ", n);
//   } else {
//     printf("%d is not a prime number ", n);
//   }
//   return 0;
// }