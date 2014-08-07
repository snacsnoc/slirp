void sl_compress_init(struct slcompress *comp);
u_int sl_compress_tcp(struct mbuf *m, struct ip *ip, struct slcompress *comp, int compress_cid);
int sl_uncompress_tcp(u_char **bufp, int len, u_int type, struct slcompress *comp);
