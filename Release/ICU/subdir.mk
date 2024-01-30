################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ICU/ICU.c \
../ICU/ICU_Lconfig.c 

OBJS += \
./ICU/ICU.o \
./ICU/ICU_Lconfig.o 

C_DEPS += \
./ICU/ICU.d \
./ICU/ICU_Lconfig.d 


# Each subdirectory must supply rules for building sources it contributes
ICU/%.o: ../ICU/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


