//strncpy and strcpy

//Source : strncpy man page

#include <stdio.h>
#include <string.h>

int main()
{
	char src[]="abcd";
	char dest[6];
	
	strcpy(dest,src);
	printf("%s\n",dest);
	
	strncpy(dest,src,6);
	printf("%c",dest[4]);
	
	return 0;
}

/*
 * #include <string.h>

       char *strcpy(char *dest, const char *src);

       char *strncpy(char *dest, const char *src, size_t n);

DESCRIPTION
       The  strcpy()  function  copies the string pointed to by src, including
       the terminating null byte ('\0'), to the buffer  pointed  to  by  dest.
       The  strings  may  not overlap, and the destination string dest must be
       large enough to receive the copy.  Beware  of  buffer  overruns!   (See
       BUGS.)

       The  strncpy()  function is similar, except that at most n bytes of src
       are copied.  Warning: If there is no null byte among the first n  bytes
       of src, the string placed in dest will not be null-terminated.

 *     If  the  length of src is less than n, strncpy() writes additional null
       bytes to dest to ensure that a total of n bytes are written.

       A simple implementation of strncpy() might be:

           char *
           strncpy(char *dest, const char *src, size_t n)
           {
               size_t i;

               for (i = 0; i < n && src[i] != '\0'; i++)
                   dest[i] = src[i];
               for ( ; i < n; i++)
                   dest[i] = '\0';

               return dest;
           }
           * 
           * 
           * If the programmer knows (i.e., includes code to test!)  that  the  size
       of dest is greater than the length of src, then strcpy() can be used.

       One  valid  (and  intended) use of strncpy() is to copy a C string to a
       fixed-length buffer while ensuring both that the buffer  is  not  over‐
       flowed  and that unused bytes in the target buffer are zeroed out (per‐
       haps to prevent information leaks if the buffer is  to  be  written  to
       media  or transmitted to another process via an interprocess communica‐
       tion technique).

       If there is no terminating null byte in  the  first  n  bytes  of  src,
       strncpy()  produces an unterminated string in dest.  You can force ter‐
       mination using something like the following:

           strncpy(buf, str, n);
           if (n > 0)
               buf[n - 1]= '\0';

       (Of course, the above technique ignores the fact that information  con‐
       tained in src is lost in the copying to dest.)

Some  systems  (the  BSDs,  Solaris,  and others) provide the following
       function:

           size_t strlcpy(char *dest, const char *src, size_t size);

       This function is similar to strncpy(), but it  copies  at  most  size-1
       bytes  to  dest,  always adds a terminating null byte, and does not pad
       the target with (further) null bytes.  This function fixes some of  the
       problems  of  strcpy()  and strncpy(), but the caller must still handle
       the possibility of data loss if size is too small.  The return value of
       the function is the length of src, which allows truncation to be easily
       detected: if the return value is greater than or equal to size, trunca‐
       tion  occurred.   If loss of data matters, the caller must either check
       the arguments before the call,  or  test  the  function  return  value.
       strlcpy() is not present in glibc and is not standardized by POSIX, but
       is available on Linux via the libbsd library.
*/

