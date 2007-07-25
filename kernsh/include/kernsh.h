/*
** kernsh.h for kernsh
** 
** $Id: kernsh.h,v 1.2 2007-07-25 21:55:06 pouik Exp $
**
*/
#ifndef __KERNSH_H__
 #define __KERNSH_H__

/* User defined configuration */
#include "revm.h"

/* Help strings */
#include "kernsh-help.h"

#define KERNSH_SNAME	       	"kernsh"
#define KERNSH_NAME		"Kernsh shell"
#define KERNSH_VERSION 		"0.8"
#define KERNSH_RELEASE		"a"
#define KERNSH_EDITION		"dev"
#define KERNSH_CONFIG		".kernshrc"

/* Commands */
#define	CMD_OPENMEM		"openmem"
#define CMD_CLOSEMEM            "closemem"
#define CMD_KMODE		"mode"
#define CMD_SCT		        "sct"
#define CMD_IDT			"idt"
#define CMD_MEM			"mem"

/* Commands execution handlers, each in their respective file */
int	cmd_openmem();
int     cmd_closemem();
int	cmd_kmode();
int     cmd_sct();
int	cmd_idt();
int	cmd_mem();

int	kernsh_config();

/* Top skeleton functions */
int	vm_main(int ac, char **av);

/* Commands registration */
void	setup_local_cmdhash();

#endif /* __KERNSH_H_ */

