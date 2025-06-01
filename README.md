## ✅ **8.2 Lab – Using `malloc()` in C (GitHub Codespaces Edition)**

---

### **Introduction**

In C, dynamic memory allocation allows programs to request memory during runtime instead of relying on fixed-size variables or arrays. The `malloc()` function (short for "memory allocation") is used to allocate a specified number of bytes from the heap. It returns a pointer to the first byte of the allocated memory block. This lab will walk you through the use of `malloc()` to create a dynamic array, store user input, and perform operations on that data.

---

### **Objectives**

By the end of this lab, you will:

1. Understand how to use `malloc()` to allocate memory dynamically.
2. Use pointers to access and manipulate dynamically allocated memory.
3. Properly release memory using `free()`.
4. Compile and run C programs in GitHub Codespaces.

---

## 🧪 **Lab Steps**

---

### **Step 1: Open GitHub Codespaces**

1. Go to your GitHub repository.
2. Click **Code > Codespaces > Create codespace on main**.
3. Wait for the development environment (VS Code in browser) to launch.

---

### **Step 2: Create a New C File**

1. In the **Explorer pane**, click **New File** and name it: `malloc_example.c`
2. Paste the following code:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numbers;
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory using malloc
    numbers = (int *)malloc(n * sizeof(int));

    // Check if malloc returned NULL (allocation failed)
    if (numbers == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Read values into the allocated memory
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Display the entered values
    printf("\nYou entered:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }

    // Calculate the sum
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += numbers[i];
    }
    printf("\nSum of all elements: %d\n", sum);

    // Free the allocated memory
    free(numbers);

    return 0;
}
```

---

### **Step 3: Compile the Program**

In the terminal at the bottom, type:

```bash
gcc malloc_example.c -o malloc_example
```

---

### **Step 4: Run the Program**

```bash
./malloc_example
```

**Sample Interaction:**

```
Enter the number of elements: 4
Enter 4 integers:
Element 1: 5
Element 2: 10
Element 3: 15
Element 4: 20

You entered:
5 10 15 20 
Sum of all elements: 50
```

---

### **Step 5: Experiment**

Try entering different values for `n`, including:

* Very large numbers (e.g., 10000) to see the dynamic nature of `malloc()`
* Invalid or negative values to test your input-handling logic (optional enhancement)

---

### **Summary**

In this lab, you learned how to:

* Dynamically allocate memory using `malloc()`.
* Use pointers to store and access user data.
* Perform operations (like summing values) on dynamically allocated memory.
* Properly free memory with `free()` to avoid memory leaks.

Dynamic memory allocation is essential for building flexible, efficient C programs, especially when the size of data isn't known at compile time.
