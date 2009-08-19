#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=

# Macros
PLATFORM=GNU-Linux-x86

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=build/Release/${PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/piece_i.o \
	${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/brick_empty.o \
	${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/brick.o \
	${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/piece.o \
	${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/piece_j.o \
	${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/game.o \
	${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/piece_l.o \
	${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/score.o \
	${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/piece_o.o \
	${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/board.o \
	${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/piece_handler.o \
	${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/brick_colored.o \
	${OBJECTDIR}/_ext/home/cantidio/Development/tetris/include/piece_s.o \
	${OBJECTDIR}/_ext/home/cantidio/Development/tetris/include/piece_z.o \
	${OBJECTDIR}/_ext/home/cantidio/Development/tetris/include/piece_u.o \
	${OBJECTDIR}/_ext/home/cantidio/Development/tetris/include/piece_t.o

# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	${MAKE}  -f nbproject/Makefile-Release.mk dist/Release/${PLATFORM}/tetris

dist/Release/${PLATFORM}/tetris: ${OBJECTFILES}
	${MKDIR} -p dist/Release/${PLATFORM}
	${LINK.cc} -o dist/Release/${PLATFORM}/tetris ${OBJECTFILES} ${LDLIBSOPTIONS} 

${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/piece_i.o: /home/cantidio/Development/tetris/src/piece_i.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/piece_i.o /home/cantidio/Development/tetris/src/piece_i.cpp

${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/brick_empty.o: /home/cantidio/Development/tetris/src/brick_empty.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/brick_empty.o /home/cantidio/Development/tetris/src/brick_empty.cpp

${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/brick.o: /home/cantidio/Development/tetris/src/brick.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/brick.o /home/cantidio/Development/tetris/src/brick.cpp

${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/piece.o: /home/cantidio/Development/tetris/src/piece.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/piece.o /home/cantidio/Development/tetris/src/piece.cpp

${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/piece_j.o: /home/cantidio/Development/tetris/src/piece_j.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/piece_j.o /home/cantidio/Development/tetris/src/piece_j.cpp

${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/game.o: /home/cantidio/Development/tetris/src/game.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/game.o /home/cantidio/Development/tetris/src/game.cpp

${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/piece_l.o: /home/cantidio/Development/tetris/src/piece_l.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/piece_l.o /home/cantidio/Development/tetris/src/piece_l.cpp

${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/score.o: /home/cantidio/Development/tetris/src/score.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/score.o /home/cantidio/Development/tetris/src/score.cpp

${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/piece_o.o: /home/cantidio/Development/tetris/src/piece_o.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/piece_o.o /home/cantidio/Development/tetris/src/piece_o.cpp

${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/board.o: /home/cantidio/Development/tetris/src/board.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/board.o /home/cantidio/Development/tetris/src/board.cpp

${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/piece_handler.o: /home/cantidio/Development/tetris/src/piece_handler.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/piece_handler.o /home/cantidio/Development/tetris/src/piece_handler.cpp

${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/brick_colored.o: /home/cantidio/Development/tetris/src/brick_colored.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/home/cantidio/Development/tetris/src/brick_colored.o /home/cantidio/Development/tetris/src/brick_colored.cpp

${OBJECTDIR}/_ext/home/cantidio/Development/tetris/include/piece_s.o: /home/cantidio/Development/tetris/include/piece_s.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/home/cantidio/Development/tetris/include
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/home/cantidio/Development/tetris/include/piece_s.o /home/cantidio/Development/tetris/include/piece_s.cpp

${OBJECTDIR}/_ext/home/cantidio/Development/tetris/include/piece_z.o: /home/cantidio/Development/tetris/include/piece_z.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/home/cantidio/Development/tetris/include
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/home/cantidio/Development/tetris/include/piece_z.o /home/cantidio/Development/tetris/include/piece_z.cpp

${OBJECTDIR}/_ext/home/cantidio/Development/tetris/include/piece_u.o: /home/cantidio/Development/tetris/include/piece_u.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/home/cantidio/Development/tetris/include
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/home/cantidio/Development/tetris/include/piece_u.o /home/cantidio/Development/tetris/include/piece_u.cpp

${OBJECTDIR}/_ext/home/cantidio/Development/tetris/include/piece_t.o: /home/cantidio/Development/tetris/include/piece_t.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/home/cantidio/Development/tetris/include
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/home/cantidio/Development/tetris/include/piece_t.o /home/cantidio/Development/tetris/include/piece_t.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf:
	${RM} -r build/Release
	${RM} dist/Release/${PLATFORM}/tetris

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
