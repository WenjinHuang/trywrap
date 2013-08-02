//
//  main.c
//  linuxio
//
//  Created by Huang Wenjin on 7/24/13.
//  Copyright (c) 2013 Huang Wenjin. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    char hey[] = "hey";
   
    FILE *fp;
    fp = fopen("/Users/ElsieHwang/Documents/xcode projects/linuxio/linuxio/file.txt", "w+");
    fwrite(hey, 1, sizeof(hey), fp);
    
    fclose(fp);

    printf("main\n");
    
    return 0;
}

