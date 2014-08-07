void sbfree(struct sbuf *sb);
void sbdrop(struct sbuf *sb, int num);
void sbreserve(struct sbuf *sb, int size);
void sbappend(struct socket *so, struct mbuf *m);
void sbappendsb(struct sbuf *sb, struct mbuf *m);
void sbcopy(struct sbuf *sb, int off, int len, char *to);
