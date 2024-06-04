CC=gcc  # gcc or g++

CFLAGS=-g -Wall -DNORMALUNIX -DLINUX # -DUSEASM 
LDFLAGS=-L/usr/X11R6/lib -L/usr

LIBS=-lXext -lX11 -lnsl -lm
OUTDIR=$(PWD)

# subdirectory for objects
O=$(OUTDIR)/obj
DOOM=doompi



