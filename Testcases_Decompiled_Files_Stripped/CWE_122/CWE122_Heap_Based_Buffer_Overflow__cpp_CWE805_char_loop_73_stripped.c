
undefined8 FUN_00101bda(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ef2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef0)();
  return;
}




void FUN_00101816(undefined8 param_1)

{
  FUN_00101994(param_1);
  FUN_00101740(param_1);
  return;
}




void FUN_0010212a(void)

{
  return;
}




void FUN_0010188e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101a42(param_1);
  FUN_00101a8e(param_1,uVar1,param_2);
  return;
}




ulong FUN_001027d7(long param_1,ulong param_2,long param_3)

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




void FUN_00101cf2(undefined8 param_1,undefined8 param_2)

{
  FUN_00101ffb(param_1,param_2,1);
  return;
}




void FUN_00102a4a(void)

{
  return;
}




undefined8 FUN_00102aef(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102ab8,local_18);
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




undefined8 * FUN_00101f36(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00102a6b(void)

{
  return;
}




void FUN_0010263e(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101e9e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102160(undefined8 param_1)

{
  return param_1;
}




void FUN_0010202e(undefined8 param_1)

{
  FUN_00102199(param_1,1);
  return;
}




void FUN_0010213e(long param_1)

{
  FUN_0010221e(param_1 + 0x10);
  return;
}




void FUN_001016b5(void)

{
  FUN_001015af();
  return;
}




void FUN_00102a29(void)

{
  return;
}




void FUN_001029fd(void)

{
  return;
}




void FUN_0010208c(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00101ffb(*param_1,param_1[1],1);
  }
  return;
}




undefined8 FUN_0010228c(undefined8 param_1)

{
  return param_1;
}




void FUN_00102aa2(void)

{
  return;
}




void FUN_00101c84(void)

{
  return;
}




void FUN_00102a1e(void)

{
  return;
}




undefined8 FUN_00101aef(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e46(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102744(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102cb3(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102613(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_001016c5(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024e7("Calling good()...");
  FUN_001016b5();
  FUN_001024e7("Finished good()");
  FUN_001024e7("Calling bad()...");
  FUN_001014a9();
  FUN_001024e7("Finished bad()");
  return 0;
}




void FUN_00102669(undefined4 param_1)

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




void FUN_00102cf1(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001024c6(undefined8 *param_1)

{
  FUN_00101c94(*param_1);
  return;
}




void FUN_0010250d(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001026eb(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101b40(undefined8 param_1)

{
  return param_1;
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




void FUN_00101740(undefined8 param_1)

{
  FUN_00101760(param_1);
  return;
}




void FUN_001022b6(undefined8 param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  ulong local_88;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined8 *)FUN_00102444(param_1);
  pvVar1 = (void *)*puVar2;
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_88 = 0; local_88 < 100; local_88 = local_88 + 1) {
    *(undefined *)((long)pvVar1 + local_88) = local_78[local_88];
  }
  *(undefined *)((long)pvVar1 + 99) = 0;
  FUN_001024e7(pvVar1);
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a34(void)

{
  return;
}




void FUN_001020cb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d40(param_3);
  FUN_001021da(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_0010172a(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101a8e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101d40(param_3);
  p_Var2 = (_List_node_base *)FUN_00101d52(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101e1c(param_1,1);
  return;
}




void FUN_00102a76(void)

{
  return;
}




void FUN_001018c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101b40(param_2);
  FUN_00101aef(&local_21,uVar1);
  FUN_00101b52(param_1,&local_21);
  FUN_00101842(&local_21);
  uVar1 = FUN_00101bda(param_2);
  uVar2 = FUN_00101b8a(param_2);
                    /* try { // try from 00101954 to 00101958 has its CatchHandler @ 0010195b */
  FUN_00101c26(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102172(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001017f6(undefined8 param_1)

{
  FUN_00101862(param_1);
  return;
}




void FUN_00102716(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001017d6(undefined8 param_1)

{
  FUN_001017b6(param_1);
  return;
}




void FUN_001017b6(undefined8 param_1)

{
  FUN_00101816(param_1);
  return;
}




void FUN_00101862(undefined8 param_1)

{
  FUN_001019c4(param_1);
  FUN_00101796(param_1);
  return;
}




void FUN_00101eb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e9e(param_2);
  FUN_00101e74(param_1,uVar1);
  FUN_00101740(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101444) */
/* WARNING: Removing unreachable block (ram,0x00101450) */

void FUN_00101420(void)

{
  return;
}




void FUN_00102a8c(void)

{
  return;
}




void FUN_00102444(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101a42(param_1);
  FUN_001024a2(&local_18);
  FUN_001024c6(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_001028db(long param_1,ulong param_2,long param_3)

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




long FUN_00102108(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_001025bd(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101403) */
/* WARNING: Removing unreachable block (ram,0x0010140f) */

void FUN_001013f0(void)

{
  return;
}




void FUN_001019b4(void)

{
  return;
}




void FUN_001019c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101c94(local_20);
    uVar3 = FUN_00101cb6(param_1);
    FUN_00101cc8(uVar3,uVar2);
    FUN_00101cf2(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00101760(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




undefined8 FUN_00101b8a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ef2(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102a81(void)

{
  return;
}




int FUN_001029d8(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102a97(void)

{
  return;
}




void FUN_00101c94(long param_1)

{
  FUN_00101fca(param_1 + 0x10);
  return;
}




void FUN_001026c3(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102cd2(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101b52(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e9e(param_2);
  FUN_00101eb0(param_1,uVar1);
  return;
}




undefined8 FUN_00101e46(undefined8 param_1,undefined8 param_2)

{
  FUN_00101e74(param_1,param_2);
  return param_1;
}




void FUN_00101fca(undefined8 param_1)

{
  FUN_00102160(param_1);
  return;
}




void FUN_00101ffb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102172(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101f10(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102a60(void)

{
  return;
}




void FUN_001021da(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101d40(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_0010172a(8,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_00102c17(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101f7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101d40(param_2);
  uVar2 = FUN_00101a42(param_1);
  FUN_00101a8e(param_1,uVar2,uVar1);
  return;
}




long * FUN_001024a2(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_001029f2(void)

{
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




void FUN_00101cc8(undefined8 param_1,undefined8 param_2)

{
  FUN_00101fe8(param_1,param_2);
  return;
}




void FUN_00101e74(undefined8 param_1,undefined8 param_2)

{
  FUN_0010212a(param_1,param_2);
  return;
}




void FUN_0010223c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010229e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001025e8(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102ab8(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102d90(void)

{
  return;
}




void FUN_00101e1c(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102aad(void)

{
  return;
}




bool FUN_00102bbc(pthread_t *param_1)

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




void FUN_00102567(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102777(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010221e(undefined8 param_1)

{
  FUN_0010228c(param_1);
  return;
}




undefined8 FUN_001021c7(undefined8 param_1)

{
  return param_1;
}




void FUN_00101994(undefined8 param_1)

{
  FUN_00101c84(param_1);
  return;
}




undefined8 FUN_00101a42(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d22(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001029ba(void)

{
  return 1;
}




undefined8 FUN_00101d40(undefined8 param_1)

{
  return param_1;
}




void FUN_0010253f(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001014a9(void)

{
  long in_FS_OFFSET;
  undefined *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001017d6(local_58);
  local_60 = (undefined *)0x0;
                    /* try { // try from 001014de to 00101539 has its CatchHandler @ 00101585 */
  local_60 = (undefined *)operator_new__(0x32);
  *local_60 = 0;
  FUN_0010188e(local_58,&local_60);
  FUN_0010188e(local_58,&local_60);
  FUN_0010188e(local_58,&local_60);
  FUN_001018c8(local_38,local_58);
                    /* try { // try from 00101541 to 00101545 has its CatchHandler @ 00101570 */
  FUN_001022b6(local_38);
  FUN_001017f6(local_38);
  FUN_001017f6(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101842(undefined8 param_1)

{
  FUN_001019b4(param_1);
  return;
}




void FUN_00102052(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021c7(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00101ef2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102199(undefined8 param_1,undefined8 param_2)

{
  FUN_0010223c(param_1,param_2,0);
  return;
}




void FUN_00101f5a(undefined8 *param_1)

{
  FUN_0010213e(*param_1);
  return;
}




void FUN_0010237d(undefined8 param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  ulong local_88;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined8 *)FUN_00102444(param_1);
  pvVar1 = (void *)*puVar2;
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_88 = 0; local_88 < 100; local_88 = local_88 + 1) {
    *(undefined *)((long)pvVar1 + local_88) = local_78[local_88];
  }
  *(undefined *)((long)pvVar1 + 99) = 0;
  FUN_001024e7(pvVar1);
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a55(void)

{
  return;
}




void FUN_001015af(void)

{
  long in_FS_OFFSET;
  undefined *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001017d6(local_58);
  local_60 = (undefined *)0x0;
                    /* try { // try from 001015e4 to 0010163f has its CatchHandler @ 0010168b */
  local_60 = (undefined *)operator_new__(100);
  *local_60 = 0;
  FUN_0010188e(local_58,&local_60);
  FUN_0010188e(local_58,&local_60);
  FUN_0010188e(local_58,&local_60);
  FUN_001018c8(local_38,local_58);
                    /* try { // try from 00101647 to 0010164b has its CatchHandler @ 00101676 */
  FUN_0010237d(local_38);
  FUN_001017f6(local_38);
  FUN_001017f6(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010229e(void)

{
  return 0x555555555555555;
}




void FUN_001024e7(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_001029c9(void)

{
  return 0;
}




void FUN_00102a3f(void)

{
  return;
}




void FUN_00102593(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101796(undefined8 param_1)

{
  FUN_00101842(param_1);
  return;
}




void FUN_00101fe8(void)

{
  return;
}




void FUN_00101c26(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00101f10(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00101f5a(&local_18);
    FUN_00101f7c(local_10,uVar2);
    FUN_00101f36(&local_18);
  }
  return;
}




undefined8 FUN_00101cb6(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101d52(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010202e(param_1);
  uVar2 = FUN_00101cb6(param_1);
  FUN_00102052(local_38,uVar2,uVar1);
  uVar3 = FUN_00101d40(param_2);
  uVar4 = FUN_00101c94(uVar1);
  FUN_001020cb(uVar2,uVar4,uVar3);
  FUN_00102108(local_38,0);
  FUN_0010208c(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00101d22(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102a13(void)

{
  return;
}




void FUN_00102a08(void)

{
  return;
}




undefined8 FUN_00102c3a(undefined8 *param_1)

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



