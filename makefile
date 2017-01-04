all: bstmake


bstmake: Main.o BST.o TNode.o Student.o
	g++ Main.o BST.o TNode.o Student.o -o bstmake

Main.o: Main.cpp
	g++ -o Main.o -c Main.cpp

BST.o: BST.cpp
	g++ -o BST.o -c BST.cpp

TNode.o: TNode.cpp
	g++ -o TNode.o -c TNode.cpp

Student.o: Student.cpp
	g++ -o Student.o -c Student.cpp

clean:
	rm *.o bstmake
