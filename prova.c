#include <stdio.h>

int main(int argc, char* argv[]){
    if(argc == 1) printf("hello world\n");
    else if( argc > 1 ) printf("hello world, %s\n", (char*)argv[1]);
    return 0;
}
