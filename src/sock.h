#ifndef VEE_SOCK_H
#define VEE_SOCK_H

int vee_listenfd_init(int port, int backlog);
int vee_clt_sock_init(int listenfd);

#endif  /* VEE_SOCK_H */
