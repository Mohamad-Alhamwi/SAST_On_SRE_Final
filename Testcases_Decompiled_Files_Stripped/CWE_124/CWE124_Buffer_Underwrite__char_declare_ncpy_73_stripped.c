
void FUN_00101d2e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101f9f(param_3);
  p_Var2 = (_List_node_base *)FUN_00101fb2(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_0010207c(param_1,1);
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




void FUN_00101a2c(undefined8 param_1)

{
  FUN_00101a4c(param_1);
  return;
}




void FUN_001021ba(undefined8 *param_1)

{
  FUN_00102380(*param_1);
  return;
}




void FUN_00101aa2(undefined8 param_1)

{
  FUN_00101b02(param_1);
  return;
}




void FUN_00102715(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101ec6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102170(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001021ba(&local_18);
    FUN_001021dc(local_10,uVar2);
    FUN_00102196(&local_18);
  }
  return;
}




void FUN_00102a28(void)

{
  return;
}




void FUN_00102aa1(void)

{
  return;
}




void FUN_00101f70(undefined8 param_1,undefined8 param_2)

{
  FUN_0010223d(param_1,param_2,1);
  return;
}




void FUN_00102a49(void)

{
  return;
}




void FUN_001025bc(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010222a(void)

{
  return;
}




undefined8 FUN_001020fe(undefined8 param_1)

{
  return param_1;
}




void FUN_001021dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101f9f(param_2);
  uVar2 = FUN_0010161e(param_1);
  FUN_00101d2e(param_1,uVar2,uVar1);
  return;
}




void FUN_001016b0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102a07(void)

{
  return;
}




undefined8 FUN_001029c8(void)

{
  return 0;
}




void FUN_00102152(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010236c(void)

{
  return;
}




void FUN_00102a80(void)

{
  return;
}




undefined8 FUN_00101de0(undefined8 param_1)

{
  return param_1;
}




void FUN_001029fc(void)

{
  return;
}




void FUN_00101bb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101de0(param_2);
  FUN_00101d8f(&local_21,uVar1);
  FUN_00101df2(param_1,&local_21);
  FUN_00101b2e(&local_21);
  uVar1 = FUN_00101e7a(param_2);
  uVar2 = FUN_00101e2a(param_2);
                    /* try { // try from 00101c40 to 00101c44 has its CatchHandler @ 00101c47 */
  FUN_00101ec6(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001026c2(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




bool FUN_00102bbb(pthread_t *param_1)

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




void FUN_00102592(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001016ce(long param_1)

{
  FUN_001016f0(param_1 + 0x10);
  return;
}




void FUN_001025e7(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00102c39(undefined8 *param_1)

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




void FUN_0010244e(undefined8 param_1)

{
  FUN_001024bc(param_1);
  return;
}




undefined8 FUN_001024bc(undefined8 param_1)

{
  return param_1;
}




void FUN_0010263d(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101c80(undefined8 param_1)

{
  FUN_00101f24(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101424) */
/* WARNING: Removing unreachable block (ram,0x00101430) */

void FUN_00101400(void)

{
  return;
}




void FUN_00102cb2(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_0010170e(undefined8 param_1)

{
  return param_1;
}




void FUN_001023a2(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102a12(void)

{
  return;
}




undefined8 FUN_00102170(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_001016f0(undefined8 param_1)

{
  FUN_0010170e(param_1);
  return;
}




void FUN_00101b7a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010161e(param_1);
  FUN_00101d2e(param_1,uVar1,param_2);
  return;
}




void FUN_00102a54(void)

{
  return;
}




void FUN_00102d90(void)

{
  return;
}




void FUN_00101ac2(undefined8 param_1)

{
  FUN_00101aa2(param_1);
  return;
}




void FUN_0010223d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001023a2(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101a15(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102668(undefined4 param_1)

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




undefined8 FUN_001019b0(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024e6("Calling good()...");
  FUN_001019a0();
  FUN_001024e6("Finished good()");
  FUN_001024e6("Calling bad()...");
  FUN_00101720();
  FUN_001024e6("Finished bad()");
  return 0;
}




void FUN_001019a0(void)

{
  FUN_00101862();
  return;
}




void FUN_00101a82(undefined8 param_1)

{
  FUN_00101b2e(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef8)();
  return;
}




void FUN_001015c0(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_0010161e(param_1);
  FUN_0010166a(&local_18);
  FUN_0010168e(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a6a(void)

{
  return;
}




undefined8 FUN_001023f7(undefined8 param_1)

{
  return param_1;
}




void FUN_00102743(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 * FUN_00102196(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_0010253e(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101524(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001015c0(param_1);
  __dest = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(__dest,local_78,99);
  __dest[99] = '\0';
  FUN_001024e6(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e3) */
/* WARNING: Removing unreachable block (ram,0x001013ef) */

void FUN_001013d0(void)

{
  return;
}




void FUN_00101b02(undefined8 param_1)

{
  FUN_00101c80(param_1);
  FUN_00101a2c(param_1);
  return;
}




void FUN_00101b2e(undefined8 param_1)

{
  FUN_00101ca0(param_1);
  return;
}




void FUN_00101720(void)

{
  long in_FS_OFFSET;
  undefined *local_d0;
  undefined local_c8 [32];
  undefined local_a8 [24];
  undefined auStack_90 [8];
  undefined local_88 [99];
  undefined local_25;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ac2(local_c8);
  memset(local_88,0x41,99);
  local_25 = 0;
  local_d0 = auStack_90;
                    /* try { // try from 0010178b to 001017da has its CatchHandler @ 00101832 */
  FUN_00101b7a(local_c8,&local_d0);
  FUN_00101b7a(local_c8,&local_d0);
  FUN_00101b7a(local_c8,&local_d0);
  FUN_00101bb4(local_a8,local_c8);
                    /* try { // try from 001017e5 to 001017e9 has its CatchHandler @ 0010181a */
  FUN_00101489(local_a8);
  FUN_00101ae2(local_a8);
  FUN_00101ae2(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101cb0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_001016ce(local_20);
    uVar3 = FUN_00101f34(param_1);
    FUN_00101f46(uVar3,uVar2);
    FUN_00101f70(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00102a5f(void)

{
  return;
}




ulong FUN_001028da(long param_1,ulong param_2,long param_3)

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




void FUN_00102a75(void)

{
  return;
}




void FUN_00101df2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020fe(param_2);
  FUN_00102110(param_1,uVar1);
  return;
}




void FUN_00102612(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00102c16(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101ca0(void)

{
  return;
}




void FUN_0010207c(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_001020d4(undefined8 param_1,undefined8 param_2)

{
  FUN_0010236c(param_1,param_2);
  return;
}




void FUN_00101f46(undefined8 param_1,undefined8 param_2)

{
  FUN_0010222a(param_1,param_2);
  return;
}




void FUN_00102a3e(void)

{
  return;
}




void FUN_001022ce(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_0010223d(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102ab7(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00101fb2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102270(param_1);
  uVar2 = FUN_00101f34(param_1);
  FUN_00102294(local_38,uVar2,uVar1);
  uVar3 = FUN_00101f9f(param_2);
  uVar4 = FUN_001016ce(uVar1);
  FUN_0010230d(uVar2,uVar4,uVar3);
  FUN_0010234a(local_38,0);
  FUN_001022ce(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_0010240a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101f9f(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a15(8,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_001029b9(void)

{
  return 1;
}




undefined8 FUN_0010161e(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001016b0(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101e7a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102152(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101f34(undefined8 param_1)

{
  return param_1;
}




long FUN_0010234a(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102566(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102a96(void)

{
  return;
}




void FUN_00102cd1(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102d20(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102a8b(void)

{
  return;
}




void FUN_00102aac(void)

{
  return;
}




void FUN_001024e6(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001026ea(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
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
  puVar1 = (undefined8 *)FUN_001015c0(param_1);
  __dest = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(__dest,local_78,99);
  __dest[99] = '\0';
  FUN_001024e6(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010230d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f9f(param_3);
  FUN_0010240a(param_1,param_2,uVar1);
  return;
}




void FUN_00102294(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023f7(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00101ae2(undefined8 param_1)

{
  FUN_00101b4e(param_1);
  return;
}




void FUN_00101b4e(undefined8 param_1)

{
  FUN_00101cb0(param_1);
  FUN_00101a82(param_1);
  return;
}




void FUN_00102776(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_001024ce(void)

{
  return 0x555555555555555;
}




long * FUN_0010166a(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00102cf0(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101a4c(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00102110(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020fe(param_2);
  FUN_001020d4(param_1,uVar1);
  FUN_00101a2c(param_1);
  return;
}




void FUN_00102270(undefined8 param_1)

{
  FUN_001023c9(param_1,1);
  return;
}




undefined8 FUN_00101f9f(undefined8 param_1)

{
  return param_1;
}




void FUN_001023c9(undefined8 param_1,undefined8 param_2)

{
  FUN_0010246c(param_1,param_2,0);
  return;
}




void FUN_00102a33(void)

{
  return;
}




void FUN_0010168e(undefined8 *param_1)

{
  FUN_001016ce(*param_1);
  return;
}




void FUN_00102380(long param_1)

{
  FUN_0010244e(param_1 + 0x10);
  return;
}




void FUN_0010246c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001024ce(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




ulong FUN_001027d6(long param_1,ulong param_2,long param_3)

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




void FUN_00102a1d(void)

{
  return;
}




void FUN_0010250c(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101862(void)

{
  long in_FS_OFFSET;
  undefined *local_d0;
  undefined local_c8 [32];
  undefined local_a8 [32];
  undefined local_88 [99];
  undefined local_25;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ac2(local_c8);
  memset(local_88,0x41,99);
  local_25 = 0;
  local_d0 = local_88;
                    /* try { // try from 001018c9 to 00101918 has its CatchHandler @ 00101970 */
  FUN_00101b7a(local_c8,&local_d0);
  FUN_00101b7a(local_c8,&local_d0);
  FUN_00101b7a(local_c8,&local_d0);
  FUN_00101bb4(local_a8,local_c8);
                    /* try { // try from 00101923 to 00101927 has its CatchHandler @ 00101958 */
  FUN_00101524(local_a8);
  FUN_00101ae2(local_a8);
  FUN_00101ae2(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001020a6(undefined8 param_1,undefined8 param_2)

{
  FUN_001020d4(param_1,param_2);
  return param_1;
}




undefined8 FUN_00101d8f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001020a6(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00101e2a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102152(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101f24(void)

{
  return;
}




void FUN_001029f1(void)

{
  return;
}




int FUN_001029d7(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00102aee(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102ab7,local_18);
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



