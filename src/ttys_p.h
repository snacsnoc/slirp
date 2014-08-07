struct ttys *tty_attach(int unit, char *device);
void tty_detached(struct ttys *ttyp, int exiting);
void ctty_detached(void);
