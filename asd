echo 'main(t){for(;;t++)putchar(t>>6&1?t>>5:-t>>4);}'|gcc -x c -&&./a.out|aplay
