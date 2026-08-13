/*
FILE - The RAM is volatile, and its content is lost
       once the program terminates . in order to persist the
       data forever we use files.
     - A file is a data stored in a storage device.
     - A C progarm can talk to the file by reading content from it 
       and writing content in it. 
*/

/*
FILE POINTER
A 'FILE' is a structure which needs to be created for opening a file
A file pointer is a pointer to this structure of the file
(FILE pointer is needed for communication between file and program)

FILE*ptr;
ptr = fopen("filename.txt";"mode");
*/

/*
FILE OPENING MODES IN C
"r" -> open for reading
"w" -> open for writing (if the file exist , the content will be overwritten)
"a" -> open for append ( if the file does not exist , it will create)
"rb"-> open for reading in binary
"wb"-> open for writing in binary
*/

/*
TYPES-1. Text files(.txt,.c)
     -2. Binary files(.jpg,.dat)
*/

/*
CLOSING THE FILE
it is very important to close the file after read or write . 
This is achieved using fclose 

fclose(ptr);
*/

/*
WRITE TO A FILE
similar like read
FILE*fptr;
fptr = fopen("payal.txt","w");
int num;
fprint(fptr,"%d",num);
fclose(fptr);
*/

/*
FGETC() AND FPUTC()
used to read and write a c program from / to a file

fgetc(ptr);
fputc('c',ptr);

*/

/*
END OF FILE (EOF)
fgets returns eof when all the characters froma file are read 
we can write a click like below to detect end of file

while(1){
    ch = fgets(ptr); // when all the content of a file has been read break the loop!
    if (ch == EOF){
    break;
    }
    //code
}

*/