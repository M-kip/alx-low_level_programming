## ALX SE Program

### 0x15-file_io

### Learning Objectives

- Look for the right source of information online
- How to create, open, close, read and write files 
- What are file descriptors 
- What are the 3 standard file descriptors, what are their purpose and what are their POSIX names 
- How to use the I/O system calls open, close, read and write 
- What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR 
- What are file permissions, and how to set them when creating a file with the open system call 
- What is a system call 
- What is the difference between a function and a system call 

-----
### Create executable 
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 'file_name' -o 'executable'

### source code

| FILE | DESCRIPTION |
| ---- | ----------- |
| 0-read_textfile.c | reads text from a file and prints to std output |
| 1-create_file.c | creates a file with the right perms |
| main.h | file containing function descriptions and symbolic constants |