void ifs_insque(struct mbuf *ifm, struct mbuf *ifmhead);
void ifs_remque(struct mbuf *ifm);
int writen(int fd, char *bptr, int n);
void if_input(struct ttys *ttyp);
void if_output(struct socket *so, struct mbuf *ifm);
void if_init(void);
