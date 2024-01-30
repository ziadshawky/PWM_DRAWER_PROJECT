################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../PWM/PWM.c \
../PWM/PWM_Lconfig.c 

OBJS += \
./PWM/PWM.o \
./PWM/PWM_Lconfig.o 

C_DEPS += \
./PWM/PWM.d \
./PWM/PWM_Lconfig.d 


# Each subdirectory must supply rules for building sources it contributes
PWM/%.o: ../PWM/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


