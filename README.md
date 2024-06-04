# get_next_line

**A custom C function for reading files line by line.**

This project provides a `get_next_line` function written in C to read content from a file descriptor one line at a time. It integrates seamlessly with the Libft library, a standard library commonly used in 42 C projects.

**Description:**

* Reads a single line from a file specified by a file descriptor.
* Supports iterative reading of the entire file content by calling the function multiple times.
* Returns `NULL` when the end of the file is reached, indicating no more data to read.

**How to Use:**

1. **Include the Header:** In your C code, include the `get_next_line.h` header file to utilize the function.
2. **Function Call:** Call `get_next_line(int fd)` where `fd` is the file descriptor of the file you intend to read.
3. **Line Management:** The function returns a character pointer (`char *`) to the read line. You are responsible for managing the memory allocated for the returned line (typically using `free`).
4. **Looping:** Implement a loop that calls `get_next_line` repeatedly to iterate through the entire file line by line. The loop continues until `NULL` is returned, signifying the end of the file.

**Example Usage (in `main.c`):**

```c
#include "get_next_line.h"

int main() {
  int fd = open("myfile.txt", O_RDONLY); // Replace "myfile.txt" with your file path
  char *line;

  while ((line = get_next_line(fd)) != NULL) {
    // Process the line
    printf("%s", line);
    free(line); // Free the memory allocated for the line
  }

  close(fd);
  return 0;
}
```
