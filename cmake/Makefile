all: lib
	gcc main.c -L. -lab -o test
	@echo "Finalizado"
a.o:
	gcc a.c -c
b.o:
	gcc b.c -c
clean:
	rm a.o b.o test libAB.a
lib: a.o b.o
	@echo Gerando o lib estática final
	ar rcs libAB.a a.o b.o
