SRCS = ../rtl/ustcpv.v ../rtl/top.v test.v
XSIM = test.o
VCDS = test.vcd

all: $(VCDS)

clean:
	-rm $(VCDS) $(XSIM)

$(VCDS): $(XSIM)
	./$(XSIM)

$(XSIM): $(SRCS)
	iverilog -o $(XSIM) $(SRCS)
