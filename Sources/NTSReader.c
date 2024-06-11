#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Headers
#include "TempSensorInfo.h"
#include "ProgramInfo.h"
#include "sources.h"


int main()
{

    printf("<========NORTH TEMP SENSOR READER=========> \n\n");

    printf("\n \n \n");
    LICENSE_INFO_
    printf("\n");

    return 0;

}

void HardwareSensorsTemper()
{

    FILE *sensorTypeFiles, *sensorTypeFiles1, *sensorTypeFiles2, *sensorTypeFiles3;
    FILE *TempFile0,*TempFile1,*TempFile2,*TempFile3;

    TempFile0 = ACPITZ_TEMP_FILE
    TempFile1 = PCH_TEMP_FILE
    TempFile2 = IWILWIFI_TEMP_FILE
    TempFile3 = X86_PKG_TEMP_FILE

    sensorTypeFiles = SENSOR_TYPE_1
    sensorTypeFiles1 = SENSOR_TYPE_2
    sensorTypeFiles2 = SENSOR_TYPE_3
    sensorTypeFiles3 = SENSOR_TYPE_4

    printf("temp:");
    TEMP_FILE_READER
    Temp_File_Reader(TempFile0, 2);
    printf("C° \t \t \t \t");
    printf("Sensor Type: ");
    SENSOR_TYPE_CONTROL
    temp_sensor_typer(sensorTypeFiles);

    printf("temp:");
    TEMP_FILE_READER //Temp1
    Temp_File_Reader(TempFile1, 4);
    printf("C° \t \t \t \t ");
    printf("Sensor Type: ");
    SENSOR_TYPE_CONTROL
    temp_sensor_typer(sensorTypeFiles1);

    printf("temp:");
    TEMP_FILE_READER //Temp1
    Temp_File_Reader(TempFile2, 6);
    printf("C° \t \t \t \t ");
    printf("Sensor Type: ");
    SENSOR_TYPE_CONTROL
    temp_sensor_typer(sensorTypeFiles2);

    printf("temp:");
    TEMP_FILE_READER //Temp1
    Temp_File_Reader(TempFile3, 8);
    printf("C° \t \t \t \t ");
    printf("Sensor Type: ");
    SENSOR_TYPE_CONTROL
    temp_sensor_typer(sensorTypeFiles3);




}
