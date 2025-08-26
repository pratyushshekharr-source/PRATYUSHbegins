// #include <stdio.h>
// int main() {
//   int arr1[3][3], arr2[3][3], arr3[3][3], i, j, k;
//   printf("Enter the value in first matrix\n");
//   for (i = 0; i < 3; i++) {
//     for (j = 0; j < 3; j++) {
//       printf("Enter elements for %d rows and %d columns : ", i + 1, j + 1);
//       scanf("%d", &arr1[i][j]);
//     }
//   }
//   printf("Enter the value in second matrix\n");
//   for (i = 0; i < 3; i++) {
//     for (j = 0; j < 3; j++) {
//       printf("Enter elements for %d rows and %d columns : ", i + 1, j + 1);
//       scanf("%d", &arr2[i][j]);
//     }
//   }
//   for (int i = 0; i < 3; i++) {
//     for (int j = 0; j << 3; j++) {
//       printf("%d\t\n", arr1[i][j]);
//     }
//   }
//   for (i = 0; i < 3; i++) {
//     for (j = 0; j < 3; j++) {
//       printf("%d\t", arr1[i][j]);
//     }
//     printf("\n");
//   }
//   printf("\n");
//   for (i = 0; i < 3; i++) {
//     for (j = 0; j < 3; j++) {
//       printf("%d\t", arr2[i][j]);
//     }
//     printf("\n");
//   }
//   for (i = 0; i < 3; i++) {
//     for (j = 0; j < 3; j++) {
//       arr3[i][j] = 0;
//       for (k = 0; k < 3; k++) {
//         arr3[i][j] += arr1[i][k] * arr2[k][j];
//       }
//     }
//   }
//   printf("\nValue of 3rd matrix \n");
//   for (i = 0; i < 3; i++) {
//     for (j = 0; j < 3; j++) {
//       printf("%d\t", arr3[i][j]);
//     }
//     printf("\n");
//   }
//   return 0;
// }