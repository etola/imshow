// ---------------------------------------------------------------------------
//
// This file is part of the <kortex> library suite
//
// Copyright (C) 2013 Engin Tola
//
// See LICENSE file for license information.
//
// author: Engin Tola
// e-mail: engintola@gmail.com
// web   : http://www.engintola.com
//
// ---------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>

#include <kortex/image.h>
#include <kortex/image_gui.h>

using namespace std;
using namespace kortex;

void display_help() {
    printf("usage\n");
    printf(" -i image_file | \n");
    printf(" -o            | original size\n");
    printf(" -w            | window size\n");
}

int main(int argc, char **argv) {

    if( argc == 1 ) {
       display_help();
       exit(0);
    }

    int ww = 0;
    string ifile = "";

    int counter=1;
    while( counter < argc ) {
        if( !strcmp("-i", argv[counter] ) ) {
            counter++;
            ifile = argv[counter++];
            continue;
        }
        if( !strcmp("-w", argv[counter] ) ) {
            counter++;
            ww = atoi( argv[counter++] );
            continue;
        }

        if( !strcmp("-o", argv[counter] ) ) {
            counter++;
            ww = -1;
            continue;
        }
        printf("unkown option [%s]\n", argv[counter]);
        exit(1);
    }

    if( ifile == "" ) {
        display_help();
        exit(0);
    }


    Image img;
    img.load( ifile.c_str() );
    if( ww == -1 ) ww = img.w();
    display( &img, ww );

}

// Local Variables:
// mode: c++
// compile-command: "make -C ."
// End:
