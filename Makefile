# tags to add to the compiling process
CFLAGS=-Wall -g

# list of all the files
files = main

# compiles all the .c files
all: $(files)

# clears all the created executables
clean :
	rm -f $(files)
