/*
 * This file has been automatically generated by the WICED 20719-B1 Designer.
 * Definitions for constants used in the device's GATT database and function
 * prototypes.
 *
 */

// thermometer_db.h

#ifndef __GATT_DATABASE_H__
#define __GATT_DATABASE_H__


// ***** Primary Service 'Generic Attribute'
#define HDLS_GENERIC_ATTRIBUTE                                                0x0001

// ***** Primary Service 'Generic Access'
#define HDLS_GENERIC_ACCESS                                                   0x0014
// ----- Characteristic 'Device Name'
#define HDLC_GENERIC_ACCESS_DEVICE_NAME                                       0x0015
#define HDLC_GENERIC_ACCESS_DEVICE_NAME_VALUE                                 0x0016
// ----- Characteristic 'Appearance'
#define HDLC_GENERIC_ACCESS_APPEARANCE                                        0x0017
#define HDLC_GENERIC_ACCESS_APPEARANCE_VALUE                                  0x0018

// ***** Primary Service 'Health Thermometer'
#define HDLS_HEALTH_THERMOMETER                                               0x0028
// ----- Characteristic 'Temperature Measurement'
#define HDLC_HEALTH_THERMOMETER_TEMPERATURE_MEASUREMENT                       0x0029
#define HDLC_HEALTH_THERMOMETER_TEMPERATURE_MEASUREMENT_VALUE                 0x002A
// ===== Descriptor 'Client Configuration'
#define HDLD_HEALTH_THERMOMETER_TEMPERATURE_MEASUREMENT_CLIENT_CONFIGURATION  0x002B
// ----- Characteristic 'Temperature Type'
#define HDLC_HEALTH_THERMOMETER_TEMPERATURE_TYPE                              0x002C
#define HDLC_HEALTH_THERMOMETER_TEMPERATURE_TYPE_VALUE                        0x002D
// ----- Characteristic 'Intermediate Temperature'
#define HDLC_HEALTH_THERMOMETER_INTERMEDIATE_TEMPERATURE                      0x002E
#define HDLC_HEALTH_THERMOMETER_INTERMEDIATE_TEMPERATURE_VALUE                0x002F
// ===== Descriptor 'Client Configuration'
#define HDLD_HEALTH_THERMOMETER_INTERMEDIATE_TEMPERATURE_CLIENT_CONFIGURATION 0x0030
// ----- Characteristic 'Measurement Interval'
#define HDLC_HEALTH_THERMOMETER_MEASUREMENT_INTERVAL                          0x0031
#define HDLC_HEALTH_THERMOMETER_MEASUREMENT_INTERVAL_VALUE                    0x0032
// ===== Descriptor 'Client Configuration'
#define HDLD_HEALTH_THERMOMETER_MEASUREMENT_INTERVAL_CLIENT_CONFIGURATION     0x0033

// External Lookup Table Entry
typedef struct
{
    uint16_t handle;
    uint16_t max_len;
    uint16_t cur_len;
    uint8_t  *p_data;
} gatt_db_lookup_table;

// External definitions
extern const uint8_t  gatt_database[];
extern const uint16_t gatt_database_len;
extern gatt_db_lookup_table thermometer_gatt_db_ext_attr_tbl[];
extern const uint16_t thermometer_gatt_db_ext_attr_tbl_size;
extern uint8_t BT_LOCAL_NAME[];
extern const uint16_t BT_LOCAL_NAME_CAPACITY;

#endif /* __GATT_DATABASE_H__ */
