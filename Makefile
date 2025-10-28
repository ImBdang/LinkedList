NAME = main


SRC_DIR = src
INC_DIR = inc


SRC_LIST = $(wildcard $(SRC_DIR)/*.c)


main:
	@gcc $(SRC_LIST) -I$(INC_DIR) -o $(NAME)

clean: 
	@rm -f $(NAME)