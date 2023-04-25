export COMPILER := gcc
export EXE_FILE := queue
export SOURCE_FILES := $(wildcard *.cpp)
export DEP_FOLDER := DEPS
export OBJ_FILES := $(patsubst %.cpp, %.o, $(SOURCE_FILES))
export DEP_FILES := $(patsubst %.cpp, $(DEP_FOLDER)/%.dep, $(SOURCE_FILES))

.PHONY: run
run: $(EXE_FILE)
	./queue
$(EXE_FILE) : $(OBJ_FILES)
	gcc $^ -lm -lstdc++ -o $@

%.o :
	gcc -c $< -o $@

$(DEP_FOLDER)/%.dep : %.cpp
	mkdir -p $(DEP_FOLDER)
	gcc -M $< -o $@

ifneq ($(MAKECMDGOALS),clean)
    -include $(DEP_FILES)
endif

.PHONY: clean
clean:
	rm -rf $(OBJ_FILES) $(DEP_FOLDER) $(EXE_FILE)

