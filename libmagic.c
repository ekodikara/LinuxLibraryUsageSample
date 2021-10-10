#include <stdio.h>
#include <magic.h>

int main(int argc, char* argv[])
{
    const char *magic_full;
    magic_t magic_cookie;

    /* MAGIC_MIME tells magic to return a mime of the file, 
       but you can specify different things     */
    magic_cookie = magic_open(MAGIC_MIME);

    if (magic_cookie == NULL) {
        printf("unable to initialize magic library\n");
        return 1;
    }

    printf("Loading default magic database\n");
    
    if (magic_load(magic_cookie, NULL) != 0) {
        printf("cannot load magic database - %s\n", magic_error(magic_>
        magic_close(magic_cookie);
        return 1;
    }

    magic_full = magic_file(magic_cookie, argv[1]);
    printf("%s\n", magic_full);
    magic_close(magic_cookie);
    return 0;
}
