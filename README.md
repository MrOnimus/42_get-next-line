# 42_get-next-line
This project is a very useful one. The goal is to
make a function which reads a single line from a file descriptor, assuming it
isn't being tampered with in between calls to the function.

Mine works with multiple file descriptors. It also has no memory leaks!

## Usage
GNL will automatically free appropriately whenever it reaches EOF.
### To read one line
```
char *line;

get_next_line(fd, &line); // To get a single line
...
ft_strdel(&line);         // You should free after you're done using your line
```

### To read a whole file
```
while (get_next_line(fd, &line))
{
	ft_putstr(line);  // Here we'll just output line that has been read
	
  ...               // Here we do something with line
  	
  ft_strdel(&line); // Free the line to avoid leaking memory
}
```
