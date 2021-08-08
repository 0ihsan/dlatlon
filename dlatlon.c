#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define d(w,x,y,z)6371*acos(cos(w-y)+cos(w)*cos(y)*(cos(z-x)-1))
#define s(v,z)strtok(v,z)
#define r (3.1415/180)
#define t(v)atof(v)

                                      int
                              main(int a,char**v)
                          {if(a>1){puts("\033[33mNAM"
                        "E\033[0m\n  dlatlon - disatnc"
                     "e between two pairs of latitude and"
                    " longitudes on earth\n\n\033[33mDESCR"
                   "IPTION\033[0m\n  input data must consis"
                  "t of two consecutive lines of coordinates"
                 ". infinite\n  amount of coordinate pairs can"
                  " be streamed as`\033[32m<lat><tab><lon>\\n"
                   "\033[0m`.\n\n\033[33mEXAMPLE\n  \033[0md"
                    "latlon<data.tsv");return 1;}char b[42];
                     double c[4];int i=0;while(fgets(b,42,
                        stdin)!=NULL){c[i%4]=t(s(b,"\t"
                          ));i++;c[i%4]=t(s(s(NULL/**/
                               ,"\t"),"\n"));i++;
                                    if(i>4&&
                                     i%2==0
                                    )printf(
                                    "%.3f\n"
                                    ,d(c[0]
                                    *r,c[1]
                                    *r,c[2]
                                    *r,c[3]
                                    *r));};
                                    return(
                                    0);;;;}
                                     /***\
                                     r***r
                                 _.  rrrrr
                                 /. ,rrrr\ /  , \ `
                   f            /. . //rr\\ . _\ /               .
             _  . \|^f/      | \,\k/\\\**///\ \ /\  \ /   \_ . ../
     //\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\\
   ////////////////////////////////////////////////////////////////////////\\
 //\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/arlyle\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\\
   ///////////////////////////////////btc//////////////////////////////////\\
      //\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\\
                                  \/   |   \\
                                //    /.    \_/-
                               //\   / \   / \ \_
                             // /  /  /\ /   \  \__
                          //_// \       /    \\  y  \_
                        //__//   \       \\   /     / l
                       //  // r    `-\     \\ \         \
                      /a\      \      l     \\          e\
                   \_/*\       /\_    /\     \\        *  \_/
