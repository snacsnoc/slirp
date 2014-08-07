
/* ppp/auth.c */

void auth_peer_fail(int unit, int protocol);
void auth_peer_success(int unit, int protocol);
void auth_withpeer_fail(int unit, int protocol);
void auth_withpeer_success(int unit, int protocol);
int bad_ip_adrs(u_int32_t addr);
int auth_ip_addr(int unit, u_int32_t addr);
void link_established(int unit);
void link_down(int unit);
void link_required(int unit);
void link_terminated(int unit);

/* ppp/ccp.c */

void ccp_lowerup(int unit);
void ccp_lowerdown(int unit);

/* ppp/pppdfncs.c */

void novm(char *msg);

