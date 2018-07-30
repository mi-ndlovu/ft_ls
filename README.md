# ft_ls

The project ft_ls opens the path to the Unix branch of the sphere system. For the first
time, you will have to face the one libc functions that will allow you to do other things
than just read or write on a file descriptor (this is to simplify of course). You will discover
a sub-system of functions of operating system’s API, the associated data structures, as
well as the management of memory allocation and the associated data.
ft_ls is also a great opportunity to think about the structure of your code before you
even start writing your code. ft_ls’ bad reputation is due to students discovering too
late in the game that their (lack of) initial design is preventing them from finishing their
project without refactorizing a great part of their code. I admit that it can be frustrating...
To conclude, ft_ls is another opportunity to add to your libft new practical functions.
Browsing a file and identifying directories is quite common in programming. Remember
that you you will have to do it on many future occasions. Improving your libft
today will save you time tomorrow.


Allowed to use the following functions:
◦ write
◦ opendir
◦ readdir
◦ closedir
◦ stat
◦ lstat
◦ getpwuid
◦ getgrgid
◦ listxattr
◦ getxattr
◦ time
◦ ctime
◦ readlink
◦ malloc
◦ free
◦ perror
◦ strerror
◦ exit