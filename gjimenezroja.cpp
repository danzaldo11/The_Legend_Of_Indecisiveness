//File for project 
//3350 , spring 2022
//Gisela Jimenez Rojas


//souce for images:

//https://www.artstation.com/artwork/k413Ly
//https://www.seekpng.com/ipng/u2q8e6r5u2u2t4t4_preview-snow-pixel-art-tileset/

//next step put movement 


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <math.h>
#include "image.h"
#include "credits.h"

/*
Image img[2] = {
   "Images/main_char2.gif",  
   "Images/snow_map.png" };
*/

void gjimenezroja(int number){
   if(number > 0) {
      printf("You have this many apples" , number);
   } else {
      printf("Invalid, put a number"); 
   }
}
