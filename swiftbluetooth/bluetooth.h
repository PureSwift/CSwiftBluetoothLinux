/*
 *
 *  Swift Bluetooth Linux Stack
 *  MIT License
 *  PureSwift
 *
 */

#include <stdint.h>

static inline int swift_bluetooth_ioctl(int socket, int command, void * pointer)
{
    return ioctl(socket, command, pointer);
}
