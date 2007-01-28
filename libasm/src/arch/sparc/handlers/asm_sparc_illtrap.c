#include "libasm.h"

int
asm_sparc_illtrap(asm_instr * ins, u_char * buf, u_int len,
		  asm_processor * proc)
{
  struct s_decode_branch opcode;
  sparc_convert_branch(&opcode, buf, proc);

  ins->instr = ASM_SP_ILLTRAP;
  ins->nb_op = 1;
  ins->op1.type = ASM_SP_OTYPE_IMMEDIATE;
  ins->op1.imm = opcode.immediate;

  return 4;
}
