################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TestDispatchable/TrafficAccident.cpp 

OBJS += \
./TestDispatchable/TrafficAccident.o 

CPP_DEPS += \
./TestDispatchable/TrafficAccident.d 


# Each subdirectory must supply rules for building sources it contributes
TestDispatchable/%.o: ../TestDispatchable/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/khanhn/workspace/Dispatcher-Dispatchable/Singleton" -I"/home/khanhn/workspace/Dispatcher-Dispatchable/Dispatcher" -I"/home/khanhn/workspace/Dispatcher-Dispatchable/Events" -I"/home/khanhn/workspace/Dispatcher-Dispatchable/Dispatchable" -I"/home/khanhn/workspace/Dispatcher-Dispatchable/Threading" -I"/home/khanhn/workspace/Dispatcher-Dispatchable/Observer" -I"/home/khanhn/workspace/Dispatcher-Dispatchable/TestDispatchable" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


