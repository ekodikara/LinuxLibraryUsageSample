# Linux Library Usage with libmagic
Testing Linux Libs using libmagic.
https://man7.org/linux/man-pages/man3/libmagic.3.html

## Compile
`gcc -g libmagic.c -lmagic -o libmagic`
## Run
`./libmagic your-file-path`
### Sample output:
`./libmagic /usr/bin/vi`
`Loading default magic database
inode/symlink; charset=binary`
