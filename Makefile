PROJECT_NAME = jack

# Paths
SOURCE_DIR       = src
SOURCE_FILES     = $(SOURCE_DIR)/*.cpp

BUILD_DIR        = build
EXEC             = $(BUILD_DIR)/$(PROJECT_NAME)
COMPILE_COMMANDS = $(BUILD_DIR)/compile_commands.json

# Utilities
MKDIR  = mkdir -p
RM     = rm -r
LINT   = clang-tidy $(SOURCE_FILES) -p $(COMPILE_COMMANDS)

# Build commands
MAKE_ALL        = make all
CMAKE_CONFIGURE = cmake . -B
CMAKE_BUILD     = cmake --build


main: configure
	$(CMAKE_BUILD) $(BUILD_DIR)

configure:
	[ -d $(BUILD_DIR) ] || $(MKDIR) $(BUILD_DIR)
	$(CMAKE_CONFIGURE) $(BUILD_DIR)

run:
	[ -d $(BUILD_DIR) ] || $(MAKE_ALL)
	$(EXEC)

clean:
	$(RM) $(BUILD_DIR)

lint:
	$(LINT)


default : main
.PHONY  : main, clean

