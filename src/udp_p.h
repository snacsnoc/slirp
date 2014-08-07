#include "socket.h"

void udp_init(void);
void udp_input(struct mbuf *m, int iphlen);
int udp_output(struct socket *so, struct mbuf *m, struct sockaddr_in *addr);
int udp_attach(struct socket *so);
void udp_detach(struct socket *so);
u_int8_t udp_tos(struct socket *so);
void udp_emu(struct socket *so, struct mbuf *m);
struct socket * udp_listen(u_int port, u_int32_t laddr, u_int lport, int flags);


