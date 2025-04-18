# Generated automatically from Makefile.in by configure.

#
# Makefile for GNU Autoconf
#

version = 1.0.14pre1
srcdir = .
COMMON_DEFS =  -I. -I${srcdir} -DUSE_PPP #-DDEBUG
CC = gcc
CPP = gcc -E $(COMMON_DEFS) -DUSE_PPP -g -O0
CFLAGS = $(COMMON_DEFS) -g -O0 -Wall -Wno-implicit -Wmissing-prototypes
PPPCFLAGS = $(COMMON_DEFS) -g -O0 
SHELL = /bin/sh
MKPRO = /opt/local/bin/perl ${srcdir}/mkpro
MAKEPRO = $(CPP) $< | $(MKPRO) > $@.bak && mv -f $@.bak $@

PPPOBJS = auth.o bsd-comp.o ccp.o chap.o fsm.o ipcp.o lcp.o magic.o md5.o pppdfncs.o upap.o ppp.o

PPPOBJ = $(PPPOBJS)

OBJ = $(PPPOBJ) cksum.o debug.o if.o ip_icmp.o ip_input.o ip_output.o main.o mbuf.o\
	misc.o options.o sbuf.o sl.o slcompress.o socket.o tcp_input.o\
	tcp_output.o tcp_subr.o tcp_timer.o terminal.o ttys.o udp.o 

INCS = ${srcdir}/udp_p.h ${srcdir}/tcp_timer_p.h ${srcdir}/tcp_subr_p.h ${srcdir}/socket_p.h\
	${srcdir}/misc_p.h ${srcdir}/options_p.h ${srcdir}/main_p.h\
	${srcdir}/ip_input_p.h ${srcdir}/ip_icmp_p.h ${srcdir}/if_p.h\
	${srcdir}/debug_p.h ${srcdir}/cksum_p.h\
	${srcdir}/terminal_p.h ${srcdir}/mbuf_p.h\
	${srcdir}/sbuf_p.h ${srcdir}/ttys_p.h\
	${srcdir}/ppp_p.h ${srcdir}/sl_p.h\
	${srcdir}/slcompress_p.h\
	${srcdir}/ip_output_p.h\
	${srcdir}/tcp_input_p.h\
	${srcdir}/tcp_output_p.h

LIBS = -lcrypt

COMMON_H = config.h ${srcdir}/slirp.h

BINDIR = /usr/local/bin

MANDIR = /usr/local/man/man1

MANEXT = 1

all: ${srcdir}/configure Makefile config.h slirp

slirp: $(INCS) $(OBJ)
	$(CC)  -o slirp $(OBJ) $(LIBS)

install: slirp install.man
	strip slirp
	cp slirp $(BINDIR)

install.man:
	cp slirp.man $(MANDIR)/slirp.$(MANEXT)

objclean:
	rm -f $(OBJ)

confclean:
	rm -f config.h config.log config.status\
		config.cache Makefile

proclean:
	rm -f *.p

realclean: objclean confclean
	rm -f slirp core slirp.core core.slirp
	rm -f *~

clean: objclean
	rm -f slirp core slirp.core core.slirp

${srcdir}/configure: ${srcdir}/configure.in
	cd ${srcdir} && autoconf || touch ${srcdir}/configure

