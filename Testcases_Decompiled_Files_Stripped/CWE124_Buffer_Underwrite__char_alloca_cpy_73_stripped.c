
void FUN_00101bbe(undefined8 param_1)

{
  FUN_00101d30(param_1);
  return;
}




void FUN_001016d0(undefined8 param_1)

{
  FUN_001016ee(param_1);
  return;
}




undefined8 FUN_00102136(undefined8 param_1,undefined8 param_2)

{
  FUN_00102164(param_1,param_2);
  return param_1;
}




void FUN_0010189a(void)

{
  void **ppvVar1;
  long in_FS_OFFSET;
  void *local_68;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b52(local_58);
  for (ppvVar1 = &local_68; ppvVar1 != &local_68; ppvVar1 = (void **)((long)ppvVar1 + -0x1000)) {
    *(undefined8 *)((long)ppvVar1 + -8) = *(undefined8 *)((long)ppvVar1 + -8);
  }
  *(undefined8 *)((long)ppvVar1 + -8) = *(undefined8 *)((long)ppvVar1 + -8);
  local_60 = (void *)((ulong)((long)ppvVar1 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)ppvVar1 + -0x78) = 0x10195d;
  memset((void *)((ulong)((long)ppvVar1 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_68 = local_60;
                    /* try { // try from 0010197e to 001019bb has its CatchHandler @ 00101a07 */
  *(undefined8 *)((long)ppvVar1 + -0x78) = 0x101983;
  FUN_00101c0a(local_58,&local_68);
  *(undefined8 *)((long)ppvVar1 + -0x78) = 0x101996;
  FUN_00101c0a(local_58,&local_68);
  *(undefined8 *)((long)ppvVar1 + -0x78) = 0x1019a9;
  FUN_00101c0a(local_58,&local_68);
  *(undefined8 *)((long)ppvVar1 + -0x78) = 0x1019bc;
  FUN_00101c44(local_38,local_58);
                    /* try { // try from 001019c3 to 001019c7 has its CatchHandler @ 001019f2 */
  *(undefined8 *)((long)ppvVar1 + -0x78) = 0x1019c8;
  FUN_00101514(local_38);
  *(undefined8 *)((long)ppvVar1 + -0x78) = 0x1019d4;
  FUN_00101b72(local_38);
  *(undefined8 *)((long)ppvVar1 + -0x78) = 0x1019e0;
  FUN_00101b72(local_58);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppvVar1 + -0x78) = 0x101a2a;
  __stack_chk_fail();
}




void FUN_0010264c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101d40(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_001016ae(local_20);
    uVar3 = FUN_00101fc4(param_1);
    FUN_00101fd6(uVar3,uVar2);
    FUN_00102000(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




undefined8 FUN_00102a58(void)

{
  return 0;
}




void FUN_00102ae4(void)

{
  return;
}




void FUN_00101e82(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010218e(param_2);
  FUN_001021a0(param_1,uVar1);
  return;
}




void FUN_00102a8c(void)

{
  return;
}




void FUN_00102e20(void)

{
  return;
}




void FUN_00102d42(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_0010254c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010218e(undefined8 param_1)

{
  return param_1;
}




void FUN_00101fd6(undefined8 param_1,undefined8 param_2)

{
  FUN_001022ba(param_1,param_2);
  return;
}




void FUN_00102164(undefined8 param_1,undefined8 param_2)

{
  FUN_001023fc(param_1,param_2);
  return;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001013d0();
    DAT_00106020 = 1;
    return;
  }
  return;
}




ulong FUN_00102866(long param_1,ulong param_2,long param_3)

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




void FUN_0010277a(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_0010202f(undefined8 param_1)

{
  return param_1;
}




void FUN_001022ba(void)

{
  return;
}




void FUN_00102ac3(void)

{
  return;
}




void FUN_00101c0a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001015fe(param_1);
  FUN_00101dbe(param_1,uVar1,param_2);
  return;
}




void FUN_00102806(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101b32(undefined8 param_1)

{
  FUN_00101b92(param_1);
  return;
}




void FUN_001025f6(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102b10(void)

{
  return;
}




void FUN_001024fc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010255e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00101489(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001015a0(param_1);
  __dest = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(__dest,local_78);
  FUN_00102576(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010255e(void)

{
  return 0x555555555555555;
}




void FUN_00102db0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102b26(void)

{
  return;
}




long FUN_001023da(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102410(long param_1)

{
  FUN_001024de(param_1 + 0x10);
  return;
}




void FUN_0010259c(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101b52(undefined8 param_1)

{
  FUN_00101b32(param_1);
  return;
}




void FUN_00102b31(void)

{
  return;
}




void FUN_001015a0(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_001015fe(param_1);
  FUN_0010164a(&local_18);
  FUN_0010166e(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102300(undefined8 param_1)

{
  FUN_00102459(param_1,1);
  return;
}




ulong FUN_0010296a(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00102042(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102300(param_1);
  uVar2 = FUN_00101fc4(param_1);
  FUN_00102324(local_38,uVar2,uVar1);
  uVar3 = FUN_0010202f(param_2);
  uVar4 = FUN_001016ae(uVar1);
  FUN_0010239d(uVar2,uVar4,uVar3);
  FUN_001023da(local_38,0);
  FUN_0010235e(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00101514(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001015a0(param_1);
  __dest = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(__dest,local_78);
  FUN_00102576(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101b12(undefined8 param_1)

{
  FUN_00101bbe(param_1);
  return;
}




undefined8 FUN_00102ca6(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102a97(void)

{
  return;
}




bool FUN_00102c4b(pthread_t *param_1)

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




void FUN_00101a30(void)

{
  FUN_0010189a();
  return;
}




void FUN_001021a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010218e(param_2);
  FUN_00102164(param_1,uVar1);
  FUN_00101abc(param_1);
  return;
}




void FUN_001016ae(long param_1)

{
  FUN_001016d0(param_1 + 0x10);
  return;
}




void FUN_001025ce(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101690(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010166e(undefined8 *param_1)

{
  FUN_001016ae(*param_1);
  return;
}




void FUN_00101700(void)

{
  long *plVar1;
  long in_FS_OFFSET;
  long local_68;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b52(local_58);
  for (plVar1 = &local_68; plVar1 != &local_68; plVar1 = (long *)((long)plVar1 + -0x1000)) {
    *(undefined8 *)((long)plVar1 + -8) = *(undefined8 *)((long)plVar1 + -8);
  }
  *(undefined8 *)((long)plVar1 + -8) = *(undefined8 *)((long)plVar1 + -8);
  local_60 = (void *)((ulong)((long)plVar1 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)plVar1 + -0x78) = 0x1017c3;
  memset((void *)((ulong)((long)plVar1 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_68 = (long)local_60 + -8;
                    /* try { // try from 001017e8 to 00101825 has its CatchHandler @ 00101871 */
  *(undefined8 *)((long)plVar1 + -0x78) = 0x1017ed;
  FUN_00101c0a(local_58,&local_68);
  *(undefined8 *)((long)plVar1 + -0x78) = 0x101800;
  FUN_00101c0a(local_58,&local_68);
  *(undefined8 *)((long)plVar1 + -0x78) = 0x101813;
  FUN_00101c0a(local_58,&local_68);
  *(undefined8 *)((long)plVar1 + -0x78) = 0x101826;
  FUN_00101c44(local_38,local_58);
                    /* try { // try from 0010182d to 00101831 has its CatchHandler @ 0010185c */
  *(undefined8 *)((long)plVar1 + -0x78) = 0x101832;
  FUN_00101489(local_38);
  *(undefined8 *)((long)plVar1 + -0x78) = 0x10183e;
  FUN_00101b72(local_38);
  *(undefined8 *)((long)plVar1 + -0x78) = 0x10184a;
  FUN_00101b72(local_58);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)plVar1 + -0x78) = 0x101894;
  __stack_chk_fail();
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef8)();
  return;
}




undefined8 FUN_00102cc9(undefined8 *param_1)

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




void FUN_00102aad(void)

{
  return;
}




void FUN_0010235e(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001022cd(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102677(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010210c(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_0010249a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_0010202f(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101aa5(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102d61(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00101aa5(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101abc(undefined8 param_1)

{
  FUN_00101adc(param_1);
  return;
}




undefined8 FUN_001015fe(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101690(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101b92(undefined8 param_1)

{
  FUN_00101d10(param_1);
  FUN_00101abc(param_1);
  return;
}




void FUN_00102aa2(void)

{
  return;
}




void FUN_001026f8(undefined4 param_1)

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




void FUN_00102ab8(void)

{
  return;
}




void FUN_00101c44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101e70(param_2);
  FUN_00101e1f(&local_21,uVar1);
  FUN_00101e82(param_1,&local_21);
  FUN_00101bbe(&local_21);
  uVar1 = FUN_00101f0a(param_2);
  uVar2 = FUN_00101eba(param_2);
                    /* try { // try from 00101cd0 to 00101cd4 has its CatchHandler @ 00101cd7 */
  FUN_00101f56(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102576(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102b1b(void)

{
  return;
}




void FUN_00101b72(undefined8 param_1)

{
  FUN_00101bde(param_1);
  return;
}




void FUN_00101f56(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102200(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010224a(&local_18);
    FUN_0010226c(local_10,uVar2);
    FUN_00102226(&local_18);
  }
  return;
}




undefined8 FUN_00101fc4(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101e70(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a81(void)

{
  return;
}




undefined8 * FUN_00102226(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00102afa(void)

{
  return;
}




undefined8 FUN_00101f0a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021e2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010239d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010202f(param_3);
  FUN_0010249a(param_1,param_2,uVar1);
  return;
}




void FUN_00102752(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101d30(void)

{
  return;
}




undefined8 FUN_00101e1f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102136(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_0010226c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010202f(param_2);
  uVar2 = FUN_001015fe(param_1);
  FUN_00101dbe(param_1,uVar2,uVar1);
  return;
}




void FUN_001024de(undefined8 param_1)

{
  FUN_0010254c(param_1);
  return;
}




void FUN_00102ad9(void)

{
  return;
}




void FUN_00102b3c(void)

{
  return;
}




undefined8 FUN_00102b7e(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102b47,local_18);
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




void FUN_00102ace(void)

{
  return;
}




void FUN_00102aef(void)

{
  return;
}




void FUN_00102459(undefined8 param_1,undefined8 param_2)

{
  FUN_001024fc(param_1,param_2,0);
  return;
}




void FUN_00102622(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102d80(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010224a(undefined8 *param_1)

{
  FUN_00102410(*param_1);
  return;
}




undefined8 FUN_00102200(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




undefined8 FUN_00101a40(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102576("Calling good()...");
  FUN_00101a30();
  FUN_00102576("Finished good()");
  FUN_00102576("Calling bad()...");
  FUN_00101700();
  FUN_00102576("Finished bad()");
  return 0;
}




void FUN_00101adc(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_001026a2(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102432(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e3) */
/* WARNING: Removing unreachable block (ram,0x001013ef) */

void FUN_001013d0(void)

{
  return;
}




void FUN_00102b47(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_001016ee(undefined8 param_1)

{
  return param_1;
}




void FUN_00102000(undefined8 param_1,undefined8 param_2)

{
  FUN_001022cd(param_1,param_2,1);
  return;
}




void FUN_001021e2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00101eba(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021e2(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102324(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102487(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




int FUN_00102a67(void)

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




void FUN_001022cd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102432(param_1,param_2,param_3);
  return;
}




void FUN_001023fc(void)

{
  return;
}




void FUN_001026cd(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102a49(void)

{
  return 1;
}




undefined8 FUN_00102487(undefined8 param_1)

{
  return param_1;
}




long * FUN_0010164a(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00101fb4(void)

{
  return;
}




void FUN_00101bde(undefined8 param_1)

{
  FUN_00101d40(param_1);
  FUN_00101b12(param_1);
  return;
}




void FUN_00101d10(undefined8 param_1)

{
  FUN_00101fb4(param_1);
  return;
}




void FUN_00101dbe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_0010202f(param_3);
  p_Var2 = (_List_node_base *)FUN_00102042(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_0010210c(param_1,1);
  return;
}




void FUN_001027d3(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001027a5(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102b05(void)

{
  return;
}



