
void FUN_001033b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103479(param_1,param_2,param_3);
  return;
}




void FUN_001036ce(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00103dfe(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103850(undefined4 param_1)

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




long FUN_001036aa(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




undefined8 FUN_00102d5a(undefined8 param_1)

{
  return param_1;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101470();
    DAT_00107020 = 1;
    return;
  }
  return;
}




void FUN_00103084(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010325c(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00102e35(undefined8 param_1,undefined8 param_2)

{
  FUN_00103084(param_1,param_2,0);
  return;
}




void FUN_00103c26(void)

{
  return;
}




void FUN_00101529(void)

{
  long in_FS_OFFSET;
  long local_70;
  undefined8 local_68;
  void *local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101972(local_58);
  local_70 = 0;
  local_60 = malloc(100);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_60,0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_70 = (long)local_60 + -8;
  local_68 = FUN_00101a78(local_58);
  FUN_00101ac8(local_38,&local_68);
                    /* try { // try from 001015df to 00101674 has its CatchHandler @ 001016c0 */
  FUN_00101af6(local_58,local_38[0],1,&local_70);
  local_68 = FUN_00101a78(local_58);
  FUN_00101ac8(local_38,&local_68);
  FUN_00101af6(local_58,local_38[0],1,&local_70);
  local_68 = FUN_00101a78(local_58);
  FUN_00101ac8(local_38,&local_68);
  FUN_00101af6(local_58,local_38[0],1,&local_70);
  FUN_00101bbc(local_38,local_58);
                    /* try { // try from 0010167c to 00101680 has its CatchHandler @ 001016ab */
  FUN_00103589(local_38);
  FUN_00101a30(local_38);
  FUN_00101a30(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001023a8(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101db8(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102481(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102a73(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102fea(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031c1(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101dda(undefined8 param_1)

{
  return param_1;
}




void FUN_0010263f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b90(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102fd4(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102f38(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




void FUN_0010311a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032f4(param_1,param_2,param_3);
  return;
}




void FUN_0010377a(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010395e(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102bf2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102be0(param_3);
  FUN_00102ef4(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_001026be(undefined8 param_1)

{
  return param_1;
}




void FUN_001036f4(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101bbc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001024d2(param_2);
  FUN_00102481(&local_31,uVar1);
  uVar1 = FUN_0010245a(param_2);
                    /* try { // try from 00101c22 to 00101c26 has its CatchHandler @ 00101c8f */
  FUN_001024e4(param_1,uVar1,&local_31);
  FUN_001019be(&local_31);
  uVar2 = FUN_00101d78(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001025a2(param_2);
  uVar4 = FUN_0010254a(param_2);
                    /* try { // try from 00101c70 to 00101c74 has its CatchHandler @ 00101cad */
  uVar1 = FUN_001025fa(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102b90(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102aca(undefined8 param_1,undefined8 param_2)

{
  FUN_00102aa0(param_1,param_2);
  FUN_00101cfc(param_1);
  return;
}




void FUN_001025fa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b5a(param_1,param_2,param_3);
  return;
}




void FUN_00103bef(void)

{
  return;
}




void FUN_00102f6a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010311a(param_1,param_2,param_3);
  return;
}




void FUN_00103c73(void)

{
  return;
}




void FUN_00103e9a(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102730(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102bca(param_1);
  FUN_00102c2f(*param_1,uVar1);
  return;
}




undefined8 FUN_00103bb0(void)

{
  return 0;
}




void FUN_001038aa(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




ulong * FUN_0010322d(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void * FUN_00103526(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103eb9(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103589(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001036aa(param_1,2);
  __dest = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(__dest,local_78);
  FUN_001036ce(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103c47(void)

{
  return;
}




void FUN_0010374e(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102f4c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102f9f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010314b(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010254a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010269c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 * FUN_00103344(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  long local_18;
  
  uVar1 = *param_3;
  local_20 = param_1;
  for (local_18 = param_2; local_18 != 0; local_18 = local_18 + -1) {
    *local_20 = uVar1;
    local_20 = local_20 + 1;
  }
  return local_20;
}




void FUN_00101972(undefined8 param_1)

{
  FUN_00101952(param_1);
  return;
}




void FUN_00102b5a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ec3(param_1,param_2,param_3);
  return;
}




void FUN_00101d3e(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_0010263f(param_1,param_2,param_3);
  }
  return;
}




void FUN_001033e5(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001034dc(&local_10);
  FUN_00102cda(uVar1);
  return;
}




void FUN_00103c1b(void)

{
  return;
}




void FUN_00102de0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001024d2(param_1);
  FUN_0010301b(uVar1);
  return;
}




ulong * FUN_00102e06(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102c2f(undefined8 param_1,undefined8 param_2)

{
  FUN_00102f38(param_1,param_2);
  return;
}




undefined8 FUN_00102e63(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f4c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103cd6(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103c9f,local_18);
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




void FUN_00103825(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101cdc(undefined8 param_1)

{
  FUN_00102630(param_1);
  return;
}




void FUN_001038d2(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_001029e4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102e35(param_1,param_2);
  }
  return uVar1;
}




undefined8 FUN_0010325c(void)

{
  return 0xfffffffffffffff;
}




void FUN_00102b00(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_001029e4(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00103726(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102d6c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00103c7e(void)

{
  return;
}




undefined8 FUN_0010301b(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_0010320f(param_1);
  puVar1 = (undefined8 *)FUN_0010322d(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




undefined8 FUN_00102c59(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f4c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101992(undefined8 param_1)

{
  FUN_00101cdc(param_1);
  FUN_00101cfc(param_1);
  return;
}




void FUN_00103ed8(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101db8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




long FUN_0010314b(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_001037a4(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void * FUN_00103479(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_001032f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001033e5(param_2);
  uVar2 = FUN_001033e5(param_1);
  FUN_0010340b(uVar2,uVar1,param_3);
  return;
}




void FUN_00103c68(void)

{
  return;
}




void FUN_00101952(undefined8 param_1)

{
  FUN_00101992(param_1);
  return;
}




void FUN_00101ac8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101dda(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_001016ea(void)

{
  long in_FS_OFFSET;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101972(local_58);
  local_70 = (void *)0x0;
  local_60 = malloc(100);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_60,0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_70 = local_60;
  local_68 = FUN_00101a78(local_58);
  FUN_00101ac8(local_38,&local_68);
                    /* try { // try from 0010179c to 00101831 has its CatchHandler @ 0010187d */
  FUN_00101af6(local_58,local_38[0],1,&local_70);
  local_68 = FUN_00101a78(local_58);
  FUN_00101ac8(local_38,&local_68);
  FUN_00101af6(local_58,local_38[0],1,&local_70);
  local_68 = FUN_00101a78(local_58);
  FUN_00101ac8(local_38,&local_68);
  FUN_00101af6(local_58,local_38[0],1,&local_70);
  FUN_00101bbc(local_38,local_58);
                    /* try { // try from 00101839 to 0010183d has its CatchHandler @ 00101868 */
  FUN_00103619(local_38);
  FUN_00101a30(local_38);
  FUN_00101a30(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103bd9(void)

{
  return;
}




void FUN_00101d8a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102671(param_1,param_2);
  return;
}




void FUN_00102ec3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030ca(param_1,param_2,param_3);
  return;
}




void FUN_0010269c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00101932(undefined8 param_1)

{
  FUN_001019be(param_1);
  return;
}




void FUN_00102cec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00102d5a(param_3);
  uVar2 = FUN_00102d5a(local_28);
  uVar3 = FUN_00102d5a(local_20);
  uVar1 = FUN_00102f9f(uVar3,uVar2,uVar1);
  FUN_00102fd4(&local_30,uVar1);
  return;
}




void FUN_00103c89(void)

{
  return;
}




void FUN_001034f1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103526(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101a78(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101db8(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101dec(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010269c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c05(void)

{
  return;
}




void FUN_001038fd(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103f10(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00103274(undefined8 param_1)

{
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ed0)();
  return;
}




void FUN_00102bb7(void)

{
  return;
}




void FUN_00102eb0(void)

{
  return;
}




void FUN_00103619(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001036aa(param_1,2);
  __dest = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(__dest,local_78);
  FUN_001036ce(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101d2e(void)

{
  return;
}




long FUN_00102782(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101dda(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101dda(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103c94(void)

{
  return;
}




bool FUN_00103da3(pthread_t *param_1)

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




void FUN_00103f80(void)

{
  return;
}




void FUN_00102764(undefined8 param_1)

{
  FUN_00102bca(param_1);
  return;
}




undefined8 FUN_0010191c(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103c52(void)

{
  return;
}




void FUN_001019be(undefined8 param_1)

{
  FUN_00101d2e(param_1);
  return;
}




void FUN_001030ca(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103274(param_2);
  uVar2 = FUN_00103274(param_1);
  FUN_00103286(uVar2,uVar1,param_3);
  return;
}




void FUN_00102aa0(undefined8 param_1,undefined8 param_2)

{
  FUN_00102eb0(param_1,param_2);
  return;
}




undefined8 FUN_00103ba1(void)

{
  return 1;
}




void FUN_00103bfa(void)

{
  return;
}




void FUN_0010286e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d5a(param_2);
  uVar2 = FUN_00102d5a(param_1);
  FUN_00102d6c(uVar2,uVar1,param_3);
  return;
}




long FUN_00102bca(long param_1)

{
  return param_1 + 8;
}




void FUN_001037cf(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103286(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00102d5a(param_3);
  uVar2 = FUN_0010338f(local_28);
  uVar3 = FUN_0010338f(local_20);
  uVar1 = FUN_001033b0(uVar3,uVar2,uVar1);
  FUN_00102fd4(&local_30,uVar1);
  return;
}




void FUN_00103c3c(void)

{
  return;
}




void FUN_001028bf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102daa(param_1,param_2,param_3);
  return;
}




void FUN_00103c5d(void)

{
  return;
}




void FUN_0010392b(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_001018b7(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001036ce("Calling good()...");
  FUN_001018a7();
  FUN_001036ce("Finished good()");
  FUN_001036ce("Calling bad()...");
  FUN_00101529();
  FUN_001036ce("Finished bad()");
  return 0;
}




undefined8 FUN_00102be0(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ef4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102be0(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_0010191c(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00103c10(void)

{
  return;
}




void FUN_001018a7(void)

{
  FUN_001016ea();
  return;
}




undefined8 FUN_00102a73(undefined8 param_1,undefined8 param_2)

{
  FUN_00102aa0(param_1,param_2);
  return param_1;
}




void FUN_0010320f(undefined8 param_1)

{
  FUN_0010325c(param_1);
  return;
}




undefined8 FUN_0010338f(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001026be(&local_10);
  return *puVar1;
}




ulong FUN_001028f4(undefined8 param_1,ulong param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_30;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2;
  local_40 = param_1;
  lVar1 = FUN_00102de0(param_1);
  lVar2 = FUN_0010245a(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_0010245a(local_40);
  local_30 = FUN_0010245a(local_40);
  plVar3 = (long *)FUN_00102e06(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_0010245a(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102de0(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102de0(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_001034dc(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00101af6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2;
  local_30 = param_1;
  local_20 = FUN_00101dec(param_1);
  local_18 = FUN_00101e43(&local_38,&local_20);
  local_20 = FUN_001023a8(local_30);
  uVar1 = FUN_001023f4(&local_20,local_18);
  FUN_00101e88(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001023a8(local_30);
  FUN_001023f4(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101d78(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ca5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f6a(param_1,param_2,param_3);
  return;
}




void FUN_00103be4(void)

{
  return;
}




void FUN_001019de(long *param_1)

{
  FUN_00101d3e(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101932(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




void FUN_00101cfc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_0010281e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102cda(param_2);
  uVar2 = FUN_00102cda(param_1);
  FUN_00102cec(uVar2,uVar1,param_3);
  return;
}




int FUN_00103bbf(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103c31(void)

{
  return;
}




void FUN_00102671(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bb7(param_1,param_2);
  return;
}




void FUN_001026d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102be0(param_3);
  uVar2 = FUN_00102bca(param_1);
  FUN_00102bf2(*param_1,uVar2,uVar1);
  return;
}




void FUN_001027c6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c59(param_2);
  uVar2 = FUN_00102c59(param_1);
  FUN_00102ca5(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00101a30(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d78(param_1);
  FUN_00101d8a(*param_1,param_1[1],uVar1);
  FUN_001019de(param_1);
  return;
}




ulong FUN_00103ac2(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010340b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00102d5a(param_3);
  uVar2 = FUN_00102d5a(local_28);
  uVar3 = FUN_00102d5a(local_20);
  uVar1 = FUN_001034f1(uVar3,uVar2,uVar1);
  FUN_00102fd4(&local_30,uVar1);
  return;
}




undefined8 FUN_001023f4(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101db8(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103e21(undefined8 *param_1)

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




void FUN_00101e88(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_2;
  local_80 = param_1;
  if (param_3 != 0) {
    if ((ulong)(param_1[2] - param_1[1] >> 3) < param_3) {
      local_68 = FUN_001028f4(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001023a8(local_80);
      local_60 = FUN_00102782(&local_88,&local_78);
      local_70 = FUN_001029e4(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101d78(local_80);
                    /* try { // try from 00102192 to 0010221d has its CatchHandler @ 001022d5 */
      FUN_001028bf(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101d78(local_80);
      puVar2 = (undefined8 *)FUN_00101dda(&local_88);
      local_70 = FUN_00102a1b(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101d78(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101dda(&local_88);
      local_70 = FUN_00102a1b(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101d78(local_80);
      FUN_00101d8a(*local_80,local_80[1],uVar1);
      FUN_00101d3e(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_001026d0(local_38,param_1,param_4);
                    /* try { // try from 00101f12 to 001020e5 has its CatchHandler @ 001022b7 */
      local_50 = FUN_00102764(local_38);
      local_78 = FUN_00101a78(local_80);
      local_48 = FUN_00102782(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101d78(local_80);
        FUN_001027c6(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101dda(&local_88);
        FUN_0010281e(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101dda(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101dda(&local_88);
        FUN_0010286e(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101d78(local_80);
        lVar4 = FUN_001028bf(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101d78(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101dda(&local_88);
        FUN_001027c6(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101dda(&local_88);
        FUN_0010286e(*puVar2,local_40,local_50);
      }
      FUN_00102730(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001025a2(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_0010269c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001031c1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102d5a(param_1);
  uVar1 = FUN_00103344(uVar1,param_2,param_3);
  FUN_00102fd4(&local_10,uVar1);
  return;
}




void FUN_001024e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102aca(param_1,param_3);
                    /* try { // try from 0010251e to 00102522 has its CatchHandler @ 00102525 */
  FUN_00102b00(param_1,param_2);
  return;
}




long FUN_00101e43(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001026be(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001026be(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_001037fa(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_001024d2(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102cda(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a1b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e63(param_2);
  uVar2 = FUN_00102e63(param_1);
  FUN_00102ca5(uVar2,uVar1,param_3,param_4);
  return;
}




long FUN_0010245a(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




ulong FUN_001039be(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c9f(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102630(void)

{
  return;
}




void FUN_00102daa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fea(param_1,param_2,param_3);
  return;
}



