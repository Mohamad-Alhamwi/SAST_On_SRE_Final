
undefined8 FUN_00101d6f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102086(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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
  FUN_001024c6(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a2c(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_001021bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101f7f(param_2);
  uVar2 = FUN_001015fe(param_1);
  FUN_00101d0e(param_1,uVar2,uVar1);
  return;
}




void FUN_00101aa2(undefined8 param_1)

{
  FUN_00101a82(param_1);
  return;
}




void FUN_00102723(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101f04(void)

{
  return;
}




void FUN_00102a13(void)

{
  return;
}




void FUN_00102a8c(void)

{
  return;
}




undefined8 FUN_00101f7f(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a34(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e3) */
/* WARNING: Removing unreachable block (ram,0x001013ef) */

void FUN_001013d0(void)

{
  return;
}




void FUN_001025c7(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010221d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102382(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102ace(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102a97,local_18);
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




void FUN_001020f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020de(param_2);
  FUN_001020b4(param_1,uVar1);
  FUN_00101a0c(param_1);
  return;
}




void FUN_0010220a(void)

{
  return;
}




void FUN_001016ae(long param_1)

{
  FUN_001016d0(param_1 + 0x10);
  return;
}




void FUN_001029f2(void)

{
  return;
}




int FUN_001029b7(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00102150(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102360(long param_1)

{
  FUN_0010242e(param_1 + 0x10);
  return;
}




void FUN_00102a6b(void)

{
  return;
}




void FUN_00101dd2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020de(param_2);
  FUN_001020f0(param_1,uVar1);
  return;
}




void FUN_001029e7(void)

{
  return;
}




void FUN_00101c60(undefined8 param_1)

{
  FUN_00101f04(param_1);
  return;
}




void FUN_001026ca(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102c19(undefined8 *param_1)

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




void FUN_0010259c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001016d0(undefined8 param_1)

{
  FUN_001016ee(param_1);
  return;
}




void FUN_001025f2(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102cb1(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010244c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001024ae(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




undefined8 FUN_001024ae(void)

{
  return 0x555555555555555;
}




void FUN_00102648(undefined4 param_1)

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




void FUN_00101c80(void)

{
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




void FUN_00102cd0(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101700(void)

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
  FUN_00101aa2(local_c8);
  memset(local_88,0x41,99);
  local_25 = 0;
  local_d0 = auStack_90;
                    /* try { // try from 0010176b to 001017ba has its CatchHandler @ 00101812 */
  FUN_00101b5a(local_c8,&local_d0);
  FUN_00101b5a(local_c8,&local_d0);
  FUN_00101b5a(local_c8,&local_d0);
  FUN_00101b94(local_a8,local_c8);
                    /* try { // try from 001017c5 to 001017c9 has its CatchHandler @ 001017fa */
  FUN_00101489(local_a8);
  FUN_00101ac2(local_a8);
  FUN_00101ac2(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001023a9(undefined8 param_1,undefined8 param_2)

{
  FUN_0010244c(param_1,param_2,0);
  return;
}




void FUN_001029fd(void)

{
  return;
}




undefined8 * FUN_00102176(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




undefined8 FUN_001016ee(undefined8 param_1)

{
  return param_1;
}




void FUN_00101b94(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101dc0(param_2);
  FUN_00101d6f(&local_21,uVar1);
  FUN_00101dd2(param_1,&local_21);
  FUN_00101b0e(&local_21);
  uVar1 = FUN_00101e5a(param_2);
  uVar2 = FUN_00101e0a(param_2);
                    /* try { // try from 00101c20 to 00101c24 has its CatchHandler @ 00101c27 */
  FUN_00101ea6(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a3f(void)

{
  return;
}




void FUN_00101ac2(undefined8 param_1)

{
  FUN_00101b2e(param_1);
  return;
}




void FUN_00102250(undefined8 param_1)

{
  FUN_001023a9(param_1,1);
  return;
}




void FUN_00101a0c(undefined8 param_1)

{
  FUN_00101a2c(param_1);
  return;
}




void FUN_001026a2(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_001019f5(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00101990(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024c6("Calling good()...");
  FUN_00101980();
  FUN_001024c6("Finished good()");
  FUN_001024c6("Calling bad()...");
  FUN_00101700();
  FUN_001024c6("Finished bad()");
  return 0;
}




void FUN_00101a82(undefined8 param_1)

{
  FUN_00101ae2(param_1);
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




void FUN_00102a55(void)

{
  return;
}




void FUN_001023ea(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101f7f(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001019f5(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102756(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010219a(undefined8 *param_1)

{
  FUN_00102360(*param_1);
  return;
}




void FUN_00102546(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
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




/* WARNING: Removing unreachable block (ram,0x00101424) */
/* WARNING: Removing unreachable block (ram,0x00101430) */

void FUN_00101400(void)

{
  return;
}




void FUN_00101b0e(undefined8 param_1)

{
  FUN_00101c80(param_1);
  return;
}




void FUN_00101b2e(undefined8 param_1)

{
  FUN_00101c90(param_1);
  FUN_00101a62(param_1);
  return;
}




void FUN_00101842(void)

{
  long in_FS_OFFSET;
  undefined *local_d0;
  undefined local_c8 [32];
  undefined local_a8 [32];
  undefined local_88 [99];
  undefined local_25;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101aa2(local_c8);
  memset(local_88,0x41,99);
  local_25 = 0;
  local_d0 = local_88;
                    /* try { // try from 001018a9 to 001018f8 has its CatchHandler @ 00101950 */
  FUN_00101b5a(local_c8,&local_d0);
  FUN_00101b5a(local_c8,&local_d0);
  FUN_00101b5a(local_c8,&local_d0);
  FUN_00101b94(local_a8,local_c8);
                    /* try { // try from 00101903 to 00101907 has its CatchHandler @ 00101938 */
  FUN_00101514(local_a8);
  FUN_00101ac2(local_a8);
  FUN_00101ac2(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101d0e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101f7f(param_3);
  p_Var2 = (_List_node_base *)FUN_00101f92(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_0010205c(param_1,1);
  return;
}




void FUN_00102a4a(void)

{
  return;
}




undefined8 FUN_00102999(void)

{
  return 1;
}




void FUN_00102a60(void)

{
  return;
}




undefined8 FUN_00101e0a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102132(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010261d(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef8)();
  return;
}




void FUN_00101c90(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_001016ae(local_20);
    uVar3 = FUN_00101f14(param_1);
    FUN_00101f26(uVar3,uVar2);
    FUN_00101f50(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




undefined8 FUN_00102086(undefined8 param_1,undefined8 param_2)

{
  FUN_001020b4(param_1,param_2);
  return param_1;
}




void FUN_00102c92(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_001020de(undefined8 param_1)

{
  return param_1;
}




void FUN_00101f50(undefined8 param_1,undefined8 param_2)

{
  FUN_0010221d(param_1,param_2,1);
  return;
}




void FUN_00102a29(void)

{
  return;
}




void FUN_001022ed(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f7f(param_3);
  FUN_001023ea(param_1,param_2,uVar1);
  return;
}




bool FUN_00102b9b(pthread_t *param_1)

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




void FUN_0010205c(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_0010242e(undefined8 param_1)

{
  FUN_0010249c(param_1);
  return;
}




undefined8 FUN_001029a8(void)

{
  return 0;
}




long * FUN_0010164a(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00101ea6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102150(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010219a(&local_18);
    FUN_001021bc(local_10,uVar2);
    FUN_00102176(&local_18);
  }
  return;
}




void FUN_00101f26(undefined8 param_1,undefined8 param_2)

{
  FUN_0010220a(param_1,param_2);
  return;
}




void FUN_0010234c(void)

{
  return;
}




void FUN_00102572(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102a81(void)

{
  return;
}




void FUN_00102d00(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102a76(void)

{
  return;
}




void FUN_00102a97(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001024ec(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001026f5(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
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
  FUN_001024c6(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_0010232a(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_001022ae(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_0010221d(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00101ae2(undefined8 param_1)

{
  FUN_00101c60(param_1);
  FUN_00101a0c(param_1);
  return;
}




void FUN_00101b5a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001015fe(param_1);
  FUN_00101d0e(param_1,uVar1,param_2);
  return;
}




ulong FUN_001027b6(long param_1,ulong param_2,long param_3)

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




void FUN_001024c6(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010166e(undefined8 *param_1)

{
  FUN_001016ae(*param_1);
  return;
}




void FUN_00102d70(void)

{
  return;
}




void FUN_00101a62(undefined8 param_1)

{
  FUN_00101b0e(param_1);
  return;
}




void FUN_00102132(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102274(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023d7(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




undefined8 FUN_00101f92(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102250(param_1);
  uVar2 = FUN_00101f14(param_1);
  FUN_00102274(local_38,uVar2,uVar1);
  uVar3 = FUN_00101f7f(param_2);
  uVar4 = FUN_001016ae(uVar1);
  FUN_001022ed(uVar2,uVar4,uVar3);
  FUN_0010232a(local_38,0);
  FUN_001022ae(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




undefined8 FUN_001023d7(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a1e(void)

{
  return;
}




void FUN_00101690(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102382(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_0010249c(undefined8 param_1)

{
  return param_1;
}




ulong FUN_001028ba(long param_1,ulong param_2,long param_3)

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




void FUN_00102a08(void)

{
  return;
}




void FUN_0010251e(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101980(void)

{
  FUN_00101842();
  return;
}




void FUN_001020b4(undefined8 param_1,undefined8 param_2)

{
  FUN_0010234c(param_1,param_2);
  return;
}




undefined8 FUN_00101dc0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101e5a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102132(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101f14(undefined8 param_1)

{
  return param_1;
}




void FUN_001029dc(void)

{
  return;
}




void FUN_001029d1(void)

{
  return;
}




undefined8 FUN_00102bf6(void *param_1)

{
  free(param_1);
  return 1;
}



