
void FUN_00101aec(undefined8 param_1)

{
  FUN_00101c6a(param_1);
  FUN_00101a16(param_1);
  return;
}




void FUN_00101706(long param_1)

{
  FUN_00101728(param_1 + 0x10);
  return;
}




void FUN_00102066(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00101758(void)

{
  long in_FS_OFFSET;
  undefined *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101aac(local_58);
  local_60 = (undefined *)0x0;
  local_60 = (undefined *)malloc(0x32);
  if (local_60 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_60 = 0;
                    /* try { // try from 001017be to 001017fb has its CatchHandler @ 00101847 */
  FUN_00101b64(local_58,&local_60);
  FUN_00101b64(local_58,&local_60);
  FUN_00101b64(local_58,&local_60);
  FUN_00101b9e(local_38,local_58);
                    /* try { // try from 00101803 to 00101807 has its CatchHandler @ 00101832 */
  FUN_001014a9(local_38);
  FUN_00101acc(local_38);
  FUN_00101acc(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010257c(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101c8a(void)

{
  return;
}




undefined8 FUN_001029a3(void)

{
  return 1;
}




void FUN_00102a33(void)

{
  return;
}




void FUN_00102d80(void)

{
  return;
}




undefined8 FUN_00101dca(undefined8 param_1)

{
  return param_1;
}




void FUN_001029db(void)

{
  return;
}




void FUN_00102d10(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00102c23(undefined8 *param_1)

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




void FUN_00102456(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001024b8(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001020be(undefined8 param_1,undefined8 param_2)

{
  FUN_00102356(param_1,param_2);
  return;
}




undefined8 FUN_00101f1e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102090(undefined8 param_1,undefined8 param_2)

{
  FUN_001020be(param_1,param_2);
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x00101444) */
/* WARNING: Removing unreachable block (ram,0x00101450) */

void FUN_00101420(void)

{
  return;
}




void FUN_00102760(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001026ac(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101f5a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102227(param_1,param_2,1);
  return;
}




void FUN_001021c6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101f89(param_2);
  uVar2 = FUN_00101656(param_1);
  FUN_00101d18(param_1,uVar2,uVar1);
  return;
}




void FUN_00102a12(void)

{
  return;
}




void FUN_00101b38(undefined8 param_1)

{
  FUN_00101c9a(param_1);
  FUN_00101a6c(param_1);
  return;
}




void FUN_0010272d(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101a6c(undefined8 param_1)

{
  FUN_00101b18(param_1);
  return;
}




void FUN_00102528(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102a5f(void)

{
  return;
}




void FUN_00102438(undefined8 param_1)

{
  FUN_001024a6(param_1);
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




undefined8 FUN_001024a6(undefined8 param_1)

{
  return param_1;
}




void FUN_00102cda(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102a75(void)

{
  return;
}




void FUN_001022f7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f89(param_3);
  FUN_001023f4(param_1,param_2,uVar1);
  return;
}




void FUN_00102356(void)

{
  return;
}




void FUN_001024d0(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101a8c(undefined8 param_1)

{
  FUN_00101aec(param_1);
  return;
}




void FUN_00102a80(void)

{
  return;
}




void FUN_00101550(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001015f8(param_1);
  __dest = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(__dest,local_78,99);
  __dest[99] = '\0';
  FUN_001024d0(__dest);
  free(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102227(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010238c(param_1,param_2,param_3);
  return;
}




ulong FUN_001027c0(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00101f89(undefined8 param_1)

{
  return param_1;
}




void FUN_001014a9(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001015f8(param_1);
  __dest = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(__dest,local_78,99);
  __dest[99] = '\0';
  FUN_001024d0(__dest);
  free(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a36(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




bool FUN_00102ba5(pthread_t *param_1)

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




void FUN_001029e6(void)

{
  return;
}




undefined8 FUN_00102ad8(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102aa1,local_18);
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




void FUN_00101871(void)

{
  long in_FS_OFFSET;
  undefined *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101aac(local_58);
  local_60 = (undefined *)0x0;
  local_60 = (undefined *)malloc(100);
  if (local_60 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_60 = 0;
                    /* try { // try from 001018d7 to 00101914 has its CatchHandler @ 00101960 */
  FUN_00101b64(local_58,&local_60);
  FUN_00101b64(local_58,&local_60);
  FUN_00101b64(local_58,&local_60);
  FUN_00101b9e(local_38,local_58);
                    /* try { // try from 0010191c to 00101920 has its CatchHandler @ 0010194b */
  FUN_00101550(local_38);
  FUN_00101acc(local_38);
  FUN_00101acc(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001020e8(undefined8 param_1)

{
  return param_1;
}




void FUN_001016e8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001024f6(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001016c6(undefined8 *param_1)

{
  FUN_00101706(*param_1);
  return;
}




long * FUN_001016a2(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




undefined8 FUN_00101746(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102c00(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001029fc(void)

{
  return;
}




void FUN_0010227e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023e1(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_001025a6(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101f9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010225a(param_1);
  uVar2 = FUN_00101f1e(param_1);
  FUN_0010227e(local_38,uVar2,uVar1);
  uVar3 = FUN_00101f89(param_2);
  uVar4 = FUN_00101706(uVar1);
  FUN_001022f7(uVar2,uVar4,uVar3);
  FUN_00102334(local_38,0);
  FUN_001022b8(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




undefined8 FUN_001023e1(undefined8 param_1)

{
  return param_1;
}




void FUN_00102c9c(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_0010199a(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024d0("Calling good()...");
  FUN_0010198a();
  FUN_001024d0("Finished good()");
  FUN_001024d0("Calling bad()...");
  FUN_00101758();
  FUN_001024d0("Finished bad()");
  return 0;
}




undefined8 FUN_001019ff(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001015f8(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101656(param_1);
  FUN_001016a2(&local_18);
  FUN_001016c6(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101acc(undefined8 param_1)

{
  FUN_00101b38(param_1);
  return;
}




void FUN_001029f1(void)

{
  return;
}




void FUN_00102627(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102a07(void)

{
  return;
}




void FUN_00101b64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101656(param_1);
  FUN_00101d18(param_1,uVar1,param_2);
  return;
}




undefined8 FUN_001024b8(void)

{
  return 0x555555555555555;
}




void FUN_00102a6a(void)

{
  return;
}




void FUN_00101aac(undefined8 param_1)

{
  FUN_00101a8c(param_1);
  return;
}




undefined8 FUN_00101e64(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010213c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101f0e(void)

{
  return;
}




undefined8 FUN_00101d79(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102090(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




int FUN_001029c1(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_0010215a(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102a49(void)

{
  return;
}




undefined8 FUN_00101e14(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010213c(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001022b8(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102227(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102652(undefined4 param_1)

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




void FUN_00101c6a(undefined8 param_1)

{
  FUN_00101f0e(param_1);
  return;
}




void FUN_00101d18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101f89(param_3);
  p_Var2 = (_List_node_base *)FUN_00101f9c(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00102066(param_1,1);
  return;
}




void FUN_001021a4(undefined8 *param_1)

{
  FUN_0010236a(*param_1);
  return;
}




void FUN_001023f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101f89(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001019ff(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102a28(void)

{
  return;
}




void FUN_00102a8b(void)

{
  return;
}




void FUN_00102aa1(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102a1d(void)

{
  return;
}




void FUN_00102a3e(void)

{
  return;
}




void FUN_0010238c(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102550(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102cbb(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 * FUN_00102180(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_0010213c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010198a(void)

{
  FUN_00101871();
  return;
}




void FUN_00101a16(undefined8 param_1)

{
  FUN_00101a36(param_1);
  return;
}




void FUN_001025d1(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010236a(long param_1)

{
  FUN_00102438(param_1 + 0x10);
  return;
}




void FUN_00102a96(void)

{
  return;
}




void FUN_00101728(undefined8 param_1)

{
  FUN_00101746(param_1);
  return;
}




void FUN_00101f30(undefined8 param_1,undefined8 param_2)

{
  FUN_00102214(param_1,param_2);
  return;
}




void FUN_001020fa(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020e8(param_2);
  FUN_001020be(param_1,uVar1);
  FUN_00101a16(param_1);
  return;
}




void FUN_00101ddc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020e8(param_2);
  FUN_001020fa(param_1,uVar1);
  return;
}




void FUN_0010225a(undefined8 param_1)

{
  FUN_001023b3(param_1,1);
  return;
}




undefined8 FUN_001029b2(void)

{
  return 0;
}




/* WARNING: Removing unreachable block (ram,0x00101403) */
/* WARNING: Removing unreachable block (ram,0x0010140f) */

void FUN_001013f0(void)

{
  return;
}




void FUN_00102214(void)

{
  return;
}




long FUN_00102334(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_001025fc(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




ulong FUN_001028c4(long param_1,ulong param_2,long param_3)

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




void FUN_001023b3(undefined8 param_1,undefined8 param_2)

{
  FUN_00102456(param_1,param_2,0);
  return;
}




undefined8 FUN_00101656(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001016e8(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_0010215a(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001021a4(&local_18);
    FUN_001021c6(local_10,uVar2);
    FUN_00102180(&local_18);
  }
  return;
}




void FUN_00101b18(undefined8 param_1)

{
  FUN_00101c8a(param_1);
  return;
}




void FUN_00101b9e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101dca(param_2);
  FUN_00101d79(&local_21,uVar1);
  FUN_00101ddc(param_1,&local_21);
  FUN_00101b18(&local_21);
  uVar1 = FUN_00101e64(param_2);
  uVar2 = FUN_00101e14(param_2);
                    /* try { // try from 00101c2a to 00101c2e has its CatchHandler @ 00101c31 */
  FUN_00101eb0(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101c9a(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101706(local_20);
    uVar3 = FUN_00101f1e(param_1);
    FUN_00101f30(uVar3,uVar2);
    FUN_00101f5a(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_001026ff(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001026d4(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102a54(void)

{
  return;
}



