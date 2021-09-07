# comments added by hash operator

# below is the syntax for adding makefile commands

# Target : Dependencies
#<1 TAB SPACE>Command

PROJECT_NAME = a.exe

SRC = main.c\
src/add.c\
src/modify.c\
src/view.c\
src/search.c\
src/delete.c\
src/gotoxy.c

INC = inc

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

$(PROJECT_NAME): $(SRC)
	gcc -I $(INC) $(SRC) -o a.exe
	
run: $(PROJECT_NAME)
	$(PROJECT_NAME)
	
clean:
	del /q *.exe