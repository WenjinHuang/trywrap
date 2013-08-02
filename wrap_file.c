//
//  wrap_file.c
//  linuxio
//
//  Created by Huang Wenjin on 8/2/13.
//  Copyright (c) 2013 Huang Wenjin. All rights reserved.
//

#include <stdio.h>
#include <sys/time.h>

FILE * __real_fopen ( const char * filename, const char * mode );

FILE * __wrap_fopen ( const char * filename, const char * mode );
    
    printf("wrapped fopen\n");
    return __real_fopen(filename, mode);
    
    /*struct timeval start, end;
    //int blksize, file, flags, lbfsize, r, ur, w;
    int bf, close, cookie, extra, lb, offset, p, read, seek, ub, write;
    unsigned char nbuf, ubuf[3];
    char hey[] = "hey";
   
    FILE *fp, *track;
    fp = filename;
    fwrite(hey, 1, sizeof(hey), fp);
    
    gettimeofday(&start, NULL);
    
    //bf = fp->_bf;    
    //close = fp->_close;
    //cookie = fp->_cookie;
    //extra = fp->_extra;
    //lb = fp->_lb;
    //nbuf = fp->_nbuf;
    //offset = fp->_offset;
    //p = fp->_p;
    //read = fp->_read;
    //seek = fp->_seek;
    //ub = fp->_ub;
    //ubuf = fp->_ubuf;
    //write = fp->_write;
    
    blksize = fp->_blksize;
    file = fp->_file;
    flags = fp->_flags;
    lbfsize = fp->_lbfsize;    
    r = fp->_r;
    ur = fp->_ur;
    w = fp->_w;
    
    
    track = fopen("/Users/ElsieHwang/Documents/xcode projects/linuxio/linuxio/track.txt", "w+");
    fprintf(track, "start time: %ld\n blocksize: %d\n file: %d\n flags: %d\n", start.tv_sec, blksize, file, flags);
    fprintf(track, "lbfsize: %d\n r: %d\n ur: %d\n w: %d\n", lbfsize, r, ur, w);
    
    fclose(fp);
    gettimeofday(&end, NULL);
    
    fprintf(track, "end time: %ld\n time in total: %ld\n", end.tv_sec, end.tv_sec-start.tv_sec);
    fclose(track);*/    

}