# This just helps me, you can ignore it
release: all
	rm -f $(OBJ)
	rm -f config.h config.log config.status \
		config.cache Makefile
	rm -f slirp core slirp.core core.slirp
	rm -f ${srcdir}/*~ ${srcdir}/ppp/*~
	(cd ${srcdir}/../..; \
	 tar cvzf slirp-${version}.tar.gz slirp-${version};)
	cp -u ${srcdir}/../ChangeLog ${srcdir}/../../slirp.ChangeLog 
	cp -u ${srcdir}/../slirp-${version}.lsm ${srcdir}/../.. 

#
# Prototypes and .o files
#

.c.p:
	$(MAKEPRO)


auth.o: $(COMMON_H) ${srcdir}/ppp/auth.c
	$(CC) $(PPPCFLAGS) -c ${srcdir}/ppp/auth.c

bsd-comp.o: $(COMMON_H) ${srcdir}/ppp/bsd-comp.c
	$(CC) $(PPPCFLAGS) -c ${srcdir}/ppp/bsd-comp.c

ccp.o: $(COMMON_H) ${srcdir}/ppp/ccp.c
	$(CC) $(PPPCFLAGS) -c ${srcdir}/ppp/ccp.c

chap.o: $(COMMON_H) ${srcdir}/ppp/chap.c
	$(CC) $(PPPCFLAGS) -c ${srcdir}/ppp/chap.c

fsm.o: $(COMMON_H) ${srcdir}/ppp/fsm.c
	$(CC) $(PPPCFLAGS) -c ${srcdir}/ppp/fsm.c

ipcp.o: $(COMMON_H) ${srcdir}/ppp/ipcp.c
	$(CC) $(PPPCFLAGS) -c ${srcdir}/ppp/ipcp.c

lcp.o: $(COMMON_H) ${srcdir}/ppp/lcp.c
	$(CC) $(PPPCFLAGS) -c ${srcdir}/ppp/lcp.c

magic.o: $(COMMON_H) ${srcdir}/ppp/magic.c
	$(CC) $(PPPCFLAGS) -c ${srcdir}/ppp/magic.c

md5.o: $(COMMON_H) ${srcdir}/ppp/md5.c
	$(CC) $(PPPCFLAGS) -c ${srcdir}/ppp/md5.c

pppdfncs.o: $(COMMON_H) ${srcdir}/ppp/pppdfncs.c
	$(CC) $(PPPCFLAGS) -c ${srcdir}/ppp/pppdfncs.c

upap.o: $(COMMON_H) ${srcdir}/ppp/upap.c
	$(CC) $(PPPCFLAGS) -c ${srcdir}/ppp/upap.c


cksum.o: $(COMMON_H) ${srcdir}/cksum.c
	$(CC) $(CFLAGS) -c ${srcdir}/cksum.c

debug.o: $(COMMON_H) ${srcdir}/debug.c
	$(CC) $(CFLAGS) -c ${srcdir}/debug.c

if.o: $(COMMON_H) ${srcdir}/if.c
	$(CC) $(CFLAGS) -c ${srcdir}/if.c

ip_icmp.o: ${srcdir}/ip_icmp.c $(COMMON_H) ${srcdir}/ip.h 
	$(CC) $(CFLAGS) -c -o $@ $<

ip_input.o: ${srcdir}/ip_input.c $(COMMON_H) ${srcdir}/ip.h 
	$(CC) $(CFLAGS) -c -o $@ $<

ip_output.o: ${srcdir}/ip_output.c $(COMMON_H) ${srcdir}/ip.h
	$(CC) $(CFLAGS) -c -o $@ $<

main.o: $(COMMON_H) ${srcdir}/main.c
	$(CC) $(CFLAGS) -c ${srcdir}/main.c

mbuf.o: $(COMMON_H) ${srcdir}/mbuf.c
	$(CC) $(CFLAGS) -c ${srcdir}/mbuf.c

misc.o: $(COMMON_H) ${srcdir}/misc.c
	$(CC) $(CFLAGS) -c ${srcdir}/misc.c

options.o: $(COMMON_H) ${srcdir}/options.c
	$(CC) $(CFLAGS) -c ${srcdir}/options.c

ppp.o: $(COMMON_H) ${srcdir}/ppp.c
	$(CC) $(CFLAGS) -c ${srcdir}/ppp.c

sbuf.o: $(COMMON_H) ${srcdir}/sbuf.c
	$(CC) $(CFLAGS) -c ${srcdir}/sbuf.c

sl.o: $(COMMON_H) ${srcdir}/sl.c
	$(CC) $(CFLAGS) -c ${srcdir}/sl.c

slcompress.o: $(COMMON_H) ${srcdir}/slcompress.c
	$(CC) $(CFLAGS) -c ${srcdir}/slcompress.c

socket.o: $(COMMON_H) ${srcdir}/socket.c
	$(CC) $(CFLAGS) -c ${srcdir}/socket.c

tcp_input.o: $(COMMON_H) ${srcdir}/tcp_input.c
	$(CC) $(CFLAGS) -c ${srcdir}/tcp_input.c

tcp_output.o: $(COMMON_H) ${srcdir}/tcp_output.c
	$(CC) $(CFLAGS) -c ${srcdir}/tcp_output.c

tcp_subr.o: $(COMMON_H) ${srcdir}/tcp_subr.c
	$(CC) $(CFLAGS) -c ${srcdir}/tcp_subr.c

tcp_timer.o: $(COMMON_H) ${srcdir}/tcp_timer.c
	$(CC) $(CFLAGS) -c ${srcdir}/tcp_timer.c

terminal.o: $(COMMON_H) ${srcdir}/terminal.c
	$(CC) $(CFLAGS) -c ${srcdir}/terminal.c

ttys.o: $(COMMON_H) ${srcdir}/ttys.c
	$(CC) $(CFLAGS) -c ${srcdir}/ttys.c

udp.o: $(COMMON_H) ${srcdir}/udp.c
	$(CC) $(CFLAGS) -c ${srcdir}/udp.c

memcmp.o: ${srcdir}/memcmp.c
	$(CC) $(CFLAGS) -c ${srcdir}/memcmp.c

strtoul.o: ${srcdir}/strtoul.c
	$(CC) $(CFLAGS) -c ${srcdir}/strtoul.c


.c.o: $(COMMON_H)
	$(CC) $(CFLAGS) -c $< -o $@

