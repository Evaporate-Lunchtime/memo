IDIR = include
CC = gcc
CFLAGS = -I$(IDIR)

ODIR = src/obj
LDIR = lib

LIBS = -lm

_DEPS = memo.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = memo.o libmemo.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

#$(LDIR)/%.o: %.c $(DEPS)
#	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/%.o: %.c $(LDIR)
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

memo: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean: 
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~