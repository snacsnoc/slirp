void m_init(void);
void msize_init(void);
struct mbuf * m_get(void);
void m_free(struct mbuf *m);
void m_cat(struct mbuf *m, struct mbuf *n);
void m_inc(struct mbuf *m, int size);
void m_adj(struct mbuf *m, int len);
int m_copy(struct mbuf *n, struct mbuf *m, int off, int len);
struct mbuf * dtom(void *dat);
