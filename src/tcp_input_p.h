int tcp_reass(struct tcpcb *tp, struct tcpiphdr *ti, struct mbuf *m);
void tcp_input(struct mbuf *m, int iphlen, struct socket *inso);
void tcp_dooptions(struct tcpcb *tp, u_char *cp, int cnt, struct tcpiphdr *ti);
void tcp_xmit_timer(struct tcpcb *tp, int rtt);
int tcp_mss(struct tcpcb *tp, u_int offer);
