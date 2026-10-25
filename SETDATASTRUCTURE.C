#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main() {
 int set1[30], set2[30], s1, s2;
 int uni[30], inter[30], diff[30];
 int i, ch;
 clrscr();
 printf("Enter no. of elements in 1st set: ");
 scanf("%d", &s1);
 printf("Enter elements in 1st set (only 0s & 1s): ");
 for (i = 0; i < s1; i++) {
 scanf("%d", &set1[i]);
 }
 printf("\nEnter no. of elements in 2nd set: ");
 scanf("%d", &s2);
 printf("Enter elements in 2nd set (only 0s & 1s): ");
 for (i = 0; i < s2; i++) {
 scanf("%d", &set2[i]);
 }
 printf("\n1. UNION");
 printf("\n2. INTERSECTION");
 printf("\n3. DIFFERENCE");
 printf("\n4. EXIT\n");
 while (1) {
 printf("\nEnter choice: ");
 scanf("%d", &ch);
 switch (ch) {
 case 1:
 if (s1 == s2) {
 printf("\nElements after Union operation: ");
 for (i = 0; i < s1; i++) {
 uni[i] = set1[i] | set2[i];
 printf("%d ", uni[i]);
 }
 printf("\n");
 } else {
 printf("Set union not possible as sets are of differentsize\n");
 }
 break;
 case 2:
 if (s1 == s2) {
 printf("\nElements after intersection operation: ");
 for (i = 0; i < s1; i++) {
 inter[i] = set1[i] & set2[i];
 printf("%d ", inter[i]);
 }
 printf("\n");
 } else {
 printf("Set intersection not possible as sets are of differentsize\n");
 }
 break;
 case 3:
 if (s1 == s2) {
 printf("\nElements after Difference Operation: ");
 for (i = 0; i < s1; i++) {
 diff[i] = set1[i] & (~set2[i] & 1);
 printf("%d ", diff[i]);
 }
 printf("\n");
 } else {
 printf("Set difference not possible as sets are of differentsize\n");
 }
 break;
 case 4:
 exit(0);
 default:
 printf("\nWrong choice, please select a valid choice\n");
 break;
 }
 }
}
