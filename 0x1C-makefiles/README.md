<h1>Makefiles</h1>
<img src="https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/273/giphy-2.gif">
A makefile is a simple text file that contains a set of instructions for building an executable program from source code. It specifies the dependencies between source code files and the commands needed to compile them. When you run the "make" command, Makefile reads the rules and instructions and executes the necessary commands to build the desired target.

Makefiles are commonly used in software development to automate the build process. They allow developers to specify how to build a program, including compiling source code files, linking object files, and generating the final executable program. Makefiles can also be used to manage dependencies between files, so that only the necessary files are recompiled when a change is made to the source code.

The basic structure of a makefile consists of rules and dependencies. A rule defines the target file that is to be built, along with any prerequisites that must be met before the target can be built. A dependency specifies the files that the target depends on.

Here's an example makefile that shows the basic structure:
<div>
  <p style="color: blue">
    # Define the compiler and its options
    CC=gcc
    CFLAGS=-Wall -Wextra -g

    # Define the target and its dependencies
    TARGET=myprogram
    SRCS=myprogram.c helper.c
    OBJS=$(SRCS:.c=.o)

    all: $(TARGET)

    $(TARGET): $(OBJS)
        $(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

    %.o: %.c
        $(CC) $(CFLAGS) -c $< -o $@

    clean:
        rm -f $(OBJS) $(TARGET)
  </p>
</div>
In this example, the first section defines the compiler to be used (CC) and its options (CFLAGS). The second section defines the target file that is to be built (TARGET) and its dependencies (SRCS and OBJS). The all rule is the default target and depends on the $(TARGET) rule.

The $(TARGET) rule specifies how to build the target file from the object files ($(OBJS)). The % character in the %.o rule is a wildcard that matches any file name ending in .o. This rule specifies how to compile each individual object file from its corresponding source code file.

Finally, the clean rule is used to remove all object files and the executable program, in case we need to rebuild everything from scratch.

To build the program, you would simply navigate to the directory containing the makefile and run the make command. This will compile all necessary source files and generate the final executable program named myprogram.

Makefiles can be more complex than this example, but the basic structure is the same. By using makefiles, developers can automate the build process and ensure that only the necessary files are recompiled when a change is made to the source code.
