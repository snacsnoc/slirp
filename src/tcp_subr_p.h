void tcp_init(void);
void tcp_template(struct tcpcb *tp);
void tcp_respond(struct tcpcb *tp, struct tcpiphdr *ti, struct mbuf *m, tcp_seq ack, tcp_seq seq, int flags);
struct tcpcb *tcp_newtcpcb(struct socket *so);
struct tcpcb *tcp_close(struct tcpcb *tp);
void tcp_drain(void);
void tcp_sockclosed(struct tcpcb *tp);
int tcp_fconnect(struct socket *so);
void tcp_connect(struct socket *inso);
int tcp_attach(struct socket *so);
u_int8_t tcp_tos(struct socket *so);
int tcp_emu(struct socket *so, struct mbuf *m);
int tcp_ctl(struct socket *so);
struct tcpcb *tcp_drop(struct tcpcb *tp, int errnom);

