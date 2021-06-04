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
                           {if(a>1){puts("\033[33mNA"
                       "ME\033[0m\n    dlatlon - distan"
                   "ce between two pairs of latitude and lon"
               "gtitudes on earth\n\n\033[33mDESCRIPTION\033[0m"
             "\n    Calculate distance between two pairs of latitu"
           "de and longitude. Data should be\n    coming from stdin "
        "and the shape should be `\033[32m<lat><tab><lon>\\n\033[0m`.\n"
      "\n\033[33m EXAMPLE\033[0m\n    dlatlon < lat_tab_lon.tsv");return 1
     ;}char b[42];double c[4];int i=0;while(fgets(b,42,stdin)!=NULL){c[i%4]
      =t(s(b,"\t"));i++;c[i%4]=t(s(s(NULL,"\t"),"\n"));i++;if(i>4&&i%2==0)
               printf("%.3f\n",d(c[0]*r,c[1]*r,c[2]*r,c[3]*r));};
                                   return 0;
                                      }/*{
                                      ****
                                      rrr
                                      rrr
                                      rrr
                                      rrr
                                      rrr
                                      rrr
                                      rrr
                                      rrr
                                      rrr
                                      rrr
                                 _.   rrr
                                 /. , rrr\ /  , \ `
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
