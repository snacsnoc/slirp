void ip_init(void);
void ip_slowtimo(void);
void ip_input(struct mbuf *m);
void ip_stripoptions(struct mbuf *m, struct mbuf *mopt);

