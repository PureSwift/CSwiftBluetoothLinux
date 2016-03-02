/*
 *
 *  Swift Bluetooth Linux Stack
 *  MIT License
 *  PureSwift
 *
 */

static inline int swift_bluetooth_ioctl(int socket, int command, void * pointer)
{
    return ioctl(socket, command, pointer)
}

static inline void  swift_bluetooth_hci_set_bit(int nr, uint32_t *addr)
{
	*((uint32_t *) addr + (nr >> 5)) |= (1 << (nr & 31));
}

static inline void swift_bluetooth_hci_clear_bit(int nr, uint32_t *addr)
{
	*((uint32_t *) addr + (nr >> 5)) &= ~(1 << (nr & 31));
}

static inline int swift_bluetooth_hci_test_bit(int nr, uint32_t *addr)
{
	return *((uint32_t *) addr + (nr >> 5)) & (1 << (nr & 31));
}

