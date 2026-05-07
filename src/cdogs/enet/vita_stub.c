/*
 * vita_stub.c — ENet platform-specific stubs for PS Vita
 * Only implements functions usually found in unix.c or win32.c
 */
#include "enet/enet.h"
#include <stddef.h>

int           enet_initialize(void)                                              { return 0; }
void          enet_deinitialize(void)                                            {}
enet_uint32   enet_host_random_seed(void)                                       { return 0; }
enet_uint32   enet_time_get(void)                                                { return 0; }
void          enet_time_set(enet_uint32 t)                                       { (void)t; }
int           enet_address_set_host_ip(ENetAddress *address, const char *name)  { (void)address; (void)name; return -1; }
int           enet_address_set_host(ENetAddress *address, const char *name)     { (void)address; (void)name; return -1; }
int           enet_address_get_host_ip(const ENetAddress *address, char *name, size_t nameLength) { (void)address; (void)name; (void)nameLength; return -1; }
int           enet_address_get_host(const ENetAddress *address, char *name, size_t nameLength) { (void)address; (void)name; (void)nameLength; return -1; }
int           enet_socket_bind(ENetSocket socket, const ENetAddress *address)   { (void)socket; (void)address; return -1; }
int           enet_socket_get_address(ENetSocket socket, ENetAddress *address)  { (void)socket; (void)address; return -1; }
int           enet_socket_listen(ENetSocket socket, int backlog)                { (void)socket; (void)backlog; return -1; }
ENetSocket    enet_socket_create(ENetSocketType type)                           { (void)type; return -1; }
int           enet_socket_set_option(ENetSocket socket, ENetSocketOption option, int value) { (void)socket; (void)option; (void)value; return -1; }
int           enet_socket_get_option(ENetSocket socket, ENetSocketOption option, int *value) { (void)socket; (void)option; (void)value; return -1; }
int           enet_socket_connect(ENetSocket socket, const ENetAddress *address) { (void)socket; (void)address; return -1; }
ENetSocket    enet_socket_accept(ENetSocket socket, ENetAddress *address)       { (void)socket; (void)address; return -1; }
int           enet_socket_shutdown(ENetSocket socket, ENetSocketShutdown how)   { (void)socket; (void)how; return -1; }
void          enet_socket_destroy(ENetSocket socket)                            { (void)socket; }
int           enet_socket_send(ENetSocket socket, const ENetAddress *address, const ENetBuffer *buffers, size_t bufferCount) { (void)socket; (void)address; (void)buffers; (void)bufferCount; return -1; }
int           enet_socket_receive(ENetSocket socket, ENetAddress *address, ENetBuffer *buffers, size_t bufferCount) { (void)socket; (void)address; (void)buffers; (void)bufferCount; return -1; }
int           enet_socketset_select(ENetSocket maxSocket, ENetSocketSet *readSet, ENetSocketSet *writeSet, enet_uint32 timeout) { (void)maxSocket; (void)readSet; (void)writeSet; (void)timeout; return -1; }
int           enet_socket_wait(ENetSocket socket, enet_uint32 *condition, enet_uint32 timeout) { (void)socket; (void)condition; (void)timeout; return -1; }
