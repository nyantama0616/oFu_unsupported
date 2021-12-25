SRCS = $(patsubst src/%.cpp, %, ${wildcard src/*.cpp})
PARTS = $(patsubst src/parts/%.cpp, %, ${wildcard src/parts/*.cpp})
LIBS = $(patsubst lib/%.cpp, %, ${wildcard lib/*.cpp})
OBJS = ${wildcard obj/*.o}

# ↑の変数確認
desc:
	echo SRCS = ${SRCS}
	echo PARTS = ${PARTS}
	echo LIBS = ${LIBS}
	echo OBJS = ${OBJS}

# dirとsrcを渡す
compile:
	g++ -c ${dir}/${src}.cpp -o obj/${src}.o -lwiringPi

compile_all:
	make clean
	for src in ${SRCS}; do make compile dir=src src=$${src}; done
	for src in ${PARTS}; do make compile dir=src/parts src=$${src}; done
	for src in ${LIBS}; do make compile dir=lib src=$${src}; done

link:
	g++ ${OBJS} -lm -o main -lwiringPi

run:
	make compile_all
	make link
	./main

clean:
	rm -f ${OBJS}
