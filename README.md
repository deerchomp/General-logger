# CPSC 323 PROJ 1

Library of logging functions that perform:

* Open a log file.
* Close a log file.
* Read the log file.
* Write to the log file
* Flush last write (e.g. commit the buffered write contents of the I/O buffer to the file)


The output lines of the log file includes:

* Date/time.
* Line number.
* Contextual name (e.g. name of function when the log entry is being written.
* Type (e.g. warning, error, etc)
* Description of what is being logged.
