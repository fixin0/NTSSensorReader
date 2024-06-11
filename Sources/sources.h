
/* Intel Device */

#define ACPITZ_TEMP_FILE         /*ACPITZ*/                       fopen("//sys//class//thermal//thermal_zone0//temp", "r");
#define PCH_TEMP_FILE            /*PCH*/                       fopen("//sys//class//thermal//thermal_zone1//temp", "r");
#define IWILWIFI_TEMP_FILE       /*IWILWIFI*/                       fopen("//sys//class//thermal//thermal_zone2//temp", "r");
#define X86_PKG_TEMP_FILE        /*PKG_TEMP*/                       fopen("//sys//class//thermal//thermal_zone3//temp","r");

/* Sensor Type */

#define SENSOR_TYPE_1                                             fopen("//sys//class//thermal//thermal_zone0//type", "r");
#define SENSOR_TYPE_2                                             fopen("//sys//class//thermal//thermal_zone1//type", "r");
#define SENSOR_TYPE_3                                            fopen("//sys//class//thermal//thermal_zone2//type", "r");
#define SENSOR_TYPE_4                                             fopen("//sys//class//thermal//thermal_zone3//type", "r"); 
