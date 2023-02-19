/**
 * @file device_config.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "device_config.h"

prodaq_err_t device_config_from_json(PRODAQ_FROM_JSON_PARAMETERS(device_config_t), device_t type)
{
    PRODAQ_JSON_CHECK_PARAMETERS();
    switch (type)
    {
    case DEVICE_SENSOR:
        return sensor_config_from_json(json, &ptr->sensor);
    case DEVICE_GATEWAY:
        return PRODAQ_ERR_NOT_IMPLEMENTED;
    case DEVICE_DATALOGGER:
        return PRODAQ_ERR_NOT_IMPLEMENTED;
    default:
        return PRODAQ_ERR_INVALID_TYPE;
    }
    return PRODAQ_OK;
}

prodaq_err_t device_config_to_json(PRODAQ_TO_JSON_PARAMETERS(device_config_t), device_t type)
{
    PRODAQ_JSON_CHECK_PARAMETERS();
    switch (type)
    {
    case DEVICE_SENSOR:
        return sensor_config_to_json(&ptr->sensor, json);
    case DEVICE_GATEWAY:
        return PRODAQ_ERR_NOT_IMPLEMENTED;
    case DEVICE_DATALOGGER:
        return PRODAQ_ERR_NOT_IMPLEMENTED;
    default:
        return PRODAQ_ERR_INVALID_TYPE;
    }
    return PRODAQ_OK;
}
