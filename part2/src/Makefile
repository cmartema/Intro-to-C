CC 	 = gcc
TARGET   = convert
C_FILES  = $(wildcard *.c)
OBJS 	 = $(patsubt %.c,%.o,$(C_FILES)) 
C_FLAGS  = -g -Wall -Werror -pedantic-errors
LD_FLAGS = 

.PHONY: all clean 
all: $(TARGET) 
$(TARGET) : $(OBJS) 
	$(CC) $(OBJS) -o $(TARGET) $(LDFLAGS) 
%.o: %.c %.h 
	$(CC) $(CFLAGS) -c -o $@ $< 
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $< 
clean: 
	rm -f $(OBJS) $(TARGET) $(TARGET).exe
