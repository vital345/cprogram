#include<stdio.>

void addOne(int* ptr) {
  (*ptr)++; // adding 1 to *ptr
}

int main()
{
  int* p, i = 10;
  p = &i;
  addOne(p);

  printf("%d", *p); // 11
  return 0;
}

// Access Array Elements Using Pointers

#include <stdio.h>
int main() {
    int data[5];

    printf("Enter elements: ");
    for (int i = 0; i < 5; ++i)
        scanf("%d", data + i);

    printf("You entered: \n");
    for (int i = 0; i < 5; ++i)
        printf("%d\n", *(data + i));
    return 0;
}

//largest element in an array
#include <iostream>
using namespace std;

int main()
{
    int i, n;
    float arr[100];

    cout << "Enter total number of elements(1 to 100): ";
    cin >> n;
    cout << endl;

    // Store number entered by the user
    for(i = 0; i < n; ++i)
    {
       cout << "Enter Number " << i + 1 << " : ";
       cin >> arr[i];
    }

    // Loop to store largest number to arr[0]
    for(i = 1;i < n; ++i)
    {
       // Change < to > if you want to find the smallest element
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    cout << "Largest element = " << arr[0];

    return 0;
}


