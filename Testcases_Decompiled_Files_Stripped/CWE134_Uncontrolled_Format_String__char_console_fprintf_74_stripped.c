
void FUN_00104522(void)

{
  return;
}




undefined8 FUN_00104778(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103106(void)

{
  return;
}




undefined8 FUN_00103ed6(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = param_3;
  local_38 = param_2;
  while (local_38 != 0) {
    uVar2 = FUN_00103b93(local_38);
    cVar1 = FUN_0010325c(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_0010356f(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00103585(local_38);
    }
  }
  FUN_00103cd0(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




long FUN_001041b4(long param_1)

{
  return param_1 + 0x20;
}




void FUN_001049c0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00104b3a(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




undefined8 FUN_00104958(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




long FUN_00102d52(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00104c02(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00104cb4(param_2);
  puVar2 = (undefined4 *)FUN_00104008(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




undefined8 FUN_00104228(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  char local_59;
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = FUN_00103190(param_1);
  local_50 = FUN_00103ec0(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00103b93(local_58);
    local_59 = FUN_0010325c(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_0010356f(local_58);
    }
    else {
      local_58 = FUN_00103585(local_58);
    }
  }
  FUN_00103cd0(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_0010483e(param_1);
    cVar1 = FUN_001031ee(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_0010488e(local_38,&local_58,&local_50);
      goto LAB_001043aa;
    }
    FUN_00104424(&local_48);
  }
  uVar2 = FUN_001041ca(local_48);
  cVar1 = FUN_0010325c(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_0010447c(local_38,&local_48,&local_40);
  }
  else {
    FUN_0010488e(local_38,&local_58,&local_50);
  }
LAB_001043aa:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00104a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103734(param_3);
  uVar1 = FUN_00103746(param_4);
  FUN_00103296(local_38,uVar1);
  FUN_00103758(param_5);
  uVar1 = FUN_00102cfc(0x10,param_2);
                    /* try { // try from 00104a98 to 00104a9c has its CatchHandler @ 00104a9f */
  FUN_00104b52(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104044(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001046f8(param_1);
  FUN_0010478d(uVar1,1);
  return;
}




void FUN_001041e8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_0010482b(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_0010447c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010482b(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




undefined8 FUN_0010496e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001036aa(undefined8 param_1)

{
  return param_1;
}




void FUN_001056a6(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00104b3a(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




long FUN_001034e6(long param_1)

{
  return param_1 + 0x10;
}




undefined8 FUN_00104536(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00105031(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00104eda(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010548a(void)

{
  return;
}




void FUN_00104998(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_0010482b(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00104008(undefined8 param_1)

{
  return param_1;
}




void FUN_001041ca(undefined8 param_1)

{
  FUN_00103b93(param_1);
  return;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00109ec8)();
  return;
}




undefined8 FUN_00103cee(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001044f4(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001054a0(void)

{
  return;
}




void FUN_00102c82(void)

{
  FUN_001027f1();
  FUN_001029da();
  return;
}




void FUN_001036bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001036aa(param_2);
  FUN_00103fb2(param_1,uVar1);
  return;
}




void FUN_00102e6a(undefined8 param_1,undefined8 param_2)

{
  FUN_0010305a(param_1,param_2);
  return;
}




void FUN_00103e42(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103688(param_2);
  uVar2 = FUN_001046f8(param_1);
  FUN_0010470a(uVar2,uVar1);
  return;
}




void FUN_00103126(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_0010356f(local_28);
    FUN_00103126(param_1,uVar1);
    lVar2 = FUN_00103585(local_28);
    FUN_0010359c(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_001050de(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




long FUN_0010454c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_001048f4(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00104958(param_2);
                    /* try { // try from 001045bb to 0010464d has its CatchHandler @ 00104679 */
    uVar2 = FUN_0010454c(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_0010496e(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_001048f4(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00104958(local_38);
      uVar2 = FUN_0010454c(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_0010496e(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void _FINI_0(void)

{
  if (DAT_0010a038 == '\0') {
    if (PTR___cxa_finalize_00109fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_0010a008);
    }
    FUN_00102490();
    DAT_0010a038 = 1;
    return;
  }
  return;
}




void FUN_00103d7c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_001046f8(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103190(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102dea(undefined8 param_1)

{
  FUN_00102ed0(param_1);
  return;
}




void FUN_001046d9(undefined8 param_1)

{
  FUN_00102d52(param_1);
  return;
}




void FUN_001053fb(void)

{
  return;
}




void FUN_0010359c(undefined8 param_1,undefined8 param_2)

{
  FUN_00103e42(param_1,param_2);
  FUN_00103e86(param_1,param_2);
  return;
}




undefined8 FUN_0010562d(undefined8 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *param_1 = 0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *param_1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}




ulong FUN_001052ce(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8 + 4));
    if (iVar1 == 0) break;
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001060b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00102d25(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_00104aee(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001034d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001044f4(undefined8 param_1,undefined8 param_2)

{
  FUN_00103d3e(param_1,param_2);
  return param_1;
}




void FUN_00104070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00102cfc(0x30,param_2);
  uVar1 = FUN_00103758(param_5);
  uVar2 = FUN_00103746(param_4);
  uVar3 = FUN_00103734(param_3);
  uVar4 = FUN_00103688(param_2);
  uVar5 = FUN_001046f8(param_1);
                    /* try { // try from 001040ff to 00104103 has its CatchHandler @ 00104106 */
  FUN_001047bb(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_001046bb(undefined8 param_1)

{
  FUN_00102d25(param_1);
  return;
}




ulong FUN_001051ca(long param_1,ulong param_2,long param_3)

{
  ushort **ppuVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2)] & 0x1000) == 0) break;
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2 + 1)] & 0x1000) == 0) break;
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001060a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103283(undefined8 param_1)

{
  return param_1;
}




void FUN_0010305a(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00103460(param_1,param_2);
  lVar1 = FUN_001034d0(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_001034e6(param_1);
                    /* try { // try from 001030b5 to 001030b9 has its CatchHandler @ 001030bf */
    uVar3 = FUN_001034fc(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00105474(void)

{
  return;
}




void FUN_00104f00(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00104cb4(undefined8 param_1)

{
  FUN_00104d0f(param_1);
  return;
}




void FUN_001054ab(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_001053ad(void)

{
  return 1;
}




void FUN_0010543d(void)

{
  return;
}




void FUN_00104b52(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00104c02(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103d9a(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00103ec0(param_1);
  uVar2 = FUN_00104536(param_2);
  uVar1 = FUN_0010454c(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001043c6(param_1);
  uVar2 = FUN_001046bb(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_001041b4(param_1);
  uVar2 = FUN_001046d9(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_001053f0(void)

{
  return;
}




undefined8 FUN_00104bb6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104044(param_1);
  uVar2 = FUN_00104ba3(param_2);
  FUN_00104c46(param_1,uVar1,uVar2);
  return uVar1;
}




undefined8 FUN_001054e2(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  pthread_t local_20;
  pthread_t *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_18 = (pthread_t *)malloc(0x18);
  if (local_18 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18[1] = param_1;
    local_18[2] = param_2;
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001054ab,local_18);
    if (iVar1 == 0) {
      *local_18 = local_20;
      *param_3 = local_18;
      uVar2 = 1;
    }
    else {
      free(local_18);
      uVar2 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}




void FUN_0010323a(undefined8 *param_1)

{
  FUN_00103688(*param_1);
  return;
}




void FUN_00103e86(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001046f8(param_1);
  FUN_00104734(uVar1,param_2,1);
  return;
}




void FUN_00104984(void)

{
  return;
}




void FUN_001047bb(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00103758(param_5);
  uVar2 = FUN_00103746(param_4);
  uVar3 = FUN_00103734(param_3);
  FUN_00104a10(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8 * FUN_00104450(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103d68(void)

{
  return;
}




void FUN_00104df2(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00102f2e(param_1,&local_1c);
  local_18 = (char *)*puVar1;
  fprintf(stdout,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104e64(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00102f2e(param_1,&local_1c);
  local_18 = *puVar1;
  fprintf(stdout,"%s\n",local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00105469(void)

{
  return;
}




void FUN_001035da(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103ec0(param_1);
  uVar2 = FUN_00103190(param_1);
  FUN_00103ed6(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00102e94(long param_1)

{
  FUN_001030e6(param_1);
  FUN_00103106(param_1);
  FUN_00102d80(param_1 + 8);
  return;
}




undefined8 FUN_00103758(undefined8 param_1)

{
  return param_1;
}




void FUN_001050b6(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




bool FUN_001055af(pthread_t *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_join(*param_1,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 == 0;
}




void FUN_00105006(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001031a6(undefined8 param_1,undefined8 param_2)

{
  FUN_001035da(param_1,param_2);
  return;
}




undefined8 FUN_001044de(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00104d80(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00102f2e(param_1,&local_1c);
  local_18 = (char *)*puVar1;
  fprintf(stdout,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102e4a(undefined8 param_1)

{
  FUN_00102ef0(param_1);
  return;
}




void FUN_00104fdb(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010401a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001036aa(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00105710(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _DT_INIT();
  lVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}




void FUN_00104b00(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00104ba3(param_2);
  FUN_00104bb6(uVar1,uVar2);
  return;
}




void FUN_001027f1(void)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined local_e8 [48];
  undefined4 local_b8 [12];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102e2a(local_e8);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_88 = 0x7274736465786966;
  local_80 = 0x74736574676e69;
  local_b8[0] = 0;
                    /* try { // try from 001028d1 to 00102952 has its CatchHandler @ 001029aa */
  plVar1 = (long *)FUN_00102f2e(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  local_b8[0] = 1;
  plVar1 = (long *)FUN_00102f2e(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  local_b8[0] = 2;
  plVar1 = (long *)FUN_00102f2e(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  FUN_00102e6a(local_b8,local_e8);
                    /* try { // try from 0010295d to 00102961 has its CatchHandler @ 00102992 */
  FUN_00104df2(local_b8);
  FUN_00102e4a(local_b8);
  FUN_00102e4a(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001043dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010482b(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_0010482b(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00105137(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00105780(void)

{
  return;
}




undefined8 FUN_00104ba3(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ed0(undefined8 param_1)

{
  FUN_00103116(param_1);
  return;
}




undefined8 FUN_00103746(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_00104424(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined4 * FUN_001048f4(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001044bc(param_2);
  puVar2 = (undefined4 *)FUN_00104b00(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




undefined4 FUN_00103214(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_0010367a(param_1);
  return unaff_EBX;
}




undefined8 FUN_00102cfc(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8
FUN_0010331a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103758(param_5);
  uVar2 = FUN_00103746(param_4);
  uVar3 = FUN_00103734(param_3);
  local_40 = FUN_0010376a(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00103396 to 001033d9 has its CatchHandler @ 00103417 */
  uVar1 = FUN_00103b93(local_40);
  local_38 = FUN_001037ea(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_0010359c(param_1,local_40);
    FUN_00103cd0(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00103be6(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_0010541c(void)

{
  return;
}




void FUN_001031d0(undefined8 param_1)

{
  FUN_0010362a(param_1);
  return;
}




int FUN_001053cb(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001053e5(void)

{
  return;
}




undefined8 FUN_0010362a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103cd0(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103585(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010545e(void)

{
  return;
}




void FUN_00102ef0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103190(param_1);
  FUN_00103126(param_1,uVar1);
  FUN_00102dea(param_1);
  return;
}




undefined8 FUN_0010414e(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103cd0(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001030e6(undefined8 param_1)

{
  FUN_00103560(param_1);
  return;
}




void FUN_001044bc(long param_1)

{
  FUN_001048d6(param_1 + 0x20);
  return;
}




undefined8 FUN_0010483e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103cd0(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00105448(void)

{
  return;
}




undefined8 FUN_001031ee(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00103fb2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001036aa(param_2);
  FUN_0010401a(param_1,uVar1);
  return;
}




undefined8
FUN_00103be6(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

{
  char cVar1;
  bool bVar2;
  _Rb_tree_node_base *p_Var3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    p_Var3 = (_Rb_tree_node_base *)FUN_00103ec0(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001041ca(param_3);
      uVar5 = FUN_00103b93(param_4);
      cVar1 = FUN_0010325c(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00103c6a;
      }
    }
  }
  bVar2 = true;
LAB_00103c6a:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00103cd0(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_0010516a(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102e0a(undefined8 param_1)

{
  FUN_00102e94(param_1);
  return;
}




void FUN_00103d3e(undefined8 param_1,undefined8 param_2)

{
  FUN_00104522(param_1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001024e4) */
/* WARNING: Removing unreachable block (ram,0x001024f0) */

void FUN_001024c0(void)

{
  return;
}




void FUN_00104d0f(undefined8 param_1)

{
  FUN_00103fea(param_1);
  return;
}




void FUN_00103296(undefined8 param_1,undefined8 param_2)

{
  FUN_001036f4(param_1,param_2);
  return;
}




void FUN_001036f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103fea(param_2);
  uVar1 = FUN_00104008(uVar1);
  FUN_0010401a(param_1,uVar1);
  return;
}




undefined8 FUN_00102c97(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00104eda("Calling good()...");
  FUN_00102c82();
  FUN_00104eda("Finished good()");
  FUN_00104eda("Calling bad()...");
  FUN_00102549();
  FUN_00104eda("Finished bad()");
  return 0;
}




void FUN_00105406(void)

{
  return;
}




void FUN_00105411(void)

{
  return;
}




long FUN_00103ec0(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_0010356f(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00105432(void)

{
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_001037ea(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  long local_50;
  long local_48 [5];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  local_60 = param_1;
  lVar3 = FUN_0010414e(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00103ec0(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001041ca(local_50);
    cVar2 = FUN_0010325c(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001041ca(local_50);
      cVar2 = FUN_0010325c(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_0010447c(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_001041b4(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_001041b4(local_60);
          local_48[1] = 0;
          FUN_001041e8(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00104450(local_48);
          uVar6 = FUN_001041ca(*puVar5);
          cVar2 = FUN_0010325c(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00104228(local_60,param_3);
          }
          else {
            lVar3 = FUN_0010356f(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001041e8(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001043dc(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001043c6(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001043c6(local_60);
        uVar6 = FUN_001043c6(local_60);
        FUN_001043dc(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00104424(local_48);
        uVar6 = FUN_001041ca(*puVar5);
        cVar2 = FUN_0010325c(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00104228(local_60,param_3);
        }
        else {
          lVar3 = FUN_0010356f(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001041e8(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001043dc(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00103b78;
  }
  lVar3 = FUN_0010419e(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_0010388c:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_001041b4(local_60);
    uVar6 = FUN_001041ca(*puVar5);
    cVar2 = FUN_0010325c(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_0010388c;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_001041b4(local_60);
    local_48[1] = 0;
    FUN_001041e8(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00104228(local_60,param_3);
  }
LAB_00103b78:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00102daa(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00103f94(undefined8 param_1)

{
  FUN_00104766(param_1);
  return;
}




void FUN_00104f5a(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102e2a(undefined8 param_1)

{
  FUN_00102e0a(param_1);
  return;
}




void FUN_00102d12(void)

{
  return;
}




long FUN_001043c6(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00104d2e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00104ba3(param_3);
  puVar3 = (undefined8 *)FUN_00102cfc(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_0010367a(void)

{
  return;
}




void FUN_00104fb0(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010470a(undefined8 param_1,undefined8 param_2)

{
  FUN_00104984(param_1,param_2);
  return;
}




undefined8 FUN_0010376a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00104044(param_1);
  uVar2 = FUN_00103758(param_4);
  uVar3 = FUN_00103746(param_3);
  uVar4 = FUN_00103734(param_2);
  FUN_00104070(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_001048d6(undefined8 param_1)

{
  FUN_00104aee(param_1);
  return;
}




void FUN_00103cd0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103fea(undefined8 param_1)

{
  FUN_00104778(param_1);
  return;
}




void FUN_0010505c(undefined4 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  local_18 = param_1;
  printf("%ls\n",&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001029da(void)

{
  char *__s;
  size_t sVar1;
  char *pcVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  undefined local_e8 [48];
  undefined4 local_b8 [11];
  char acStack_89 [105];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102e2a(local_e8);
  acStack_89[1] = '\0';
  acStack_89[2] = '\0';
  acStack_89[3] = '\0';
  acStack_89[4] = '\0';
  acStack_89[5] = '\0';
  acStack_89[6] = '\0';
  acStack_89[7] = '\0';
  acStack_89[8] = '\0';
  acStack_89[9] = '\0';
  acStack_89[10] = '\0';
  acStack_89[0xb] = '\0';
  acStack_89[0xc] = '\0';
  acStack_89[0xd] = '\0';
  acStack_89[0xe] = '\0';
  acStack_89[0xf] = '\0';
  acStack_89[0x10] = '\0';
  acStack_89[0x11] = '\0';
  acStack_89[0x12] = '\0';
  acStack_89[0x13] = '\0';
  acStack_89[0x14] = '\0';
  acStack_89[0x15] = '\0';
  acStack_89[0x16] = '\0';
  acStack_89[0x17] = '\0';
  acStack_89[0x18] = '\0';
  acStack_89[0x19] = '\0';
  acStack_89[0x1a] = '\0';
  acStack_89[0x1b] = '\0';
  acStack_89[0x1c] = '\0';
  acStack_89[0x1d] = '\0';
  acStack_89[0x1e] = '\0';
  acStack_89[0x1f] = '\0';
  acStack_89[0x20] = '\0';
  acStack_89[0x21] = '\0';
  acStack_89[0x22] = '\0';
  acStack_89[0x23] = '\0';
  acStack_89[0x24] = '\0';
  acStack_89[0x25] = '\0';
  acStack_89[0x26] = '\0';
  acStack_89[0x27] = '\0';
  acStack_89[0x28] = '\0';
  acStack_89[0x29] = '\0';
  acStack_89[0x2a] = '\0';
  acStack_89[0x2b] = '\0';
  acStack_89[0x2c] = '\0';
  acStack_89[0x2d] = '\0';
  acStack_89[0x2e] = '\0';
  acStack_89[0x2f] = '\0';
  acStack_89[0x30] = '\0';
  acStack_89[0x31] = '\0';
  acStack_89[0x32] = '\0';
  acStack_89[0x33] = '\0';
  acStack_89[0x34] = '\0';
  acStack_89[0x35] = '\0';
  acStack_89[0x36] = '\0';
  acStack_89[0x37] = '\0';
  acStack_89[0x38] = '\0';
  acStack_89[0x39] = '\0';
  acStack_89[0x3a] = '\0';
  acStack_89[0x3b] = '\0';
  acStack_89[0x3c] = '\0';
  acStack_89[0x3d] = '\0';
  acStack_89[0x3e] = '\0';
  acStack_89[0x3f] = '\0';
  acStack_89[0x40] = '\0';
  acStack_89[0x41] = '\0';
  acStack_89[0x42] = '\0';
  acStack_89[0x43] = '\0';
  acStack_89[0x44] = '\0';
  acStack_89[0x45] = '\0';
  acStack_89[0x46] = '\0';
  acStack_89[0x47] = '\0';
  acStack_89[0x48] = '\0';
  acStack_89[0x49] = '\0';
  acStack_89[0x4a] = '\0';
  acStack_89[0x4b] = '\0';
  acStack_89[0x4c] = '\0';
  acStack_89[0x4d] = '\0';
  acStack_89[0x4e] = '\0';
  acStack_89[0x4f] = '\0';
  acStack_89[0x50] = '\0';
  acStack_89[0x51] = '\0';
  acStack_89[0x52] = '\0';
  acStack_89[0x53] = '\0';
  acStack_89[0x54] = '\0';
  acStack_89[0x55] = '\0';
  acStack_89[0x56] = '\0';
  acStack_89[0x57] = '\0';
  acStack_89[0x58] = '\0';
  acStack_89[0x59] = '\0';
  acStack_89[0x5a] = '\0';
  acStack_89[0x5b] = '\0';
  acStack_89[0x5c] = '\0';
  acStack_89[0x5d] = '\0';
  acStack_89[0x5e] = '\0';
  acStack_89[0x5f] = '\0';
  acStack_89[0x60] = '\0';
  acStack_89[0x61] = '\0';
  acStack_89[0x62] = '\0';
  acStack_89[99] = '\0';
  acStack_89[100] = '\0';
  __s = acStack_89 + 1;
  sVar1 = strlen(__s);
  if (1 < 100 - sVar1) {
                    /* try { // try from 00102ad6 to 00102bfa has its CatchHandler @ 00102c52 */
    pcVar2 = fgets(__s + sVar1,100 - (int)sVar1,stdin);
    if (pcVar2 == (char *)0x0) {
      FUN_00104eda("fgets() failed");
      __s[sVar1] = '\0';
    }
    else {
      sVar1 = strlen(__s);
      if ((sVar1 != 0) && (__s[sVar1 - 1] == '\n')) {
        __s[sVar1 - 1] = '\0';
      }
    }
  }
  local_b8[0] = 0;
  puVar3 = (undefined8 *)FUN_00102f2e(local_e8,local_b8);
  *puVar3 = __s;
  local_b8[0] = 1;
  puVar3 = (undefined8 *)FUN_00102f2e(local_e8,local_b8);
  *puVar3 = __s;
  local_b8[0] = 2;
  puVar3 = (undefined8 *)FUN_00102f2e(local_e8,local_b8);
  *puVar3 = __s;
  FUN_00102e6a(local_b8,local_e8);
                    /* try { // try from 00102c05 to 00102c09 has its CatchHandler @ 00102c3a */
  FUN_00104e64(local_b8);
  FUN_00102e4a(local_b8);
  FUN_00102e4a(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104cd2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00104ba3(param_3);
  FUN_00104d2e(param_1,param_2,uVar1);
  return;
}




void FUN_0010478d(undefined8 param_1,undefined8 param_2)

{
  FUN_001049c0(param_1,param_2,0);
  return;
}




void FUN_00103688(long param_1)

{
  FUN_00103f94(param_1 + 0x20);
  return;
}




void FUN_001056e4(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103460(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103cee(param_1,param_2);
  FUN_00103d68(param_1,param_2);
  FUN_00102d80(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined4 FUN_0010325c(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00104f32(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_0010419e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00102549(void)

{
  char *__s;
  size_t sVar1;
  char *pcVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  undefined local_e8 [48];
  undefined4 local_b8 [11];
  char acStack_89 [105];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102e2a(local_e8);
  acStack_89[1] = '\0';
  acStack_89[2] = '\0';
  acStack_89[3] = '\0';
  acStack_89[4] = '\0';
  acStack_89[5] = '\0';
  acStack_89[6] = '\0';
  acStack_89[7] = '\0';
  acStack_89[8] = '\0';
  acStack_89[9] = '\0';
  acStack_89[10] = '\0';
  acStack_89[0xb] = '\0';
  acStack_89[0xc] = '\0';
  acStack_89[0xd] = '\0';
  acStack_89[0xe] = '\0';
  acStack_89[0xf] = '\0';
  acStack_89[0x10] = '\0';
  acStack_89[0x11] = '\0';
  acStack_89[0x12] = '\0';
  acStack_89[0x13] = '\0';
  acStack_89[0x14] = '\0';
  acStack_89[0x15] = '\0';
  acStack_89[0x16] = '\0';
  acStack_89[0x17] = '\0';
  acStack_89[0x18] = '\0';
  acStack_89[0x19] = '\0';
  acStack_89[0x1a] = '\0';
  acStack_89[0x1b] = '\0';
  acStack_89[0x1c] = '\0';
  acStack_89[0x1d] = '\0';
  acStack_89[0x1e] = '\0';
  acStack_89[0x1f] = '\0';
  acStack_89[0x20] = '\0';
  acStack_89[0x21] = '\0';
  acStack_89[0x22] = '\0';
  acStack_89[0x23] = '\0';
  acStack_89[0x24] = '\0';
  acStack_89[0x25] = '\0';
  acStack_89[0x26] = '\0';
  acStack_89[0x27] = '\0';
  acStack_89[0x28] = '\0';
  acStack_89[0x29] = '\0';
  acStack_89[0x2a] = '\0';
  acStack_89[0x2b] = '\0';
  acStack_89[0x2c] = '\0';
  acStack_89[0x2d] = '\0';
  acStack_89[0x2e] = '\0';
  acStack_89[0x2f] = '\0';
  acStack_89[0x30] = '\0';
  acStack_89[0x31] = '\0';
  acStack_89[0x32] = '\0';
  acStack_89[0x33] = '\0';
  acStack_89[0x34] = '\0';
  acStack_89[0x35] = '\0';
  acStack_89[0x36] = '\0';
  acStack_89[0x37] = '\0';
  acStack_89[0x38] = '\0';
  acStack_89[0x39] = '\0';
  acStack_89[0x3a] = '\0';
  acStack_89[0x3b] = '\0';
  acStack_89[0x3c] = '\0';
  acStack_89[0x3d] = '\0';
  acStack_89[0x3e] = '\0';
  acStack_89[0x3f] = '\0';
  acStack_89[0x40] = '\0';
  acStack_89[0x41] = '\0';
  acStack_89[0x42] = '\0';
  acStack_89[0x43] = '\0';
  acStack_89[0x44] = '\0';
  acStack_89[0x45] = '\0';
  acStack_89[0x46] = '\0';
  acStack_89[0x47] = '\0';
  acStack_89[0x48] = '\0';
  acStack_89[0x49] = '\0';
  acStack_89[0x4a] = '\0';
  acStack_89[0x4b] = '\0';
  acStack_89[0x4c] = '\0';
  acStack_89[0x4d] = '\0';
  acStack_89[0x4e] = '\0';
  acStack_89[0x4f] = '\0';
  acStack_89[0x50] = '\0';
  acStack_89[0x51] = '\0';
  acStack_89[0x52] = '\0';
  acStack_89[0x53] = '\0';
  acStack_89[0x54] = '\0';
  acStack_89[0x55] = '\0';
  acStack_89[0x56] = '\0';
  acStack_89[0x57] = '\0';
  acStack_89[0x58] = '\0';
  acStack_89[0x59] = '\0';
  acStack_89[0x5a] = '\0';
  acStack_89[0x5b] = '\0';
  acStack_89[0x5c] = '\0';
  acStack_89[0x5d] = '\0';
  acStack_89[0x5e] = '\0';
  acStack_89[0x5f] = '\0';
  acStack_89[0x60] = '\0';
  acStack_89[0x61] = '\0';
  acStack_89[0x62] = '\0';
  acStack_89[99] = '\0';
  acStack_89[100] = '\0';
  __s = acStack_89 + 1;
  sVar1 = strlen(__s);
  if (1 < 100 - sVar1) {
                    /* try { // try from 00102645 to 00102769 has its CatchHandler @ 001027c1 */
    pcVar2 = fgets(__s + sVar1,100 - (int)sVar1,stdin);
    if (pcVar2 == (char *)0x0) {
      FUN_00104eda("fgets() failed");
      __s[sVar1] = '\0';
    }
    else {
      sVar1 = strlen(__s);
      if ((sVar1 != 0) && (__s[sVar1 - 1] == '\n')) {
        __s[sVar1 - 1] = '\0';
      }
    }
  }
  local_b8[0] = 0;
  puVar3 = (undefined8 *)FUN_00102f2e(local_e8,local_b8);
  *puVar3 = __s;
  local_b8[0] = 1;
  puVar3 = (undefined8 *)FUN_00102f2e(local_e8,local_b8);
  *puVar3 = __s;
  local_b8[0] = 2;
  puVar3 = (undefined8 *)FUN_00102f2e(local_e8,local_b8);
  *puVar3 = __s;
  FUN_00102e6a(local_b8,local_e8);
                    /* try { // try from 00102774 to 00102778 has its CatchHandler @ 001027a9 */
  FUN_00104d80(local_b8);
  FUN_00102e4a(local_b8);
  FUN_00102e4a(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001032f8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102d80(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00102daa(param_1);
  return;
}




undefined8 FUN_0010560a(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00104c46(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00102cfc(0x30,param_2);
  uVar1 = FUN_00104ba3(param_3);
  uVar2 = FUN_00103688(param_2);
  uVar3 = FUN_001046f8(param_1);
  FUN_00104cd2(uVar3,uVar2,uVar1);
  return;
}




void FUN_00105427(void)

{
  return;
}




void FUN_001056c5(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010547f(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001024a3) */
/* WARNING: Removing unreachable block (ram,0x001024af) */

void FUN_00102490(void)

{
  return;
}




void FUN_0010488e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00104adb(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_0010482b(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00104adb(undefined8 param_1)

{
  return param_1;
}




void FUN_00103116(void)

{
  return;
}




undefined8 FUN_00103734(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001032c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001036aa(param_2);
  FUN_001036bc(param_1,uVar1);
  return param_1;
}




void FUN_00103560(void)

{
  return;
}




void FUN_00105109(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00104f86(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00104766(undefined8 param_1)

{
  return param_1;
}




void FUN_00103b93(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001044bc(param_1);
  FUN_001044de(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001034fc(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103d7c(local_18,param_1);
  FUN_00103d9a(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001053bc(void)

{
  return 0;
}




void FUN_00105453(void)

{
  return;
}




long FUN_00102f2e(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined local_39;
  undefined8 local_38;
  undefined local_30 [8];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = FUN_001031a6(param_1,param_2);
  local_28 = FUN_001031d0(param_1);
  cVar2 = FUN_001031ee(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00103214(param_1);
    uVar3 = FUN_0010323a(&local_38);
    cVar2 = FUN_0010325c(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00102fce;
    }
  }
  bVar1 = true;
LAB_00102fce:
  if (bVar1) {
    uVar3 = FUN_00103283(param_2);
    FUN_001032c0(local_30,uVar3);
    FUN_001032f8(&local_28,&local_38);
    local_38 = FUN_0010331a(param_1,local_28,&DAT_00106004,local_30,&local_39);
  }
  lVar4 = FUN_0010323a(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00105495(void)

{
  return;
}




void FUN_00104734(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104998(param_1,param_2,param_3);
  return;
}



