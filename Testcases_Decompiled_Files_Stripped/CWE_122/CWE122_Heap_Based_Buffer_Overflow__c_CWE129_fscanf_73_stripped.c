
undefined8 FUN_00101c2e(undefined8 param_1)

{
  return param_1;
}




void FUN_00101884(undefined8 param_1)

{
  FUN_00101930(param_1);
  return;
}




void FUN_00102048(undefined8 *param_1)

{
  FUN_0010222c(*param_1);
  return;
}




void FUN_00101904(undefined8 param_1)

{
  FUN_00101a82(param_1);
  FUN_0010182e(param_1);
  return;
}




void FUN_001027ad(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101d82(long param_1)

{
  FUN_001020b8(param_1 + 0x10);
  return;
}




undefined8 FUN_00102bb9(void)

{
  return 0;
}




void FUN_00102c45(void)

{
  return;
}




void FUN_00101e10(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102bed(void)

{
  return;
}




void FUN_00102f80(void)

{
  return;
}




void FUN_00102ea3(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102634(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101b30(param_1);
  FUN_00102692(&local_18);
  FUN_001026b6(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001020b8(undefined8 param_1)

{
  FUN_0010224e(param_1);
  return;
}




undefined8 FUN_00101f8c(undefined8 param_1)

{
  return param_1;
}




void FUN_0010206a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101e2e(param_2);
  uVar2 = FUN_00101b30(param_1);
  FUN_00101b7c(param_1,uVar2,uVar1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00106028 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001013d0();
    DAT_00106028 = 1;
    return;
  }
  return;
}




ulong FUN_001029c7(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030e4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001028db(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101fe0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




long FUN_001021f6(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102c24(void)

{
  return;
}




undefined8 FUN_00101c78(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101fe0(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102967(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101ab2(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101d82(local_20);
    uVar3 = FUN_00101da4(param_1);
    FUN_00101db6(uVar3,uVar2);
    FUN_00101de0(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_0010272f(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102c71(void)

{
  return;
}




void FUN_00102552(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  int local_18;
  
  piVar2 = (int *)FUN_00102634(param_1);
  iVar1 = *piVar2;
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 0;
  }
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_001026d7("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_0010272f(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_00101489(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001018c4(local_58);
  local_5c = 0xffffffff;
                    /* try { // try from 001014d2 to 00101522 has its CatchHandler @ 0010156e */
  __isoc99_fscanf(stdin,&DAT_00103005,&local_5c);
  FUN_0010197c(local_58,&local_5c);
  FUN_0010197c(local_58,&local_5c);
  FUN_0010197c(local_58,&local_5c);
  FUN_001019b6(local_38,local_58);
                    /* try { // try from 0010152a to 0010152e has its CatchHandler @ 00101559 */
  FUN_001023a2(local_38);
  FUN_001018e4(local_38);
  FUN_001018e4(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long * FUN_00102692(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00102f10(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102c87(void)

{
  return;
}




undefined8 FUN_001022b5(undefined8 param_1)

{
  return param_1;
}




void FUN_0010230a(undefined8 param_1)

{
  FUN_00102378(param_1);
  return;
}




void FUN_001026d7(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00101b30(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e10(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102c92(void)

{
  return;
}




void FUN_0010168f(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001018c4(local_58);
  local_5c = 0xffffffff;
                    /* try { // try from 001016d8 to 00101728 has its CatchHandler @ 00101774 */
  __isoc99_fscanf(stdin,&DAT_00103005,&local_5c);
  FUN_0010197c(local_58,&local_5c);
  FUN_0010197c(local_58,&local_5c);
  FUN_0010197c(local_58,&local_5c);
  FUN_001019b6(local_38,local_58);
                    /* try { // try from 00101730 to 00101734 has its CatchHandler @ 0010175f */
  FUN_00102552(local_38);
  FUN_001018e4(local_38);
  FUN_001018e4(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010222c(long param_1)

{
  FUN_0010230a(param_1 + 0x10);
  return;
}




ulong FUN_00102acb(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030ec,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101ffe(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00101598(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001018c4(local_58);
  local_5c = 7;
                    /* try { // try from 001015dc to 00101619 has its CatchHandler @ 00101665 */
  FUN_0010197c(local_58,&local_5c);
  FUN_0010197c(local_58,&local_5c);
  FUN_0010197c(local_58,&local_5c);
  FUN_001019b6(local_38,local_58);
                    /* try { // try from 00101621 to 00101625 has its CatchHandler @ 00101650 */
  FUN_0010247a(local_38);
  FUN_001018e4(local_38);
  FUN_001018e4(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101aa2(void)

{
  return;
}




undefined8 FUN_00102e07(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102bf8(void)

{
  return;
}




bool FUN_00102dac(pthread_t *param_1)

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




void FUN_00101930(undefined8 param_1)

{
  FUN_00101aa2(param_1);
  return;
}




void FUN_001020d6(void)

{
  return;
}




void FUN_0010184e(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_001026fd(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010182e(undefined8 param_1)

{
  FUN_0010184e(param_1);
  return;
}




undefined8 FUN_00101818(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001018c4(undefined8 param_1)

{
  FUN_001018a4(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef8)();
  return;
}




undefined8 FUN_00102e2a(undefined8 *param_1)

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




void FUN_00102c0e(void)

{
  return;
}




void FUN_00102260(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001027d8(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 * FUN_00102024(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_001023a2(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  int local_18;
  
  piVar2 = (int *)FUN_00102634(param_1);
  iVar1 = *piVar2;
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_001026d7("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_0010272f(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_00102ec2(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010197c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b30(param_1);
  FUN_00101b7c(param_1,uVar1,param_2);
  return;
}




void FUN_001019b6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101c2e(param_2);
  FUN_00101bdd(&local_21,uVar1);
  FUN_00101c40(param_1,&local_21);
  FUN_00101930(&local_21);
  uVar1 = FUN_00101cc8(param_2);
  uVar2 = FUN_00101c78(param_2);
                    /* try { // try from 00101a42 to 00101a46 has its CatchHandler @ 00101a49 */
  FUN_00101d14(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010179e(void)

{
  FUN_00101598();
  FUN_0010168f();
  return;
}




undefined8 FUN_00101bdd(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f34(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102c03(void)

{
  return;
}




void FUN_00102859(undefined4 param_1)

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




void FUN_00102c19(void)

{
  return;
}




undefined8 FUN_00101cc8(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101fe0(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001026b6(undefined8 *param_1)

{
  FUN_00101d82(*param_1);
  return;
}




void FUN_00102c7c(void)

{
  return;
}




void FUN_00101b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101e2e(param_3);
  p_Var2 = (_List_node_base *)FUN_00101e40(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101f0a(param_1,1);
  return;
}




void FUN_00101f0a(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00101f62(undefined8 param_1,undefined8 param_2)

{
  FUN_00102218(param_1,param_2);
  return;
}




void FUN_00101de0(undefined8 param_1,undefined8 param_2)

{
  FUN_001020e9(param_1,param_2,1);
  return;
}




void FUN_00102be2(void)

{
  return;
}




void FUN_00102140(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022b5(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00102c5b(void)

{
  return;
}




undefined8 FUN_00101e40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010211c(param_1);
  uVar2 = FUN_00101da4(param_1);
  FUN_00102140(local_38,uVar2,uVar1);
  uVar3 = FUN_00101e2e(param_2);
  uVar4 = FUN_00101d82(uVar1);
  FUN_001021b9(uVar2,uVar4,uVar3);
  FUN_001021f6(local_38,0);
  FUN_0010217a(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102287(undefined8 param_1,undefined8 param_2)

{
  FUN_00102328(param_1,param_2,0);
  return;
}




void FUN_001028b3(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101d72(void)

{
  return;
}




void FUN_00101db6(undefined8 param_1,undefined8 param_2)

{
  FUN_001020d6(param_1,param_2);
  return;
}




void FUN_001021b9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e2e(param_3);
  FUN_001022c8(param_1,param_2,uVar1);
  return;
}




void FUN_0010247a(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  int local_18;
  
  piVar2 = (int *)FUN_00102634(param_1);
  iVar1 = *piVar2;
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_001026d7("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_0010272f(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_00102c3a(void)

{
  return;
}




void FUN_00102c9d(void)

{
  return;
}




undefined8 FUN_00102cdf(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102ca8,local_18);
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




void FUN_00102c2f(void)

{
  return;
}




void FUN_00102c50(void)

{
  return;
}




undefined8 FUN_00102378(undefined8 param_1)

{
  return param_1;
}




void FUN_00102783(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102ee1(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010217a(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001020e9(*param_1,param_1[1],1);
  }
  return;
}




void FUN_0010211c(undefined8 param_1)

{
  FUN_00102287(param_1,1);
  return;
}




void FUN_00101950(undefined8 param_1)

{
  FUN_00101ab2(param_1);
  FUN_00101884(param_1);
  return;
}




void FUN_00101a82(undefined8 param_1)

{
  FUN_00101d72(param_1);
  return;
}




void FUN_00102803(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102328(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010238a(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001018e4(undefined8 param_1)

{
  FUN_00101950(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e3) */
/* WARNING: Removing unreachable block (ram,0x001013ef) */

void FUN_001013d0(void)

{
  return;
}




void FUN_00102757(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102ca8(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001018a4(undefined8 param_1)

{
  FUN_00101904(param_1);
  return;
}




void FUN_00101f9e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f8c(param_2);
  FUN_00101f62(param_1,uVar1);
  FUN_0010182e(param_1);
  return;
}




void FUN_001020e9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102260(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101e2e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010224e(undefined8 param_1)

{
  return param_1;
}




int FUN_00102bc8(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




/* WARNING: Removing unreachable block (ram,0x00101424) */
/* WARNING: Removing unreachable block (ram,0x00101430) */

void FUN_00101400(void)

{
  return;
}




void FUN_00102218(void)

{
  return;
}




void FUN_001022c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00101e2e(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101818(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_0010282e(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102baa(void)

{
  return 1;
}




undefined8 FUN_0010238a(void)

{
  return 0x555555555555555;
}




undefined8 FUN_001017b3(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001026d7("Calling good()...");
  FUN_0010179e();
  FUN_001026d7("Finished good()");
  FUN_001026d7("Calling bad()...");
  FUN_00101489();
  FUN_001026d7("Finished bad()");
  return 0;
}




undefined8 FUN_00101f34(undefined8 param_1,undefined8 param_2)

{
  FUN_00101f62(param_1,param_2);
  return param_1;
}




void FUN_00101c40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f8c(param_2);
  FUN_00101f9e(param_1,uVar1);
  return;
}




void FUN_00101d14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  while( true ) {
    cVar1 = FUN_00101ffe(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00102048(&local_18);
    FUN_0010206a(local_10,uVar2);
    FUN_00102024(&local_18);
  }
  return;
}




undefined8 FUN_00101da4(undefined8 param_1)

{
  return param_1;
}




void FUN_00102934(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102906(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102c66(void)

{
  return;
}



