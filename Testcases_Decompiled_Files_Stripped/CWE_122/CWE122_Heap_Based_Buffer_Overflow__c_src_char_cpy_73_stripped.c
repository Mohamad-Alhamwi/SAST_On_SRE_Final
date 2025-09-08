
void FUN_00101b16(undefined8 param_1)

{
  FUN_00101c94(param_1);
  FUN_00101a40(param_1);
  return;
}




void FUN_0010170c(long param_1)

{
  FUN_0010172e(param_1 + 0x10);
  return;
}




void FUN_00102090(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_0010175e(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ad6(local_58);
  local_60 = malloc(100);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_60,0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
                    /* try { // try from 001017d6 to 00101813 has its CatchHandler @ 0010185f */
  FUN_00101b8e(local_58,&local_60);
  FUN_00101b8e(local_58,&local_60);
  FUN_00101b8e(local_58,&local_60);
  FUN_00101bc8(local_38,local_58);
                    /* try { // try from 0010181b to 0010181f has its CatchHandler @ 0010184a */
  FUN_001014a9(local_38);
  FUN_00101af6(local_38);
  FUN_00101af6(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001025a6(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101cb4(void)

{
  return;
}




undefined8 FUN_001029cd(void)

{
  return 1;
}




void FUN_00102a5d(void)

{
  return;
}




void FUN_00102da0(void)

{
  return;
}




undefined8 FUN_00101df4(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a05(void)

{
  return;
}




void FUN_00102d30(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00102c4d(undefined8 *param_1)

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




void FUN_00102480(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001024e2(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001020e8(undefined8 param_1,undefined8 param_2)

{
  FUN_00102380(param_1,param_2);
  return;
}




undefined8 FUN_00101f48(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001020ba(undefined8 param_1,undefined8 param_2)

{
  FUN_001020e8(param_1,param_2);
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x00101444) */
/* WARNING: Removing unreachable block (ram,0x00101450) */

void FUN_00101420(void)

{
  return;
}




void FUN_0010278a(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001026d6(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101f84(undefined8 param_1,undefined8 param_2)

{
  FUN_00102251(param_1,param_2,1);
  return;
}




void FUN_001021f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101fb3(param_2);
  uVar2 = FUN_0010165c(param_1);
  FUN_00101d42(param_1,uVar2,uVar1);
  return;
}




void FUN_00102a3c(void)

{
  return;
}




void FUN_00101b62(undefined8 param_1)

{
  FUN_00101cc4(param_1);
  FUN_00101a96(param_1);
  return;
}




void FUN_00102757(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101a96(undefined8 param_1)

{
  FUN_00101b42(param_1);
  return;
}




void FUN_00102552(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102a89(void)

{
  return;
}




void FUN_00102462(undefined8 param_1)

{
  FUN_001024d0(param_1);
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




undefined8 FUN_001024d0(undefined8 param_1)

{
  return param_1;
}




void FUN_00102d04(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102a9f(void)

{
  return;
}




void FUN_00102321(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fb3(param_3);
  FUN_0010241e(param_1,param_2,uVar1);
  return;
}




void FUN_00102380(void)

{
  return;
}




void FUN_001024fa(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101ab6(undefined8 param_1)

{
  FUN_00101b16(param_1);
  return;
}




void FUN_00102aaa(void)

{
  return;
}




void FUN_00101553(undefined8 param_1)

{
  char *__src;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_48 [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001015fe(param_1);
  __src = (char *)*puVar1;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[0x18] = '\0';
  local_48[0x19] = '\0';
  local_48[0x1a] = '\0';
  local_48[0x1b] = '\0';
  local_48[0x1c] = '\0';
  local_48[0x1d] = '\0';
  local_48[0x1e] = '\0';
  local_48[0x1f] = '\0';
  local_48[0x20] = '\0';
  local_48[0x21] = '\0';
  local_48[0x22] = '\0';
  local_48[0x23] = '\0';
  local_48[0x24] = '\0';
  local_48[0x25] = '\0';
  local_48[0x26] = '\0';
  local_48[0x27] = '\0';
  local_48[0x28] = '\0';
  local_48[0x29] = '\0';
  local_48[0x2a] = '\0';
  local_48[0x2b] = '\0';
  local_48[0x2c] = '\0';
  local_48[0x2d] = '\0';
  local_48[0x2e] = '\0';
  local_48[0x2f] = '\0';
  local_48[0x30] = '\0';
  local_48[0x31] = '\0';
  strcpy(local_48,__src);
  FUN_001024fa(__src);
  free(__src);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102251(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001023b6(param_1,param_2,param_3);
  return;
}




ulong FUN_001027ea(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00101fb3(undefined8 param_1)

{
  return param_1;
}




void FUN_001014a9(undefined8 param_1)

{
  char *__src;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_48 [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001015fe(param_1);
  __src = (char *)*puVar1;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[0x18] = '\0';
  local_48[0x19] = '\0';
  local_48[0x1a] = '\0';
  local_48[0x1b] = '\0';
  local_48[0x1c] = '\0';
  local_48[0x1d] = '\0';
  local_48[0x1e] = '\0';
  local_48[0x1f] = '\0';
  local_48[0x20] = '\0';
  local_48[0x21] = '\0';
  local_48[0x22] = '\0';
  local_48[0x23] = '\0';
  local_48[0x24] = '\0';
  local_48[0x25] = '\0';
  local_48[0x26] = '\0';
  local_48[0x27] = '\0';
  local_48[0x28] = '\0';
  local_48[0x29] = '\0';
  local_48[0x2a] = '\0';
  local_48[0x2b] = '\0';
  local_48[0x2c] = '\0';
  local_48[0x2d] = '\0';
  local_48[0x2e] = '\0';
  local_48[0x2f] = '\0';
  local_48[0x30] = '\0';
  local_48[0x31] = '\0';
  strcpy(local_48,__src);
  FUN_001024fa(__src);
  free(__src);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a60(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




bool FUN_00102bcf(pthread_t *param_1)

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




void FUN_00102a10(void)

{
  return;
}




undefined8 FUN_00102b02(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102acb,local_18);
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




void FUN_00101889(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ad6(local_58);
  local_60 = malloc(100);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_60,0x41,0x31);
  *(undefined *)((long)local_60 + 0x31) = 0;
                    /* try { // try from 00101901 to 0010193e has its CatchHandler @ 0010198a */
  FUN_00101b8e(local_58,&local_60);
  FUN_00101b8e(local_58,&local_60);
  FUN_00101b8e(local_58,&local_60);
  FUN_00101bc8(local_38,local_58);
                    /* try { // try from 00101946 to 0010194a has its CatchHandler @ 00101975 */
  FUN_00101553(local_38);
  FUN_00101af6(local_38);
  FUN_00101af6(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102112(undefined8 param_1)

{
  return param_1;
}




void FUN_001016ee(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102520(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001016cc(undefined8 *param_1)

{
  FUN_0010170c(*param_1);
  return;
}




long * FUN_001016a8(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




undefined8 FUN_0010174c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102c2a(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102a26(void)

{
  return;
}




void FUN_001022a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010240b(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_001025d0(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101fc6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102284(param_1);
  uVar2 = FUN_00101f48(param_1);
  FUN_001022a8(local_38,uVar2,uVar1);
  uVar3 = FUN_00101fb3(param_2);
  uVar4 = FUN_0010170c(uVar1);
  FUN_00102321(uVar2,uVar4,uVar3);
  FUN_0010235e(local_38,0);
  FUN_001022e2(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




undefined8 FUN_0010240b(undefined8 param_1)

{
  return param_1;
}




void FUN_00102cc6(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_001019c4(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024fa("Calling good()...");
  FUN_001019b4();
  FUN_001024fa("Finished good()");
  FUN_001024fa("Calling bad()...");
  FUN_0010175e();
  FUN_001024fa("Finished bad()");
  return 0;
}




undefined8 FUN_00101a29(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001015fe(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_0010165c(param_1);
  FUN_001016a8(&local_18);
  FUN_001016cc(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101af6(undefined8 param_1)

{
  FUN_00101b62(param_1);
  return;
}




void FUN_00102a1b(void)

{
  return;
}




void FUN_00102651(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102a31(void)

{
  return;
}




void FUN_00101b8e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010165c(param_1);
  FUN_00101d42(param_1,uVar1,param_2);
  return;
}




undefined8 FUN_001024e2(void)

{
  return 0x555555555555555;
}




void FUN_00102a94(void)

{
  return;
}




void FUN_00101ad6(undefined8 param_1)

{
  FUN_00101ab6(param_1);
  return;
}




undefined8 FUN_00101e8e(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102166(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101f38(void)

{
  return;
}




undefined8 FUN_00101da3(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001020ba(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




int FUN_001029eb(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00102184(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102a73(void)

{
  return;
}




undefined8 FUN_00101e3e(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102166(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001022e2(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102251(*param_1,param_1[1],1);
  }
  return;
}




void FUN_0010267c(undefined4 param_1)

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




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef0)();
  return;
}




void FUN_00101c94(undefined8 param_1)

{
  FUN_00101f38(param_1);
  return;
}




void FUN_00101d42(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101fb3(param_3);
  p_Var2 = (_List_node_base *)FUN_00101fc6(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00102090(param_1,1);
  return;
}




void FUN_001021ce(undefined8 *param_1)

{
  FUN_00102394(*param_1);
  return;
}




void FUN_0010241e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101fb3(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a29(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102a52(void)

{
  return;
}




void FUN_00102ab5(void)

{
  return;
}




void FUN_00102acb(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102a47(void)

{
  return;
}




void FUN_00102a68(void)

{
  return;
}




void FUN_001023b6(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010257a(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102ce5(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 * FUN_001021aa(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00102166(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001019b4(void)

{
  FUN_00101889();
  return;
}




void FUN_00101a40(undefined8 param_1)

{
  FUN_00101a60(param_1);
  return;
}




void FUN_001025fb(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102394(long param_1)

{
  FUN_00102462(param_1 + 0x10);
  return;
}




void FUN_00102ac0(void)

{
  return;
}




void FUN_0010172e(undefined8 param_1)

{
  FUN_0010174c(param_1);
  return;
}




void FUN_00101f5a(undefined8 param_1,undefined8 param_2)

{
  FUN_0010223e(param_1,param_2);
  return;
}




void FUN_00102124(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102112(param_2);
  FUN_001020e8(param_1,uVar1);
  FUN_00101a40(param_1);
  return;
}




void FUN_00101e06(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102112(param_2);
  FUN_00102124(param_1,uVar1);
  return;
}




void FUN_00102284(undefined8 param_1)

{
  FUN_001023dd(param_1,1);
  return;
}




undefined8 FUN_001029dc(void)

{
  return 0;
}




/* WARNING: Removing unreachable block (ram,0x00101403) */
/* WARNING: Removing unreachable block (ram,0x0010140f) */

void FUN_001013f0(void)

{
  return;
}




void FUN_0010223e(void)

{
  return;
}




long FUN_0010235e(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102626(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




ulong FUN_001028ee(long param_1,ulong param_2,long param_3)

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




void FUN_001023dd(undefined8 param_1,undefined8 param_2)

{
  FUN_00102480(param_1,param_2,0);
  return;
}




undefined8 FUN_0010165c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001016ee(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101eda(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102184(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001021ce(&local_18);
    FUN_001021f0(local_10,uVar2);
    FUN_001021aa(&local_18);
  }
  return;
}




void FUN_00101b42(undefined8 param_1)

{
  FUN_00101cb4(param_1);
  return;
}




void FUN_00101bc8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101df4(param_2);
  FUN_00101da3(&local_21,uVar1);
  FUN_00101e06(param_1,&local_21);
  FUN_00101b42(&local_21);
  uVar1 = FUN_00101e8e(param_2);
  uVar2 = FUN_00101e3e(param_2);
                    /* try { // try from 00101c54 to 00101c58 has its CatchHandler @ 00101c5b */
  FUN_00101eda(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101cc4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_0010170c(local_20);
    uVar3 = FUN_00101f48(param_1);
    FUN_00101f5a(uVar3,uVar2);
    FUN_00101f84(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00102729(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001026fe(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102a7e(void)

{
  return;
}



