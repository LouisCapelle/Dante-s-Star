all:
	make -C ./generator/

clean:
	make clean -C ./generator/

fclean:
	make fclean -C ./generator/

re:
	make re -C ./generator/

.PHONY: all clean fclean re
