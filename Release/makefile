################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include PWM/subdir.mk
-include LCD/subdir.mk
-include ICU/subdir.mk
-include GPT/subdir.mk
-include GLCD/subdir.mk
-include DIO/subdir.mk
-include APP/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
PWM_project.lss \

FLASH_IMAGE += \
PWM_project.hex \

EEPROM_IMAGE += \
PWM_project.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: PWM_project.elf secondary-outputs

# Tool invocations
PWM_project.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,PWM_project.map -mmcu=atmega32 -o "PWM_project.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

PWM_project.lss: PWM_project.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S PWM_project.elf  >"PWM_project.lss"
	@echo 'Finished building: $@'
	@echo ' '

PWM_project.hex: PWM_project.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex PWM_project.elf  "PWM_project.hex"
	@echo 'Finished building: $@'
	@echo ' '

PWM_project.eep: PWM_project.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex PWM_project.elf  "PWM_project.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: PWM_project.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 PWM_project.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) PWM_project.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
