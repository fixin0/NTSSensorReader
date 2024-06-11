#include <stdio.h>
#include <stdlib.h>


int loopNum;

#ifndef TEMP_FILE_READER
#define TEMP_FILE_READER


void Temp_File_Reader(FILE *file, int loop)
{

    char *temp;

    do
    {
    temp= getc(file);
    printf("%c", temp);

    loopNum++;

    if (loopNum == loop)
    {
        break;
    }

    } while (temp !=EOF);
}

#endif


#ifndef SENSOR_TYPE_CONTROL
#define SENSOR_TYPE_CONTROL

void temp_sensor_typer(FILE *sensor)
{

   char *file;

   do
   {
   file = getc(sensor);
   printf("%c", file);


 } while (file !=EOF);

 }

 #endif



/*

condition is given to the loop, one number more than the previous ki

*/
