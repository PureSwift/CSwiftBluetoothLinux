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

static inline void swift_bluetooth_hci_set_bit(int nr, void *addr)
{
	*((uint32_t *) addr + (nr >> 5)) |= (1 << (nr & 31));
}

