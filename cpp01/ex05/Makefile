EXEC = harl
INCLUDE = harl.hpp

CC = c++
CFLAGS = -Wall -Wextra -Werror -g3 -std=c++98

SRC = $(shell find -iname "*.cpp")
OBJDIR = extras
OBJ = $(addprefix $(OBJDIR)/, $(SRC:.cpp=.o))

RM = rm -f

.PHONY: all clean fclean re

all: $(EXEC)
$(EXEC): $(OBJ)
	@$(CC) $(OBJ) -o $(EXEC)

pe: all
	@echo "                                     ..';clodxxxxkxxddolc,'.."
	@echo "                                 .';clodxxddoolc:clllllloxxxdol:,.."
	@echo "                             .':oxkxdoolc:,'............';::cdkkxxdl:'."
	@echo "                          .;oxkkkkd:'......   .....     ....':oddxxkkkdl;."
	@echo "                       .;okkOkxolc;......                 ...',,;coxkkxkkdl,."
	@echo "                     .cxkkkkxo:,'..                         .....':oxxxxkxkxd:."
	@echo "                   .cxkkkkxl;...                  ..    ..........,:oxkxxxxxxxd:."
	@echo "                 .cxOkkkkko:..         .............................':oxxxxxxxxxd:."
	@echo "                ;dkkkkkkkdc'..  .........',''''..''.............. ....;oxxxxxxxxxxl,"
	@echo "              .ckOkkkkkxo,............'',:lcc:;,''..''............ ...';lxxxxxxxdxxoc."
	@echo "             .okkkkkkkxl,...  ...'',,;::codddxxkxl;,;cc,,;;;'....  .....:dxxxxxdddxddl."
	@echo "            'okkkkkkxxo;.... ..;ldddxkkOOO0000KKKK0kkkkxddxdo:,....... .':dxddxddxxddxl."
	@echo "           'dkkxxxkkkxc'.....':dO0000KKKXXXXXKXXKKKKKK00OOOkxdoll:'.     .lxddxddddddddo'"
	@echo "          .okxxxxxxxxl,.....';okO0000KKKXXXXXXXKKKKKKK000Okkxxxxdo;..    .,oxdddddddddddc."
	@echo "         .ckxxxxxxkkdc'.....':dkO000KKKKXXXXXXXXXXXXKKK000Okkxxddl:'..    .cxxddddddddddd:."
	@echo "         ;dxxxxxxxxxd:'... .,lxOO00KKKKKKKKKKKKKKKKKK00OOOkkkkxddol:'.    .cxxdddddddddddo,"
	@echo "        .oxxxxxxxxxxd;.... .cxkOOOOOOOOOOkkOOOO000OOOkxxxxxxkxxddooc;.    ,oddddddddddddddc."
	@echo "        ,dxxxxxxxxdxd:..  .:dxkkxddolc;;::clodxxxxddolc::::::::ccccc;.   .:dddddddddddddddo'"
	@echo "        :xxxxxxxxxxxdl'.  'lxxxxdddolc;,''',:loddllc;,'...',;;:::::;;,.  ,odddddddddddddddd:"
	@echo "       .lxxxxxxxxdxxdd:. .;ddolc:;;;;;,'''',:oxkkol:,......'',''',,,,,. .cdoddoddddddddodooc."
	@echo "       .lxdxxddxddxxxdl, .cdlc;'.''.. .,;;:loxOKKkdl;,,'',..........',..'lddddodddddoooooooc."
	@echo "       .oxdxxddxxddxxdd:.'oxolc:::cl::lddxkkkO0KKOkdoodoodo:;;;'....','.,odddddodddooooooodc."
	@echo "       .lxddddxxddddddd:.:xkkkkkxxxxxxkO000OO0KKKOkxddxkxxxdolllcccccc:.'lddodoooddooooooodc."
	@echo "       .cxddddddddxdddd:'lOOOO00000000KKK00OO00KKOkxddxkkOOkkkxxxxxddoc'.;odoooodddoooooood:."
	@echo "        ;dddddddddddddd:;dO0000KKKKKKKKK00OOO0KKK0OkdddxkO0O00OOOkkxdol,.,oddoddoddoooooooo;"
	@echo "        'oxddddddddddddlldkO000KKKKKKKK0OOOOO0KKKOkkxkkxxO0OO0OOOkxddoc,.;oddoddooooooooool."
	@echo "        .:ddddddddddddddxdxOOO000KKK0OOOkddoodxkxoll::::lxOOOOOkkxdoll:,,cdododdoooooooooo:."
	@echo "         .oddoodoooooooxxdddxkkOOOkkxxkko;...',;;,'.....,lkkxkxxdolc:;;,;odoooodoooooooool."
	@echo "          ;odddoooooooodxdolooddddolldkOkdllc;'.''''..',;lddooolcc:;,,,,;looooooooooooloo,"
	@echo "          .;odooooooooodddllccclc;,:loxkkkkkkdl;'...';cooollc::;;,,,,',;looooooooooooooo;"
	@echo "           .:ooooooooooooolccccc:;;::::ccllcclllc,'',;:;;,,,;;;;,,',,,,cooooooooooooloo:."
	@echo "            .;loooooooooolcclcccllollllc:::ccllcc::;;,,'',,;:cc:;;;;,,;:cloooooooooloo;."
	@echo "             .;loooooooloolccclcclodxkkkxxdxxkxxxdoooooloooollc:::;;,,,,;:cooooooolol,."
	@echo "               'clooloooollc::cccclodxxxxxxxxxddoooooooolllllc:::;;,,,''',;:clooooo:'"
	@echo "                .;llooooooolc;:clllodxxxxxxxxxxdddddooolllllcc::;,,,'...'',,;colll,."
	@echo "                  .:odkOOOkxoc;;:coddxxxxkkkOkkkxxxxddooolllc:;;,,'''.. ..'',cll;."
	@echo "                    .ckOOOOkko;.';clodxkkkOOOOkkkkxxxdddoolc:;,,'..',..  ..';cc'"
	@echo "                      'lkOOOOkc...,;:ldxkkxkxxxxxxxxdddool:;,,'...',,..  ..''."
	@echo "                        .:ok0Oo,...',;:lodddoollllllllllc;,,'....',,'..."
	@echo "                           .;lol,....'';::::;;;;;;;;;;;;;,... ..,,;,.."
	@echo "                              ..... ....'',,'',,,,,,,,,,'... ..,,'.."
	@echo "                                     ....''''',,,;;,,,''..   ..."
	@echo

$(OBJDIR)/%.o: %.cpp $(INCLUDE)
	@mkdir -p "$(OBJDIR)"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) -rf $(OBJ) $(OBJDIR)

fclean: clean
	@$(RM) $(EXEC)

re: fclean all