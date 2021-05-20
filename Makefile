%: %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $< -o $@

test_power: power
	./power

test_factorial: factorial
	./factorial
