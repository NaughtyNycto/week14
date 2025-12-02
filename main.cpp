#include <iostream>
using namespace std;

/// Problem 1
// void swap(int* a, int* b, int* c) {
//     int temp = *a;
//     *a = *c;
//     *c = *b;
//     *b = temp;
// }
//
// int main() {
//     int a, b, c;
//
//     cout << "Enter a, b, c: ";
//     cin >> a >> b >> c;
//
//     swap(&a, &b, &c);
//
//     cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
// }

/// Problem 2
// int cmpAsc(int* a, int* b) {
//     return (*a > *b);
// }
//
// int cmpDesc(int* a, int* b) {
//     return (*a < *b);
// }
//
// void sortWithComparator(int* arr, int n, int (*cmp)(int*, int*)) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (cmp(&arr[j], &arr[j + 1])) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }
//
// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//
//
//     cout << "Ascending: ";
//     sortWithComparator(arr, n, cmpAsc);
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;
//
//     cout << "Descending: ";
//     sortWithComparator(arr, n, cmpDesc);
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }

/// Problem 4
// int main() {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//
//     cout << "Enter the gap between numbers: ";
//     int k;
//     cin >> k;
//
//     int sum = 0;
//     int* ptr = arr;
//
//     while (ptr < arr + n) {
//         sum += *ptr;
//         ptr = ptr + k;
//     }
//
//     cout << sum << endl;
// }

/// Problem 5
// int main() {
//     int n;
//     cin >> n;
//
//     int arr[n+1];
//
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//
//     int v;
//     cout << "v = ";
//     cin >> v;
//
//     int* ptr = arr + n;
//
//     while (ptr > arr && *(ptr - 1) > v) {
//         *ptr = *(ptr - 1);
//         ptr--;
//     }
//
//     *ptr = v;
//
//     for (int i = 0; i < n + 1; i++) {
//         cout << arr[i] << " ";
//     }
// }

/// Problem 6
// void findSubarray(int* arr, int n, int target) {
//     int* start = arr;
//     int* end = arr;
//     int sum = *start;
//
//     while (start < arr + n && end < arr + n) {
//
//         if (sum == target) {
//             cout << "[ ";
//             for (int* p = start; p <= end; p++)
//                 cout << *p << " ";
//             cout << "]";
//             return;
//         }
//
//         if (sum < target) {
//             end++;
//             if (end < arr + n)
//                 sum += *end;
//         }
//         else {  // sum > target
//             sum -= *start;
//             start++;
//
//             // Important: if start passes end, reset window
//             if (start > end) {
//                 end = start;
//                 sum = *start;
//             }
//         }
//     }
//
//     cout << "No subarray found";
// }
//
// int main() {
//     int arr[] = {2, 3, 5, 1, 4};
//     int n = 5;
//     int target = 8;
//
//     findSubarray(arr, n, target);
// }

/// Problem 7
// int main() {
//     int m, n;
//     cin >> m >> n;
//
//     int **a = new int*[m];
//     for (int i = 0; i < m; i++)
//         a[i] = new int[n];
//
//     for (int i = 0; i < m; i++)
//         for (int j = 0; j < n; j++)
//             cin >> a[i][j];
//
//     int **t = new int*[n];
//     for (int i = 0; i < n; i++)
//         t[i] = new int[m];
//
//         for (int i = 0; i < m; i++)
//         for (int j = 0; j < n; j++)
//             t[j][i] = a[i][j];
//
//     cout << "Original:\n";
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++)
//             cout << a[i][j] << " ";
//         cout << "\n";
//     }
//
//     cout << "Transposed:\n";
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++)
//             cout << t[i][j] << " ";
//         cout << "\n";
//     }
// }

/// Problem 10
// void removeSpaces(char* s) {
//     char* read = s;
//     char* write = s;
//
//     while (*read != '\0') {
//         if (*read != ' ') {
//             *write = *read;
//             write++;
//         }
//         read++;
//     }
//
//     *write = '\0';
// }
//
// int main() {
//     char str[100];
//     cin.getline(str, 100);
//
//     removeSpaces(str);
//
//     cout << str;
//     return 0;
// }
