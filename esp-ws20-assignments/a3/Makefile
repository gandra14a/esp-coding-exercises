CC            := clang
CCFLAGS       := -Wall -Wextra -Werror -pedantic -std=c17 -g
ASSIGNMENT    := main
.DEFAULT_GOAL := help
TESTRUNNER    := ./../../testrunner -c test.toml

.PHONY: reset clean bin lib all run test help

reset:			## resets the config files
	@echo "[\033[36mINFO\033[0m] Resetting config files..."
	rm -rf ./config
	mkdir ./config
	cp tests/*/*conf* config/
	#find ./tests -type f -name "config_*.bin" -exec cp -r -t ./config {} +

clean:			## cleans up project folder
	@echo "[\033[36mINFO\033[0m] Cleaning up folder..."
	rm -f $(ASSIGNMENT)
	rm -rf ./config
	rm -f testreport.html
	rm -rf valgrind_logs

bin:			## compiles project to executable binary
	@echo "[\033[36mINFO\033[0m] Compiling binary..."
	$(CC) $(CCFLAGS) -o $(ASSIGNMENT) $(ASSIGNMENT).c framework.c
	chmod +x $(ASSIGNMENT)

all: clean reset bin	## all of the above

run: all		## runs the project with default config
	@echo "[\033[36mINFO\033[0m] Executing binary..."
	./$(ASSIGNMENT) ./config/config_02.bin

test: all		## runs public testcases on the project
	@echo "[\033[36mINFO\033[0m] Executing testrunner..."
	$(TESTRUNNER)
	
help:			## prints the help text
	@echo "Usage: make \033[36m<TARGET>\033[0m"
	@echo "Available targets:"
	@awk -F':.*?##' '/^[a-zA-Z_-]+:.*?##.*$$/{printf "  \033[36m%-10s\033[0m%s\n", $$1, $$2}' $(MAKEFILE_LIST)
