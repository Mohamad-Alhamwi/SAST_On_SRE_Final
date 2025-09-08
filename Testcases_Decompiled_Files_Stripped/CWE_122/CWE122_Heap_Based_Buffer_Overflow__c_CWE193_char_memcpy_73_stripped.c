
void FUN_00101c76(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_001016f0(local_20);
    uVar3 = FUN_00101efa(param_1);
    FUN_00101f0c(uVar3,uVar2);
    FUN_00101f36(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101444) */
/* WARNING: Removing unreachable block (ram,0x00101450) */

void FUN_00101420(void)

{
  return;
}




undefined8 FUN_001019db(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 * FUN_0010215c(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00101a48(undefined8 param_1)

{
  FUN_00101af4(param_1);
  return;
}




void FUN_001026b0(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101e40(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102118(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001029e3(void)

{
  return;
}




void FUN_00102a5c(void)

{
  return;
}




void FUN_00101f0c(undefined8 param_1,undefined8 param_2)

{
  FUN_001021f0(param_1,param_2);
  return;
}




void FUN_00102a04(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef0)();
  return;
}




void FUN_00102558(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001021a2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101f65(param_2);
  uVar2 = FUN_00101640(param_1);
  FUN_00101cf4(param_1,uVar2,uVar1);
  return;
}




void FUN_0010209a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102332(param_1,param_2);
  return;
}




void FUN_00102180(undefined8 *param_1)

{
  FUN_00102346(*param_1);
  return;
}




void FUN_001016b0(undefined8 *param_1)

{
  FUN_001016f0(*param_1);
  return;
}




void FUN_001029c2(void)

{
  return;
}




undefined8 FUN_0010297f(void)

{
  return 1;
}




void FUN_001020d6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020c4(param_2);
  FUN_0010209a(param_1,uVar1);
  FUN_001019f2(param_1);
  return;
}




long FUN_00102310(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102a3b(void)

{
  return;
}




undefined8 FUN_00101d55(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010206c(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001029b7(void)

{
  return;
}




void FUN_00101b40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101640(param_1);
  FUN_00101cf4(param_1,uVar1,param_2);
  return;
}




void FUN_0010262e(undefined4 param_1)

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




undefined8 FUN_00102ab4(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102a7d,local_18);
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




void FUN_0010252c(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001016d2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102582(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00102bdc(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001023d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101f65(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001019db(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102432(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102494(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001025d8(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101b7a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101da6(param_2);
  FUN_00101d55(&local_21,uVar1);
  FUN_00101db8(param_1,&local_21);
  FUN_00101af4(&local_21);
  uVar1 = FUN_00101e40(param_2);
  uVar2 = FUN_00101df0(param_2);
                    /* try { // try from 00101c06 to 00101c0a has its CatchHandler @ 00101c0d */
  FUN_00101e8c(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101403) */
/* WARNING: Removing unreachable block (ram,0x0010140f) */

void FUN_001013f0(void)

{
  return;
}




undefined8 FUN_00102bff(undefined8 *param_1)

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




void FUN_00101712(undefined8 param_1)

{
  FUN_00101730(param_1);
  return;
}




void FUN_00102346(long param_1)

{
  FUN_00102414(param_1 + 0x10);
  return;
}




void FUN_001029cd(void)

{
  return;
}




void FUN_00102118(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001016f0(long param_1)

{
  FUN_00101712(param_1 + 0x10);
  return;
}




void FUN_00101b14(undefined8 param_1)

{
  FUN_00101c76(param_1);
  FUN_00101a48(param_1);
  return;
}




void FUN_00102d60(void)

{
  return;
}




void FUN_00102a0f(void)

{
  return;
}




void FUN_00102cf0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101a68(undefined8 param_1)

{
  FUN_00101ac8(param_1);
  return;
}




void FUN_001021f0(void)

{
  return;
}




undefined8 FUN_00101976(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024ac("Calling good()...");
  FUN_00101966();
  FUN_001024ac("Finished good()");
  FUN_001024ac("Calling bad()...");
  FUN_00101742();
  FUN_001024ac("Finished bad()");
  return 0;
}




void FUN_00102603(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101966(void)

{
  FUN_00101854();
  return;
}




void FUN_00101854(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a88(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(0xb);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
                    /* try { // try from 001018b3 to 001018f0 has its CatchHandler @ 0010193c */
  FUN_00101b40(local_58,&local_60);
  FUN_00101b40(local_58,&local_60);
  FUN_00101b40(local_58,&local_60);
  FUN_00101b7a(local_38,local_58);
                    /* try { // try from 001018f8 to 001018fc has its CatchHandler @ 00101927 */
  FUN_00101545(local_38);
  FUN_00101aa8(local_38);
  FUN_00101aa8(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a12(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00101545(undefined8 param_1)

{
  void *__dest;
  undefined8 *puVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001015e2(param_1);
  __dest = (void *)*puVar1;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar2 = strlen(local_1b);
  memcpy(__dest,local_1b,sVar2 + 1);
  FUN_001024ac(__dest);
  free(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a25(void)

{
  return;
}




void FUN_0010238f(undefined8 param_1,undefined8 param_2)

{
  FUN_00102432(param_1,param_2,0);
  return;
}




void FUN_001026db(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00102136(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_001024d2(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001014a9(undefined8 param_1)

{
  void *__dest;
  undefined8 *puVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001015e2(param_1);
  __dest = (void *)*puVar1;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar2 = strlen(local_1b);
  memcpy(__dest,local_1b,sVar2 + 1);
  FUN_001024ac(__dest);
  free(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101aa8(undefined8 param_1)

{
  FUN_00101b14(param_1);
  return;
}




void FUN_00101ac8(undefined8 param_1)

{
  FUN_00101c46(param_1);
  FUN_001019f2(param_1);
  return;
}




undefined8 FUN_00101730(undefined8 param_1)

{
  return param_1;
}




void FUN_00101c66(void)

{
  return;
}




void FUN_00102a1a(void)

{
  return;
}




ulong FUN_0010279c(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102a30(void)

{
  return;
}




undefined8 FUN_00101da6(undefined8 param_1)

{
  return param_1;
}




void FUN_001025ad(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




bool FUN_00102b81(pthread_t *param_1)

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




void FUN_00101c46(undefined8 param_1)

{
  FUN_00101eea(param_1);
  return;
}




undefined8 FUN_00101f78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102236(param_1);
  uVar2 = FUN_00101efa(param_1);
  FUN_0010225a(local_38,uVar2,uVar1);
  uVar3 = FUN_00101f65(param_2);
  uVar4 = FUN_001016f0(uVar1);
  FUN_001022d3(uVar2,uVar4,uVar3);
  FUN_00102310(local_38,0);
  FUN_00102294(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




undefined8 FUN_0010206c(undefined8 param_1,undefined8 param_2)

{
  FUN_0010209a(param_1,param_2);
  return param_1;
}




undefined8 FUN_00101efa(undefined8 param_1)

{
  return param_1;
}




void FUN_001029f9(void)

{
  return;
}




void FUN_0010225a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023bd(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00102a72(void)

{
  return;
}




undefined8 FUN_00101f65(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001023bd(undefined8 param_1)

{
  return param_1;
}




ulong FUN_001028a0(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001015e2(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101640(param_1);
  FUN_0010168c(&local_18);
  FUN_001016b0(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101df0(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102118(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101eea(void)

{
  return;
}




void FUN_001022d3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f65(param_3);
  FUN_001023d0(param_1,param_2,uVar1);
  return;
}




void FUN_00102504(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102a51(void)

{
  return;
}




void FUN_00102c78(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102cb6(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102a46(void)

{
  return;
}




void FUN_00102a67(void)

{
  return;
}




undefined8 FUN_00102494(void)

{
  return 0x555555555555555;
}




void FUN_00102688(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001013f0();
    DAT_00106020 = 1;
    return;
  }
  return;
}




void FUN_00102294(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102203(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102236(undefined8 param_1)

{
  FUN_0010238f(param_1,1);
  return;
}




void FUN_00101a88(undefined8 param_1)

{
  FUN_00101a68(param_1);
  return;
}




void FUN_00101af4(undefined8 param_1)

{
  FUN_00101c66(param_1);
  return;
}




void FUN_00102709(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00102482(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101640(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001016d2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102c97(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001019f2(undefined8 param_1)

{
  FUN_00101a12(param_1);
  return;
}




undefined8 FUN_001020c4(undefined8 param_1)

{
  return param_1;
}




void FUN_00102203(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102368(param_1,param_2,param_3);
  return;
}




void FUN_00101f36(undefined8 param_1,undefined8 param_2)

{
  FUN_00102203(param_1,param_2,1);
  return;
}




void FUN_00102368(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001029ee(void)

{
  return;
}




long * FUN_0010168c(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00102332(void)

{
  return;
}




void FUN_00102414(undefined8 param_1)

{
  FUN_00102482(param_1);
  return;
}




void FUN_0010273c(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001029d8(void)

{
  return;
}




void FUN_001024ac(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101742(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a88(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(10);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
                    /* try { // try from 001017a1 to 001017de has its CatchHandler @ 0010182a */
  FUN_00101b40(local_58,&local_60);
  FUN_00101b40(local_58,&local_60);
  FUN_00101b40(local_58,&local_60);
  FUN_00101b7a(local_38,local_58);
                    /* try { // try from 001017e6 to 001017ea has its CatchHandler @ 00101815 */
  FUN_001014a9(local_38);
  FUN_00101aa8(local_38);
  FUN_00101aa8(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102042(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00101cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101f65(param_3);
  p_Var2 = (_List_node_base *)FUN_00101f78(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00102042(param_1,1);
  return;
}




void FUN_00101db8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020c4(param_2);
  FUN_001020d6(param_1,uVar1);
  return;
}




void FUN_00101e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102136(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00102180(&local_18);
    FUN_001021a2(local_10,uVar2);
    FUN_0010215c(&local_18);
  }
  return;
}




int FUN_0010299d(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_0010298e(void)

{
  return 0;
}




void FUN_00102a7d(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}



