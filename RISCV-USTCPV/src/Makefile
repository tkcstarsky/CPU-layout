CROSS = riscv32-unknown-elf
CCPATH = /usr/local/share/gcc-$(CROSS)/bin/

    CC = $(CCPATH)/$(CROSS)-gcc
    AS = $(CCPATH)/$(CROSS)-as
    LD = $(CCPATH)/$(CROSS)-ld
    OC = $(CCPATH)/$(CROSS)-objcopy
    OD = $(CCPATH)/$(CROSS)-objdump

CFLAGS = -Wall # -O3 -fomit-frame-pointer -march=rv32i
AFLAGS = 
LFLAGS = -Ttext=0 -Map=$(PROJ).map
OFLAGS = -O binary
DFLAGS = -d

PROJ = ustcpv
OBJS = boot.o hello.o

all:
	make $(PROJ).hex

clean:
	-rm *.s *.o $(PROJ).{bin,hex,lst,map}

%.o: %.c
	$(CC) $(CFLAGS) -S $< # -o $@.s
	$(CC) $(CFLAGS) -c $< # -o $@

$(PROJ).o: $(OBJS)
	$(LD) $(LFLAGS) $(OBJS) -o $@

$(PROJ).bin: $(PROJ).o
	$(OC) $(OFLAGS) $< $@
	$(OD) $(DFLAGS) $< > $(PROJ).lst

$(PROJ).hex: $(PROJ).bin
	hexdump -ve '1/4 "%08x\n"' $< > $@
