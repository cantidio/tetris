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
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_CONF=Release
CND_DISTDIR=dist

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=build/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/_DOTDOT/src/piece_l.o \
	${OBJECTDIR}/_ext/_DOTDOT/src/piece_handler.o \
	${OBJECTDIR}/_ext/_DOTDOT/src/brick.o \
	${OBJECTDIR}/_ext/_DOTDOT/src/piece.o \
	${OBJECTDIR}/_ext/_DOTDOT/src/piece_z.o \
	${OBJECTDIR}/_ext/_DOTDOT/src/piece_u.o \
	${OBJECTDIR}/_ext/_DOTDOT/src/board.o \
	${OBJECTDIR}/_ext/_DOTDOT/src/brick_empty.o \
	${OBJECTDIR}/_ext/_DOTDOT/src/score.o \
	${OBJECTDIR}/_ext/_DOTDOT/src/piece_o.o \
	${OBJECTDIR}/_ext/_DOTDOT/src/brick_colored.o \
	${OBJECTDIR}/_ext/_DOTDOT/src/piece_i.o \
	${OBJECTDIR}/_ext/_DOTDOT/src/piece_j.o \
	${OBJECTDIR}/_ext/_DOTDOT/src/piece_t.o \
	${OBJECTDIR}/_ext/_DOTDOT/src/game.o \
	${OBJECTDIR}/_ext/_DOTDOT/src/piece_s.o

# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	${MAKE}  -f nbproject/Makefile-Release.mk dist/Release/GNU-Linux-x86/tetris_linux

dist/Release/GNU-Linux-x86/tetris_linux: ${OBJECTFILES}
	${MKDIR} -p dist/Release/GNU-Linux-x86
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tetris_linux ${OBJECTFILES} ${LDLIBSOPTIONS} 

${OBJECTDIR}/_ext/_DOTDOT/src/piece_l.o: nbproject/Makefile-${CND_CONF}.mk ../src/piece_l.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/_DOTDOT/src
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/_DOTDOT/src/piece_l.o ../src/piece_l.cpp

${OBJECTDIR}/_ext/_DOTDOT/src/piece_handler.o: nbproject/Makefile-${CND_CONF}.mk ../src/piece_handler.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/_DOTDOT/src
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/_DOTDOT/src/piece_handler.o ../src/piece_handler.cpp

${OBJECTDIR}/_ext/_DOTDOT/src/brick.o: nbproject/Makefile-${CND_CONF}.mk ../src/brick.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/_DOTDOT/src
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/_DOTDOT/src/brick.o ../src/brick.cpp

${OBJECTDIR}/_ext/_DOTDOT/src/piece.o: nbproject/Makefile-${CND_CONF}.mk ../src/piece.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/_DOTDOT/src
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/_DOTDOT/src/piece.o ../src/piece.cpp

${OBJECTDIR}/_ext/_DOTDOT/src/piece_z.o: nbproject/Makefile-${CND_CONF}.mk ../src/piece_z.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/_DOTDOT/src
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/_DOTDOT/src/piece_z.o ../src/piece_z.cpp

${OBJECTDIR}/_ext/_DOTDOT/src/piece_u.o: nbproject/Makefile-${CND_CONF}.mk ../src/piece_u.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/_DOTDOT/src
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/_DOTDOT/src/piece_u.o ../src/piece_u.cpp

${OBJECTDIR}/_ext/_DOTDOT/src/board.o: nbproject/Makefile-${CND_CONF}.mk ../src/board.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/_DOTDOT/src
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/_DOTDOT/src/board.o ../src/board.cpp

${OBJECTDIR}/_ext/_DOTDOT/src/brick_empty.o: nbproject/Makefile-${CND_CONF}.mk ../src/brick_empty.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/_DOTDOT/src
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/_DOTDOT/src/brick_empty.o ../src/brick_empty.cpp

${OBJECTDIR}/_ext/_DOTDOT/src/score.o: nbproject/Makefile-${CND_CONF}.mk ../src/score.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/_DOTDOT/src
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/_DOTDOT/src/score.o ../src/score.cpp

${OBJECTDIR}/_ext/_DOTDOT/src/piece_o.o: nbproject/Makefile-${CND_CONF}.mk ../src/piece_o.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/_DOTDOT/src
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/_DOTDOT/src/piece_o.o ../src/piece_o.cpp

${OBJECTDIR}/_ext/_DOTDOT/src/brick_colored.o: nbproject/Makefile-${CND_CONF}.mk ../src/brick_colored.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/_DOTDOT/src
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/_DOTDOT/src/brick_colored.o ../src/brick_colored.cpp

${OBJECTDIR}/_ext/_DOTDOT/src/piece_i.o: nbproject/Makefile-${CND_CONF}.mk ../src/piece_i.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/_DOTDOT/src
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/_DOTDOT/src/piece_i.o ../src/piece_i.cpp

${OBJECTDIR}/_ext/_DOTDOT/src/piece_j.o: nbproject/Makefile-${CND_CONF}.mk ../src/piece_j.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/_DOTDOT/src
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/_DOTDOT/src/piece_j.o ../src/piece_j.cpp

${OBJECTDIR}/_ext/_DOTDOT/src/piece_t.o: nbproject/Makefile-${CND_CONF}.mk ../src/piece_t.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/_DOTDOT/src
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/_DOTDOT/src/piece_t.o ../src/piece_t.cpp

${OBJECTDIR}/_ext/_DOTDOT/src/game.o: nbproject/Makefile-${CND_CONF}.mk ../src/game.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/_DOTDOT/src
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/_DOTDOT/src/game.o ../src/game.cpp

${OBJECTDIR}/_ext/_DOTDOT/src/piece_s.o: nbproject/Makefile-${CND_CONF}.mk ../src/piece_s.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/_DOTDOT/src
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/_DOTDOT/src/piece_s.o ../src/piece_s.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf:
	${RM} -r build/Release
	${RM} dist/Release/GNU-Linux-x86/tetris_linux

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
