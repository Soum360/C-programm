#include <sys/types.h>
#include <stdlib.h>
#include <md5.h>

int main ()
{
    int fd;
    MD5File(fd, &buf );
    printf ("%p", buf);
    fclose( fd );
    return 0;
}
