//Source : http://www.prepareitonline.com/forums/prepare/2-languages-c/question/395-
//how-do-stat-fstat-vstat-work-how-to-check-whether-a-file-exists

//How stat(), fstat(), lstat() work.
//How to check whether a file exists

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>

#define TRUE 1
#define FALSE 0
int stat(const char *file_name, struct stat *buf);
//stat - stats the file pointed to by file_name and fills in buf.

int fstat(int file_desc, struct stat *buf);
//lstat - identical to stat, except in the case of a symbolic link, where the link itself is stat-ed, not the file that it refers to.
                
int lstat(const char *file_name, struct stat *buf);
//fstat - identical to stat, only the open file pointed to by file_desc is stated in place of file_name.

//struct stat 
//{
//    dev_t         st_dev;      /* device */
//    ino_t         st_ino;      /* inode */
//    mode_t        st_mode;     /* protection */
//	  nlink_t       st_nlink;    /* number of hard links */
//	  uid_t         st_uid;      /* user ID of owner */
//    gid_t         st_gid;      /* group ID of owner */
//    dev_t         st_rdev;     /* device type (if inode device) */
//    off_t         st_size;     /* total size, in bytes */
//    unsigned long st_blksize;  /* blocksize for filesystem I/O */
//    unsigned long st_blocks;   /* number of blocks allocated */
//    time_t        st_atime;    /* time of last access */
//    time_t        st_mtime;    /* time of last modification */
//    time_t        st_ctime;    /* time of last change */
//};

int get_file_size(char *file_path,int  *file_size)
{
  struct stat stat_buffer;
  if (stat((char *)file_path, &stat_buffer)!=0)
    return(FALSE);

  *file_size =  stat_buffer.st_size;

  return(TRUE);
}
int main()
{
	int file_size=0;
	int s=get_file_size("/home/prateek/sample.c",&file_size);
	
	printf("%d-%d",file_size,s);
	return 0;
}
