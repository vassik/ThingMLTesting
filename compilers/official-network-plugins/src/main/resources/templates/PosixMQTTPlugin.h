#ifndef /*PORT_NAME*/_PosixMQTT_Client_h
#define  /*PORT_NAME*/_PosixMQTT_Client_h

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <stdint.h>
#include <math.h>
#include <mosquitto.h>
/*INCLUDES*/


struct /*PORT_NAME*/_instance_type {
    uint16_t listener_id;
    /*INSTANCE_INFORMATION*/
} /*PORT_NAME*/_instance;

void /*PORT_NAME*/_set_listener_id(uint16_t id);

void /*PORT_NAME*/_setup();

void /*PORT_NAME*/_start_receiver_process();

void /*PORT_NAME*/_forwardMessage(uint8_t * msg, int size/*PUBLISH_MULTI_OR_MONO_DECLARATION*/);

/*FORWARDERS*/

#endif
