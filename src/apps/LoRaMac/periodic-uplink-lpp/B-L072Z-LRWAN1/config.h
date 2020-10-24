#ifdef __cplusplus
extern "C"
{
#endif

#ifndef CONFIG_H
#define CONFIG_H


/* ==================================================================== */
/* ========================== include files =========================== */
/* ==================================================================== */

/* Inclusion of system and local header files goes here */



/* ==================================================================== */
/* ============================ constants ============================= */
/* ==================================================================== */

/* #define and enum statements go here */

// PRELAUNCH IMPORTANT!
// comment out these defines to disable sensor, Radio, GPS or LED
#define SENSOR_ENABLED   1         /* Enable ms5607 sensor. Init the sensor as well. Allowed values: 0 disabled , 1(default) enabled */
#define GPS_ENABLED      1         /* Enable Ublox GPS. Init the GPS as well. Allowed values: 0 disabled , 1(default) enabled */
#define RADIO_ENABLED    1         /* Enable Radio. WARNING: DISABLED OPTION NOT TESTED PROPERLY. Allowed values: 0 disabled , 1(default) enabled */
#define USE_LED          1         /* Enable LED blinky. Allowed values: 0 disabled , 1(default) enabled */


/* GPS RELATED DEFINES */
/* ----------------------------------------------------------------------------------- */

#define GPS_LOCATION_FIX_TIMEOUT          180000
#define GPS_WAKEUP_TIMEOUT                1000


/* ==================================================================== */
/* ========================== public data ============================= */
/* ==================================================================== */

/* Definition of public (external) data types go here */





/* ==================================================================== */
/* ======================= public functions =========================== */
/* ==================================================================== */

/* Function prototypes for public (external) functions go here */


#endif
#ifdef __cplusplus
}
#endif
