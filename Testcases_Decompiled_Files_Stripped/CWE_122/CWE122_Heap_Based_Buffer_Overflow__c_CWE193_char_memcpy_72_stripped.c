
long FUN_00102ce0(long param_1)

{
  return param_1 + 8;
}




void FUN_00102d45(undefined8 param_1,undefined8 param_2)

{
  FUN_0010304e(param_1,param_2);
  return;
}




void FUN_00101826(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a88(local_58);
  local_68 = (void *)0x0;
  local_68 = malloc(0xb);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_60 = FUN_00101b8e(local_58);
  FUN_00101bde(local_38,&local_60);
                    /* try { // try from 001018b1 to 00101946 has its CatchHandler @ 00101992 */
  FUN_00101c0c(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b8e(local_58);
  FUN_00101bde(local_38,&local_60);
  FUN_00101c0c(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b8e(local_58);
  FUN_00101bde(local_38,&local_60);
  FUN_00101c0c(local_58,local_38[0],1,&local_68);
  FUN_00101cd2(local_38,local_58);
                    /* try { // try from 0010194e to 00101952 has its CatchHandler @ 0010197d */
  FUN_001015ca(local_38);
  FUN_00101b46(local_38);
  FUN_00101b46(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103c18(void)

{
  return;
}




void FUN_00101ea0(undefined8 param_1,undefined8 param_2)

{
  FUN_00102787(param_1,param_2);
  return;
}




void FUN_001038a3(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001038fc(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001036f7(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102fd9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031e0(param_1,param_2,param_3);
  return;
}




void FUN_00103e6b(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101ad4(undefined8 param_1)

{
  FUN_00101e44(param_1);
  return;
}




void FUN_00103775(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102746(void)

{
  return;
}




void FUN_00102f4b(undefined8 param_1,undefined8 param_2)

{
  FUN_0010319a(param_1,param_2,0);
  return;
}




void FUN_00102e02(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e70(param_3);
  uVar2 = FUN_00102e70(local_28);
  uVar3 = FUN_00102e70(local_20);
  uVar1 = FUN_001030b5(uVar3,uVar2,uVar1);
  FUN_001030ea(&local_30,uVar1);
  return;
}




void FUN_001037a0(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103ee0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001015ca(undefined8 param_1)

{
  void *__dest;
  undefined8 *puVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010166c(param_1,2);
  __dest = (void *)*puVar1;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar2 = strlen(local_1b);
  memcpy(__dest,local_1b,sVar2 + 1);
  FUN_0010369f(__dest);
  free(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101a31(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101af4(long *param_1)

{
  FUN_00101e54(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101a48(param_1);
  return;
}




void FUN_001028dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d6f(param_2);
  uVar2 = FUN_00102d6f(param_1);
  FUN_00102dbb(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_00103131(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103325(param_1);
  puVar1 = (undefined8 *)FUN_00103343(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00103c23(void)

{
  return;
}




void FUN_00103821(undefined4 param_1)

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




void FUN_00103521(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e70(param_3);
  uVar2 = FUN_00102e70(local_28);
  uVar3 = FUN_00102e70(local_20);
  uVar1 = FUN_00103607(uVar3,uVar2,uVar1);
  FUN_001030ea(&local_30,uVar1);
  return;
}




void FUN_0010319a(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103372(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




undefined8 FUN_00103b72(void)

{
  return 1;
}




void FUN_00102ca6(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_0010250a(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101ece(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103e8a(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102e82(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_001032d7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102e70(param_1);
  uVar1 = FUN_0010345a(uVar1,param_2,param_3);
  FUN_001030ea(&local_10,uVar1);
  return;
}




void FUN_00101bde(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101ef0(param_2);
  *param_1 = *puVar1;
  return;
}




undefined8 FUN_00102cf6(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102e70(undefined8 param_1)

{
  return param_1;
}




void FUN_00101a48(undefined8 param_1)

{
  FUN_00101ad4(param_1);
  return;
}




undefined8 FUN_00102b89(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bb6(param_1,param_2);
  return param_1;
}




void FUN_00101e54(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102755(param_1,param_2,param_3);
  }
  return;
}




void FUN_00103bec(void)

{
  return;
}




void FUN_00102ccd(void)

{
  return;
}




void FUN_001036c5(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00101e8e(undefined8 param_1)

{
  return param_1;
}




int FUN_00103b90(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103100(param_1,param_2,param_3);
  return;
}




void FUN_00102787(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ccd(param_1,param_2);
  return;
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




undefined8 FUN_00103dcf(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00102df0(undefined8 param_1)

{
  return param_1;
}




void FUN_001034c6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010358f(param_1,param_2,param_3);
  return;
}




void FUN_0010374b(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103c70(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101690(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a88(local_58);
  local_68 = (void *)0x0;
  local_68 = malloc(10);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_60 = FUN_00101b8e(local_58);
  FUN_00101bde(local_38,&local_60);
                    /* try { // try from 0010171b to 001017b0 has its CatchHandler @ 001017fc */
  FUN_00101c0c(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b8e(local_58);
  FUN_00101bde(local_38,&local_60);
  FUN_00101c0c(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b8e(local_58);
  FUN_00101bde(local_38,&local_60);
  FUN_00101c0c(local_58,local_38[0],1,&local_68);
  FUN_00101cd2(local_38,local_58);
                    /* try { // try from 001017b8 to 001017bc has its CatchHandler @ 001017e7 */
  FUN_00101529(local_38);
  FUN_00101b46(local_38);
  FUN_00101b46(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010338a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102d6f(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103062(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010287a(undefined8 param_1)

{
  FUN_00102ce0(param_1);
  return;
}




void FUN_001034fb(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001035f2(&local_10);
  FUN_00102df0(uVar1);
  return;
}




void FUN_001038ce(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010340a(param_1,param_2,param_3);
  return;
}




void FUN_00103c2e(void)

{
  return;
}




long FUN_00102570(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




undefined8 FUN_001034a5(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001027d4(&local_10);
  return *puVar1;
}




void FUN_00101e12(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00102fc6(void)

{
  return;
}




void FUN_00103080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103230(param_1,param_2,param_3);
  return;
}




void FUN_001031e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010338a(param_2);
  uVar2 = FUN_0010338a(param_1);
  FUN_0010339c(uVar2,uVar1,param_3);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




ulong FUN_0010398f(long param_1,ulong param_2,long param_3)

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




void FUN_00101e44(void)

{
  return;
}




undefined8 FUN_00102f79(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103062(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010339c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e70(param_3);
  uVar2 = FUN_001034a5(local_28);
  uVar3 = FUN_001034a5(local_20);
  uVar1 = FUN_001034c6(uVar3,uVar2,uVar1);
  FUN_001030ea(&local_30,uVar1);
  return;
}




void FUN_00101c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101f02(param_1);
  local_18 = FUN_00101f59(&local_38,&local_20);
  local_20 = FUN_001024be(local_30);
  uVar1 = FUN_0010250a(&local_20,local_18);
  FUN_00101f9e(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001024be(local_30);
  FUN_0010250a(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102660(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001027b2(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001027d4(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c44(void)

{
  return;
}




void FUN_00103c65(void)

{
  return;
}




void FUN_00101ece(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




long FUN_00102898(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101ef0(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101ef0(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00101a68(undefined8 param_1)

{
  FUN_00101aa8(param_1);
  return;
}




void FUN_0010304e(void)

{
  return;
}




void FUN_00103c4f(void)

{
  return;
}




void FUN_00103100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032d7(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103b81(void)

{
  return 0;
}




void FUN_00102b31(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f79(param_2);
  uVar2 = FUN_00102f79(param_1);
  FUN_00102dbb(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_0010392f(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 * FUN_0010345a(undefined8 *param_1,long param_2,undefined8 *param_3)

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




undefined8 FUN_00103372(void)

{
  return 0xfffffffffffffff;
}




void FUN_00103c39(void)

{
  return;
}




undefined8 FUN_00103df2(undefined8 *param_1)

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




void * FUN_0010363c(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_001030b5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103261(param_1,param_2,param_3);
  return;
}




ulong * FUN_00102f1c(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




void FUN_0010300a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102cf6(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a31(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00103be1(void)

{
  return;
}




void FUN_001037f6(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103bb5(void)

{
  return;
}




ulong * FUN_00103343(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102934(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102df0(param_2);
  uVar2 = FUN_00102df0(param_1);
  FUN_00102e02(uVar2,uVar1,param_3);
  return;
}




void FUN_00102be0(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bb6(param_1,param_2);
  FUN_00101e12(param_1);
  return;
}




void FUN_00103bc0(void)

{
  return;
}




void FUN_00103bf7(void)

{
  return;
}




long FUN_00101f59(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001027d4(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001027d4(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103baa(void)

{
  return;
}




undefined8 FUN_00102afa(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102f4b(param_1,param_2);
  }
  return uVar1;
}




void FUN_00103062(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




ulong FUN_00103a93(long param_1,ulong param_2,long param_3)

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




long FUN_00103261(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_0010387b(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_001026b8(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_001027b2(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102d08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102cf6(param_3);
  FUN_0010300a(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_001025e8(undefined8 param_1)

{
  return param_1;
}




void FUN_00102984(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e70(param_2);
  uVar2 = FUN_00102e70(param_1);
  FUN_00102e82(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00101ef0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001035f2(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_001030ea(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001019cc(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010369f("Calling good()...");
  FUN_001019bc();
  FUN_0010369f("Finished good()");
  FUN_0010369f("Calling bad()...");
  FUN_00101690();
  FUN_0010369f("Finished bad()");
  return 0;
}




void FUN_00102846(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102ce0(param_1);
  FUN_00102d45(*param_1,uVar1);
  return;
}




void FUN_00103ea9(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102dbb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103080(param_1,param_2,param_3);
  return;
}




long FUN_0010166c(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_001019bc(void)

{
  FUN_00101826();
  return;
}




void FUN_0010371f(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001037cb(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00103c02(void)

{
  return;
}




void FUN_00103c0d(void)

{
  return;
}




ulong FUN_00102a0a(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102ef6(param_1);
  lVar2 = FUN_00102570(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102570(local_40);
  local_30 = FUN_00102570(local_40);
  plVar3 = (long *)FUN_00102f1c(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102570(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102ef6(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102ef6(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00101f02(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001027b2(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103607(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010363c(param_1,param_2,param_3);
  return;
}




void FUN_00101aa8(undefined8 param_1)

{
  FUN_00101df2(param_1);
  FUN_00101e12(param_1);
  return;
}




bool FUN_00103d74(pthread_t *param_1)

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




void FUN_0010340a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001034fb(param_2);
  uVar2 = FUN_001034fb(param_1);
  FUN_00103521(uVar2,uVar1,param_3);
  return;
}




void FUN_001027b2(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00101a88(undefined8 param_1)

{
  FUN_00101a68(param_1);
  return;
}




void FUN_00101df2(undefined8 param_1)

{
  FUN_00102746(param_1);
  return;
}




undefined8 FUN_00102597(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102b89(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102c16(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102afa(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00102755(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ca6(param_1,param_2,param_3);
  return;
}




void FUN_00101b46(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e8e(param_1);
  FUN_00101ea0(*param_1,param_1[1],uVar1);
  FUN_00101af4(param_1);
  return;
}




void FUN_00101f9e(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102a0a(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001024be(local_80);
      local_60 = FUN_00102898(&local_88,&local_78);
      local_70 = FUN_00102afa(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101e8e(local_80);
                    /* try { // try from 001022a8 to 00102333 has its CatchHandler @ 001023eb */
      FUN_001029d5(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101e8e(local_80);
      puVar2 = (undefined8 *)FUN_00101ef0(&local_88);
      local_70 = FUN_00102b31(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101e8e(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101ef0(&local_88);
      local_70 = FUN_00102b31(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101e8e(local_80);
      FUN_00101ea0(*local_80,local_80[1],uVar1);
      FUN_00101e54(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_001027e6(local_38,param_1,param_4);
                    /* try { // try from 00102028 to 001021fb has its CatchHandler @ 001023cd */
      local_50 = FUN_0010287a(local_38);
      local_78 = FUN_00101b8e(local_80);
      local_48 = FUN_00102898(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101e8e(local_80);
        FUN_001028dc(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101ef0(&local_88);
        FUN_00102934(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101ef0(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101ef0(&local_88);
        FUN_00102984(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101e8e(local_80);
        lVar4 = FUN_001029d5(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101e8e(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101ef0(&local_88);
        FUN_001028dc(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101ef0(&local_88);
        FUN_00102984(*puVar2,local_40,local_50);
      }
      FUN_00102846(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001024be(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ece(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010369f(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102ef6(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001025e8(param_1);
  FUN_00103131(uVar1);
  return;
}




void FUN_001027e6(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102cf6(param_3);
  uVar2 = FUN_00102ce0(param_1);
  FUN_00102d08(*param_1,uVar2,uVar1);
  return;
}




void FUN_001025fa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102be0(param_1,param_3);
                    /* try { // try from 00102634 to 00102638 has its CatchHandler @ 0010263b */
  FUN_00102c16(param_1,param_2);
  return;
}




void FUN_00103c5a(void)

{
  return;
}




void FUN_00103f50(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ed0)();
  return;
}




void FUN_001029d5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ec0(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103ca7(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103c70,local_18);
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




void FUN_00103bcb(void)

{
  return;
}




void FUN_00102c70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fd9(param_1,param_2,param_3);
  return;
}




void * FUN_0010358f(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103bd6(void)

{
  return;
}




void FUN_00103325(undefined8 param_1)

{
  FUN_00103372(param_1);
  return;
}




void FUN_00101529(undefined8 param_1)

{
  void *__dest;
  undefined8 *puVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010166c(param_1,2);
  __dest = (void *)*puVar1;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar2 = strlen(local_1b);
  memcpy(__dest,local_1b,sVar2 + 1);
  FUN_0010369f(__dest);
  free(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101b8e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ece(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c70(param_1,param_2,param_3);
  return;
}




void FUN_00101cd2(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001025e8(param_2);
  FUN_00102597(&local_31,uVar1);
  uVar1 = FUN_00102570(param_2);
                    /* try { // try from 00101d38 to 00101d3c has its CatchHandler @ 00101da5 */
  FUN_001025fa(param_1,uVar1,&local_31);
  FUN_00101ad4(&local_31);
  uVar2 = FUN_00101e8e(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001026b8(param_2);
  uVar4 = FUN_00102660(param_2);
                    /* try { // try from 00101d86 to 00101d8a has its CatchHandler @ 00101dc3 */
  uVar1 = FUN_00102710(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102bb6(undefined8 param_1,undefined8 param_2)

{
  FUN_00102fc6(param_1,param_2);
  return;
}



