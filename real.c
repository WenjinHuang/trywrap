//
//  main.c
//  linuxio
//
//  Created by Huang Wenjin on 7/24/13.
//  Copyright (c) 2013 Huang Wenjin. All rights reserved.
//

#include <stdio.h>
#include <sys/time.h>

int main(int argc, const char * argv[])
{

    struct timeval start, end;
    //int bf, blksize, close, cookie, extra, file, flags, lb, lbfsize, offset, p, r, read, seek, ub, ur, w, write;
    char hey[] = "hey";
   
    FILE *fp;
    fp = fopen("/Users/ElsieHwang/Documents/xcode projects/linuxio/linuxio/file.txt", "w+");
    fwrite(hey, 1, sizeof(hey), fp);
    
    fclose(fp);
    
    return 0;
}

