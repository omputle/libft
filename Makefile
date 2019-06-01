exe: test
	./test

test: run.c ft_memccpy.c
	cc -o test run.c ft_memccpy.c
	clear

c:
	rm -r test
	clear

norm:
	Norminette -R CheckForbiddenSourceHeader
