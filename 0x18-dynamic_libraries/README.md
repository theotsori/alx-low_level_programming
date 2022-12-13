<head>
<style>
mark {
    background-color: yellow;
    color: black;
}
</style>
</head>
<h1>Dynamic Libraries</h1>
<img src="https://cdn.ttgtmedia.com/rms/onlineimages/static_linking_vs_dynamic_linking-f_mobile.png">
<h2>What is a dynamic library, how does it work, how to create one, and how to use it</h2>
<p>A dynamic library is a file containing compiled code that can be linked to by a program at runtime, allowing the program to use the functionality implemented in the library. This is in contrast to a static library, which is linked to by a program at compile time.

To create a dynamic library, you can compile your source code files into a shared object file using a compiler such as GCC. For example, the following command can be used to create a dynamic library called libmylib.so from the source code files file1.c and file2.c:</p>

<mark>gcc -c -fPIC file1.c file2.c</mark>
<mark>gcc -shared -o libmylib.so file1.o file2.o</mark>

<p>To use a dynamic library in a program, you can specify the library name and its location when compiling the program using the -l and -L options. For example, the following command can be used to compile a program called myprog that uses the dynamic library libmylib.so:
gcc -o myprog myprog.c -lmylib -L/path/to/libmylib.so
You can also use the LD_LIBRARY_PATH environment variable to specify the location of the dynamic library when running the program. For example:</p>

<mark>export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/path/to
./myprog</mark>

<p>Dynamic libraries can be useful for many reasons, including code reusability, modularity, and reducing the memory footprint of a program.</p>

<h2>What is the environment variable $LD_LIBRARY_PATH and how to use it</h2>
<p>In Linux and other Unix-like operating systems, the LD_LIBRARY_PATH environment variable is used to specify a list of directories where the dynamic linker should search for shared libraries when loading a program. This allows programs to use shared libraries that are not in the default search path of the linker.

To use the LD_LIBRARY_PATH variable, you can set it to a colon-separated list of directories containing the shared libraries that you want to use. For example, the following command sets the LD_LIBRARY_PATH variable to the /usr/local/lib and /usr/local/lib64 directories:</p>

<mark>export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/local/lib:/usr/local/lib64</mark>

<p>Once the LD_LIBRARY_PATH variable is set, you can run your program as usual. The dynamic linker will search the specified directories for the shared libraries that the program depends on, in addition to the default search path.

It's important to note that setting the LD_LIBRARY_PATH variable can potentially pose a security risk, as it allows programs to use shared libraries from arbitrary directories. Therefore, it's recommended to only use it when absolutely necessary, and to carefully control the directories that are included in the search path.</p>

<h2>What are the differences between static and shared libraries</h2>
<p>The main difference between static and shared libraries is how and when they are linked to a program. A static library is a collection of object files that are linked to a program at compile time, while a shared library is a compiled library that is linked to a program at runtime.

This means that a static library is included in the final executable file of a program, while a shared library is not. Instead, the shared library is loaded by the program at runtime, when the program is executed. This allows multiple programs to use the same shared library, reducing the memory footprint and storage space required.

Another difference between static and shared libraries is that a static library is generally linked to a program using the ar and ranlib tools, while a shared library is linked using the ld linker. This means that the process of linking to a static library is typically done at compile time, while linking to a shared library is done at runtime.

In general, shared libraries are more flexible and efficient than static libraries, but they also require additional support from the operating system and the runtime environment to work properly. For these reasons, shared libraries are more commonly used in modern software development.</p><br>

<h2>Basic usage nm, ldd, ldconfig</h2>
<p>nm is a command line utility that displays the symbol table for object files. The symbol table contains information about symbols such as function and variable names, their addresses in the object file, and their types.</p>

<p>ldd is a command line utility that displays the shared libraries required by each program or shared library specified on the command line. It can be used to verify that a program or shared library is using the correct versions of the libraries it depends on.</p>

<p>ldconfig is a command line utility that is used to configure dynamic linker run-time bindings. It creates, updates, and removes the necessary links and cache to the most recent shared libraries found in the directories specified on the command line, in the file /etc/ld.so.conf, and in the trusted directories, such as /lib and /usr/lib.</p>
