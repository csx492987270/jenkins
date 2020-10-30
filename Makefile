OBJS=aob.o dbf.o dbz.o ddv.o fam.o fam_2.o fmt.o msf.o npd.o ral.o ral_1.o rxs.o uaf.o udr.o uiv.o wrf.o crf.o
TARGET = basic.a

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(AR) crv $@ $^

clean:
	rm -f $(TARGET) $(OBJS)
