CPPFLAGS=-g -fpic
OUTDIR=bin/
SRCDIR=src/

BUILD_TARGETS=2D_ARAY\
	 2DArray\
	 BaseDerived\
	 ClassMembers\
	 ConstPtr\
	 ExampleSampleC\
	 ExampleSample\
	 IntArrayLength\
	 Isomorphic\
	 LinkedList\
	 MergeArraysAO\
	 StringPermutations\
	 StringClass\
	 BitwiseOperators\
	 OpenWebURL\
	 MallocExample\
	 BST\
	 EmptyClass\
	 GetEnvVars\
	 UnixCmdPreCPP11\
	 UnixCmd\
	 StructFromClass\
	 MemoryHeap\
	 ForkRunCmd\
	 DataTypes\
	 Read_line_cin

all: $(BUILD_TARGETS)

clean:
	rm ${OUTDIR}*.o

StringClass:
	g++ $(CPPFLAGS) ${SRCDIR}StringClass.cpp -o ${OUTDIR}StringClass.o

BitwiseOperators:
	g++ $(CPPFLAGS) ${SRCDIR}BitwiseOperators.cpp -o ${OUTDIR}BitwiseOperators.o

OpenWebURL:
	g++ $(CPPFLAGS) ${SRCDIR}OpenWebURL.cpp -o ${OUTDIR}OpenWebURL.o

2D_ARAY:
	g++ $(CPPFLAGS) ${SRCDIR}2D_ARAY.cpp -o ${OUTDIR}2D_ARAY.o

2DArray:
	g++ $(CPPFLAGS) ${SRCDIR}2DArray.cpp -o ${OUTDIR}2DArray.o

BaseDerived:
	g++ $(CPPFLAGS) ${SRCDIR}BaseDerived.cpp -o ${OUTDIR}BaseDerived.o

BST:
	g++ $(CPPFLAGS) ${SRCDIR}BST.cpp -o ${OUTDIR}BST.o

ClassMembers:
	g++ $(CPPFLAGS) ${SRCDIR}ClassMembers.cpp -o ${OUTDIR}ClassMembers.o

ConstPtr:
	g++ $(CPPFLAGS) ${SRCDIR}ConstPtr.cpp -o ${OUTDIR}ConstPtr.o

ExampleSampleC:
	g++ $(CPPFLAGS) ${SRCDIR}ExampleSample.c -o ${OUTDIR}ExampleSample.o

ExampleSample:
	g++ $(CPPFLAGS) ${SRCDIR}ExampleSample.cpp -o ${OUTDIR}ExampleSample.o

IntArrayLength:
	g++ $(CPPFLAGS) ${SRCDIR}IntArrayLength.cpp -o ${OUTDIR}IntArrayLength.o

Isomorphic:
	g++ $(CPPFLAGS) ${SRCDIR}Isomorphic.cpp -o ${OUTDIR}Isomorphic.o

JunkCode:
	g++ $(CPPFLAGS) ${SRCDIR}JunkCode.cpp -o ${OUTDIR}JunkCode.o

LinkedList:
	g++ $(CPPFLAGS) ${SRCDIR}LinkedList.cpp -o ${OUTDIR}LinkedList.o

MergeArraysAO:
	g++ $(CPPFLAGS) ${SRCDIR}MergeArraysAO.cpp -o ${OUTDIR}MergeArraysAO.o

StringPermutations:
	g++ $(CPPFLAGS) ${SRCDIR}StringPermutations.cpp -o ${OUTDIR}StringPermutations.o

EmptyClass:
	g++ $(CPPFLAGS) ${SRCDIR}EmptyClass.cpp -o ${OUTDIR}EmptyClass.o

MallocExample:
	cc ${SRCDIR}MallocExample.c -o ${OUTDIR}MallocExample.o

GetEnvVars:
	g++ $(CPPFLAGS) ${SRCDIR}GetEnvVars.cpp -o ${OUTDIR}GetEnvVars.o

UnixCmdPreCPP11:
	g++ $(CPPFLAGS) ${SRCDIR}UnixCmdPreCPP11.cpp -o ${OUTDIR}UnixCmdPreCPP11.o

UnixCmd:
	g++ $(CPPFLAGS) -std=c++0x ${SRCDIR}UnixCmd.cpp -o ${OUTDIR}UnixCmd.o

StructFromClass:
	g++ $(CPPFLAGS) ${SRCDIR}StructFromClass.cpp -o ${OUTDIR}StructFromClass.o

RunUnixCmd:
	-g++ $(CPPFLAGS) -std=c++0x ${SRCDIR}RunUnixCmd.cpp -o ${OUTDIR}RunUnixCmd.o

MemoryHeap:
	g++ $(CPPFLAGS) ${SRCDIR}MemoryHeap.cpp -o ${OUTDIR}MemoryHeap.o

ForkRunCmd:
	g++ $(CPPFLAGS) ${SRCDIR}ForkRunCmd.cpp -o ${OUTDIR}ForkRunCmd.o

DataTypes:
	g++ $(CPPFLAGS) ${SRCDIR}DataTypes.cpp -o ${OUTDIR}DataTypes.o

Read_line_cin:
	g++ $(CPPFLAGS) ${SRCDIR}Read_line_cin.cpp -o ${OUTDIR}Read_line_cin.o

