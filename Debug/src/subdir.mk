################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/advancedC_homework1.c \
../src/task1.c \
../src/task2.c \
../src/task3.c 

C_DEPS += \
./src/advancedC_homework1.d \
./src/task1.d \
./src/task2.d \
./src/task3.d 

OBJS += \
./src/advancedC_homework1.o \
./src/task1.o \
./src/task2.o \
./src/task3.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -I/run/user/1000/doc/69ce50fd/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/advancedC_homework1.d ./src/advancedC_homework1.o ./src/task1.d ./src/task1.o ./src/task2.d ./src/task2.o ./src/task3.d ./src/task3.o

.PHONY: clean-src

