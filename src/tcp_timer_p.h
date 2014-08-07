void tcp_fasttimo(void);
void tcp_slowtimo(void);
void tcp_canceltimers(struct tcpcb *tp);
struct tcpcb *tcp_timers(struct tcpcb *tp, int timer);

