void slirp_insque(void *a, void *b);
void slirp_remque(void *a);
int add_exec(struct ex_list **ex_ptr, int do_pty, char *exec, int addr, int port);
int openpty(int *amaster, int *aslave);
int fork_exec(struct socket *so, char *ex, int do_pty);
void add_emu(char *buff);
int rsh_exec(struct socket *so, struct socket *ns, char *user, char *host, char *args);
int show_x(char *buff, struct socket *inso);
void redir_x(u_int32_t inaddr, int start_port, int display, int screen);
void getouraddr(void);
void snooze_hup(int num);
void snooze(void);
void relay(int s);
void u_sleep(int usec);
void fd_nonblock(int fd);
void fd_block(int fd);

