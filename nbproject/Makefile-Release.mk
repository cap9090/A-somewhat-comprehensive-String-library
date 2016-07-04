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
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-MacOSX
CND_DLIB_EXT=dylib
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/begins_with_ignore.o \
	${OBJECTDIR}/center.o \
	${OBJECTDIR}/chop.o \
	${OBJECTDIR}/ellipsize.o \
	${OBJECTDIR}/ends_with_ignore_case.o \
	${OBJECTDIR}/find_index.o \
	${OBJECTDIR}/find_ptr.o \
	${OBJECTDIR}/index_of_first_difference.o \
	${OBJECTDIR}/is_blank.o \
	${OBJECTDIR}/lstrip.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/make_space.o \
	${OBJECTDIR}/remove_chars.o \
	${OBJECTDIR}/repeat.o \
	${OBJECTDIR}/replace.o \
	${OBJECTDIR}/rstrip.o \
	${OBJECTDIR}/slice.o \
	${OBJECTDIR}/strcmp_ign_case.o \
	${OBJECTDIR}/strip.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/stringlib

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/stringlib: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/stringlib ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/begins_with_ignore.o: begins_with_ignore.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/begins_with_ignore.o begins_with_ignore.c

${OBJECTDIR}/center.o: center.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/center.o center.c

${OBJECTDIR}/chop.o: chop.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chop.o chop.c

${OBJECTDIR}/ellipsize.o: ellipsize.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ellipsize.o ellipsize.c

${OBJECTDIR}/ends_with_ignore_case.o: ends_with_ignore_case.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ends_with_ignore_case.o ends_with_ignore_case.c

${OBJECTDIR}/find_index.o: find_index.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/find_index.o find_index.c

${OBJECTDIR}/find_ptr.o: find_ptr.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/find_ptr.o find_ptr.c

${OBJECTDIR}/index_of_first_difference.o: index_of_first_difference.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/index_of_first_difference.o index_of_first_difference.c

${OBJECTDIR}/is_blank.o: is_blank.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/is_blank.o is_blank.c

${OBJECTDIR}/lstrip.o: lstrip.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/lstrip.o lstrip.c

${OBJECTDIR}/main.o: main.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.c

${OBJECTDIR}/make_space.o: make_space.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/make_space.o make_space.c

${OBJECTDIR}/remove_chars.o: remove_chars.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/remove_chars.o remove_chars.c

${OBJECTDIR}/repeat.o: repeat.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/repeat.o repeat.c

${OBJECTDIR}/replace.o: replace.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/replace.o replace.c

${OBJECTDIR}/rstrip.o: rstrip.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/rstrip.o rstrip.c

${OBJECTDIR}/slice.o: slice.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/slice.o slice.c

${OBJECTDIR}/strcmp_ign_case.o: strcmp_ign_case.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/strcmp_ign_case.o strcmp_ign_case.c

${OBJECTDIR}/strip.o: strip.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/strip.o strip.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/stringlib

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
