# CPSC 323 PROJ 1

Programming Assignment

Create a library of logging functions (objects) that perform:

Open a log file.

Close a log file.

Read the log file.

Write to the log file

Flush last write (e.g. commit the buffered write contents of the I/O buffer to the file)


The output lines of the log file shall include:

Date/time.

Line number.

Contextual name (e.g. name of function when the log entry is being written.

Type (e.g. warning, error, etc)

Description of what is being logged.

Other user fields as desired or deemed necessary.

The programming language shall be C or C++.

One trick that is sometimes used in logging output is to separate the fields using a delimiter such as the vertical pipe (|).  This is my suggestion.  This allows for the log lines to be imported into Excel or a database structure to make the log file text searchable.

To test, write a program of any sort and use the functions noted above to create and log information to a log file.

What is to be turned in:

The source files.

Screen print of the successful compilation.

Screen print of the program run.

The output log file.


Based upon a 100 point scale.

