void icmp_input(struct mbuf *m, int hlen);
void icmp_error(struct mbuf *msrc, u_char type, u_char code, int minsize, char *message);
void icmp_reflect(struct mbuf *m);
