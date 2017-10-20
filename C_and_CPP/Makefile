# -----------------------------------------------------------------------------
# Top level Makefile
# -----------------------------------------------------------------------------

.PHONY : C_Str\
	 FileOperation_RW\
	 Misc_Examples\
	 Multithreading\
	 Sockets\
	 clean\
	 all

all: C_Str\
	 FileOperation_RW\
	 Misc_Examples\
	 Multithreading\
	 Sockets

C_Str:
	$(MAKE) -C C_Str

FileOperation_RW:
	$(MAKE) -C FileOperation_RW

Misc_Examples:
	 $(MAKE) -C Misc_Examples

Multithreading:
	$(MAKE) -C Multithreading

Sockets:
	$(MAKE) -C Sockets

clean:
	$(MAKE) -C C_Str clean
	$(MAKE) -C FileOperation_RW clean
	$(MAKE) -C Misc_Examples clean
	$(MAKE) -C Multithreading clean
	$(MAKE) -C Sockets clean

