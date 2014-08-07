void sl_input(struct ttys *ttyp, u_char *if_bptr, int if_n);
void sl_dispatch(struct ttys *ttyp);
int sl_encap(char *inbptr, struct mbuf *m, int unit, int sl_esc, int proto);
