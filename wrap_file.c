
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
  

FILE * __wrap_fopen ( const char * filename, const char * mode ) {
    
    
    struct timeval start, end;
    FILE *fp, *track;

    printf("wrapped fopen\n");
    fp = __real_fopen(filename, mode);
    gettimeofday(&start, NULL);
    gettimeofday(&end, NULL);    
    
    track = __real_fopen("/home/elsie/trywrap/track.txt", "w+");
    fprintf(track, "start time: %ld\n", start.tv_sec);
    fprintf(track, "end time: %ld\n time in total: %ld\n", end.tv_sec, end.tv_sec-start.tv_sec);
    fclose(track);    

    return fp;
}

