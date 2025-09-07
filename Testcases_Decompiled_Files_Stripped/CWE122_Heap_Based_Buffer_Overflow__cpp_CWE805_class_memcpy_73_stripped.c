
void FUN_00101b54(undefined8 param_1)

{
  FUN_00101cc6(param_1);
  return;
}




void FUN_00101798(undefined8 param_1)

{
  FUN_001017b6(param_1);
  return;
}




undefined8 FUN_001020cc(undefined8 param_1,undefined8 param_2)

{
  FUN_001020fa(param_1,param_2);
  return param_1;
}




void FUN_001018c7(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ae8(local_58);
  local_60 = (void *)0x0;
                    /* try { // try from 001018fc to 00101950 has its CatchHandler @ 0010199c */
  local_60 = operator_new__(800);
  FUN_00101ba0(local_58,&local_60);
  FUN_00101ba0(local_58,&local_60);
  FUN_00101ba0(local_58,&local_60);
  FUN_00101bda(local_38,local_58);
                    /* try { // try from 00101958 to 0010195c has its CatchHandler @ 00101987 */
  FUN_00101588(local_38);
  FUN_00101b08(local_38);
  FUN_00101b08(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001025e2(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101cd6(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101776(local_20);
    uVar3 = FUN_00101f5a(param_1);
    FUN_00101f6c(uVar3,uVar2);
    FUN_00101f96(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




undefined8 FUN_001029ee(void)

{
  return 0;
}




void FUN_00102a7a(void)

{
  return;
}




void FUN_00101e18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102124(param_2);
  FUN_00102136(param_1,uVar1);
  return;
}




void FUN_00102a22(void)

{
  return;
}




void FUN_00102dc0(void)

{
  return;
}




void FUN_00102cd8(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_001024e2(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102124(undefined8 param_1)

{
  return param_1;
}




void FUN_00101f6c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102250(param_1,param_2);
  return;
}




void FUN_001020fa(undefined8 param_1,undefined8 param_2)

{
  FUN_00102392(param_1,param_2);
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




ulong FUN_001027fc(long param_1,ulong param_2,long param_3)

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




void FUN_00102710(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101fc5(undefined8 param_1)

{
  return param_1;
}




void FUN_00102250(void)

{
  return;
}




void FUN_00102a59(void)

{
  return;
}




void FUN_00101ba0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001016c6(param_1);
  FUN_00101d54(param_1,uVar1,param_2);
  return;
}




void FUN_0010279c(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101ac8(undefined8 param_1)

{
  FUN_00101b28(param_1);
  return;
}




void FUN_0010258c(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102aa6(void)

{
  return;
}




void FUN_00102492(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001024f4(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001014a9(undefined8 param_1)

{
  undefined4 *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  ulong local_348;
  undefined4 local_338 [202];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101668(param_1);
  __dest = (undefined4 *)*puVar1;
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    local_338[local_348 * 2] = 0;
    local_338[local_348 * 2 + 1] = 0;
  }
  memcpy(__dest,local_338,800);
  FUN_00102564(*__dest);
  if (__dest != (undefined4 *)0x0) {
    operator_delete__(__dest);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001024f4(void)

{
  return 0x555555555555555;
}




void FUN_00102d50(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102abc(void)

{
  return;
}




long FUN_00102370(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_001023a6(long param_1)

{
  FUN_00102474(param_1 + 0x10);
  return;
}




void FUN_00102532(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101ae8(undefined8 param_1)

{
  FUN_00101ac8(param_1);
  return;
}




void FUN_00102ac7(void)

{
  return;
}




void FUN_00101668(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_001016c6(param_1);
  FUN_00101712(&local_18);
  FUN_00101736(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102296(undefined8 param_1)

{
  FUN_001023ef(param_1,1);
  return;
}




ulong FUN_00102900(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00101fd8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102296(param_1);
  uVar2 = FUN_00101f5a(param_1);
  FUN_001022ba(local_38,uVar2,uVar1);
  uVar3 = FUN_00101fc5(param_2);
  uVar4 = FUN_00101776(uVar1);
  FUN_00102333(uVar2,uVar4,uVar3);
  FUN_00102370(local_38,0);
  FUN_001022f4(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00101588(undefined8 param_1)

{
  undefined4 *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  ulong local_348;
  undefined4 local_338 [202];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101668(param_1);
  __dest = (undefined4 *)*puVar1;
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    local_338[local_348 * 2] = 0;
    local_338[local_348 * 2 + 1] = 0;
  }
  memcpy(__dest,local_338,800);
  FUN_00102564(*__dest);
  if (__dest != (undefined4 *)0x0) {
    operator_delete__(__dest);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101aa8(undefined8 param_1)

{
  FUN_00101b54(param_1);
  return;
}




undefined8 FUN_00102c3c(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102a2d(void)

{
  return;
}




bool FUN_00102be1(pthread_t *param_1)

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




void FUN_001019c6(void)

{
  FUN_001018c7();
  return;
}




void FUN_00102136(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102124(param_2);
  FUN_001020fa(param_1,uVar1);
  FUN_00101a52(param_1);
  return;
}




void FUN_00101776(long param_1)

{
  FUN_00101798(param_1 + 0x10);
  return;
}




void FUN_00102564(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101758(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101736(undefined8 *param_1)

{
  FUN_00101776(*param_1);
  return;
}




void FUN_001017c8(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ae8(local_58);
  local_60 = (void *)0x0;
                    /* try { // try from 001017fd to 00101851 has its CatchHandler @ 0010189d */
  local_60 = operator_new__(400);
  FUN_00101ba0(local_58,&local_60);
  FUN_00101ba0(local_58,&local_60);
  FUN_00101ba0(local_58,&local_60);
  FUN_00101bda(local_38,local_58);
                    /* try { // try from 00101859 to 0010185d has its CatchHandler @ 00101888 */
  FUN_001014a9(local_38);
  FUN_00101b08(local_38);
  FUN_00101b08(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef0)();
  return;
}




undefined8 FUN_00102c5f(undefined8 *param_1)

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




void FUN_00102a43(void)

{
  return;
}




void FUN_001022f4(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102263(*param_1,param_1[1],1);
  }
  return;
}




void FUN_0010260d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001020a2(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101fc5(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a3b(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102cf7(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00101a3b(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101a52(undefined8 param_1)

{
  FUN_00101a72(param_1);
  return;
}




undefined8 FUN_001016c6(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101758(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101b28(undefined8 param_1)

{
  FUN_00101ca6(param_1);
  FUN_00101a52(param_1);
  return;
}




void FUN_00102a38(void)

{
  return;
}




void FUN_0010268e(undefined4 param_1)

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




void FUN_00102a4e(void)

{
  return;
}




void FUN_00101bda(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101e06(param_2);
  FUN_00101db5(&local_21,uVar1);
  FUN_00101e18(param_1,&local_21);
  FUN_00101b54(&local_21);
  uVar1 = FUN_00101ea0(param_2);
  uVar2 = FUN_00101e50(param_2);
                    /* try { // try from 00101c66 to 00101c6a has its CatchHandler @ 00101c6d */
  FUN_00101eec(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010250c(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102ab1(void)

{
  return;
}




void FUN_00101b08(undefined8 param_1)

{
  FUN_00101b74(param_1);
  return;
}




void FUN_00101eec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102196(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001021e0(&local_18);
    FUN_00102202(local_10,uVar2);
    FUN_001021bc(&local_18);
  }
  return;
}




undefined8 FUN_00101f5a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101e06(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a17(void)

{
  return;
}




undefined8 * FUN_001021bc(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00102a90(void)

{
  return;
}




undefined8 FUN_00101ea0(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102178(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102333(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fc5(param_3);
  FUN_00102430(param_1,param_2,uVar1);
  return;
}




void FUN_001026e8(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101cc6(void)

{
  return;
}




undefined8 FUN_00101db5(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001020cc(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102202(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101fc5(param_2);
  uVar2 = FUN_001016c6(param_1);
  FUN_00101d54(param_1,uVar2,uVar1);
  return;
}




void FUN_00102474(undefined8 param_1)

{
  FUN_001024e2(param_1);
  return;
}




void FUN_00102a6f(void)

{
  return;
}




void FUN_00102ad2(void)

{
  return;
}




undefined8 FUN_00102b14(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102add,local_18);
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




void FUN_00102a64(void)

{
  return;
}




void FUN_00102a85(void)

{
  return;
}




void FUN_001023ef(undefined8 param_1,undefined8 param_2)

{
  FUN_00102492(param_1,param_2,0);
  return;
}




void FUN_001025b8(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102d16(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001021e0(undefined8 *param_1)

{
  FUN_001023a6(*param_1);
  return;
}




undefined8 FUN_00102196(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




undefined8 FUN_001019d6(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010250c("Calling good()...");
  FUN_001019c6();
  FUN_0010250c("Finished good()");
  FUN_0010250c("Calling bad()...");
  FUN_001017c8();
  FUN_0010250c("Finished bad()");
  return 0;
}




void FUN_00101a72(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00102638(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001023c8(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101403) */
/* WARNING: Removing unreachable block (ram,0x0010140f) */

void FUN_001013f0(void)

{
  return;
}




void FUN_00102add(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_001017b6(undefined8 param_1)

{
  return param_1;
}




void FUN_00101f96(undefined8 param_1,undefined8 param_2)

{
  FUN_00102263(param_1,param_2,1);
  return;
}




void FUN_00102178(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00101e50(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102178(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001022ba(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010241d(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




int FUN_001029fd(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




/* WARNING: Removing unreachable block (ram,0x00101444) */
/* WARNING: Removing unreachable block (ram,0x00101450) */

void FUN_00101420(void)

{
  return;
}




void FUN_00102263(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001023c8(param_1,param_2,param_3);
  return;
}




void FUN_00102392(void)

{
  return;
}




void FUN_00102663(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001029df(void)

{
  return 1;
}




undefined8 FUN_0010241d(undefined8 param_1)

{
  return param_1;
}




long * FUN_00101712(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00101f4a(void)

{
  return;
}




void FUN_00101b74(undefined8 param_1)

{
  FUN_00101cd6(param_1);
  FUN_00101aa8(param_1);
  return;
}




void FUN_00101ca6(undefined8 param_1)

{
  FUN_00101f4a(param_1);
  return;
}




void FUN_00101d54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101fc5(param_3);
  p_Var2 = (_List_node_base *)FUN_00101fd8(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_001020a2(param_1,1);
  return;
}




void FUN_00102769(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010273b(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102a9b(void)

{
  return;
}



