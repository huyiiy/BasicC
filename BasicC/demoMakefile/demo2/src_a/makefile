OBJS=$(patsubst %.c, %.o, $(wildcard ./*.c))
TARGET=libMyDiv.a

$(TARGET):$(OBJS)
	$(AR) -r $(TARGET) $^

#模式匹配
%.o:%.c
	$(CC) -c $^ -o $@

clean:
	$(RM) $(OBJS) $(TARGET)

show:
	@echo $(AR)