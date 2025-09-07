
undefined8 FUN_00101ccc(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102034(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef8)();
  return;
}




void FUN_00101938(undefined8 param_1)

{
  FUN_001019a4(param_1);
  return;
}




void FUN_0010210c(undefined8 param_1)

{
  FUN_001022a2(param_1);
  return;
}




void FUN_001019a4(undefined8 param_1)

{
  FUN_00101b06(param_1);
  FUN_001018d8(param_1);
  return;
}




void FUN_0010280e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101e0a(undefined8 param_1,undefined8 param_2)

{
  FUN_0010212a(param_1,param_2);
  return;
}




int FUN_00102bfe(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102c86(void)

{
  return;
}




undefined8 FUN_00101e94(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102170(param_1);
  uVar2 = FUN_00101df8(param_1);
  FUN_00102194(local_38,uVar2,uVar1);
  uVar3 = FUN_00101e82(param_2);
  uVar4 = FUN_00101dd6(uVar1);
  FUN_0010220d(uVar2,uVar4,uVar3);
  FUN_0010224a(local_38,0);
  FUN_001021ce(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102c2e(void)

{
  return;
}




void FUN_00102ef8(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001026ec(undefined8 *param_1)

{
  FUN_00101dd6(*param_1);
  return;
}




void FUN_0010213d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001022b4(param_1,param_2,param_3);
  return;
}




void FUN_00102034(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010212a(void)

{
  return;
}




void FUN_001016b9(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  uint local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101918(local_58);
  local_5c = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_5c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_5c = rand();
    local_5c = local_5c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
                    /* try { // try from 0010173f to 0010177c has its CatchHandler @ 001017c8 */
  FUN_001019d0(local_58,&local_5c);
  FUN_001019d0(local_58,&local_5c);
  FUN_001019d0(local_58,&local_5c);
  FUN_00101a0a(local_38,local_58);
                    /* try { // try from 00101784 to 00101788 has its CatchHandler @ 001017b3 */
  FUN_00102592(local_38);
  FUN_00101938(local_38);
  FUN_00101938(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_00102b01(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030e4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010293c(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 * FUN_00102078(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00102280(long param_1)

{
  FUN_0010235e(param_1 + 0x10);
  return;
}




void FUN_00102c65(void)

{
  return;
}




void FUN_00101d68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102052(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010209c(&local_18);
    FUN_001020be(local_10,uVar2);
    FUN_00102078(&local_18);
  }
  return;
}




ulong FUN_001029fd(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030dc,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101e82(param_3);
  p_Var2 = (_List_node_base *)FUN_00101e94(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101f5e(param_1,1);
  return;
}




void FUN_001027b9(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102cb2(void)

{
  return;
}




long * FUN_001026c8(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_001017f2(void)

{
  FUN_001015c2();
  FUN_001016b9();
  return;
}




void FUN_0010270d(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102fc0(void)

{
  return;
}




void FUN_00102cc8(void)

{
  return;
}




void FUN_0010235e(undefined8 param_1)

{
  FUN_001023cc(param_1);
  return;
}




undefined8 FUN_001023cc(undefined8 param_1)

{
  return param_1;
}




void FUN_00102765(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101c31(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f88(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102cd3(void)

{
  return;
}




undefined8 FUN_0010186c(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001022b4(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00102be0(void)

{
  return 1;
}




void FUN_0010209c(undefined8 *param_1)

{
  FUN_00102280(*param_1);
  return;
}




undefined8 FUN_00101807(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010270d("Calling good()...");
  FUN_001017f2();
  FUN_0010270d("Finished good()");
  FUN_0010270d("Calling bad()...");
  FUN_00101489();
  FUN_0010270d("Finished bad()");
  return 0;
}




undefined8 FUN_00101b84(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e64(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102e60(undefined8 *param_1)

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




void FUN_00102c39(void)

{
  return;
}




undefined8 FUN_00102e3d(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001019d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b84(param_1);
  FUN_00101bd0(param_1,uVar1,param_2);
  return;
}




void FUN_00102170(undefined8 param_1)

{
  FUN_001022db(param_1,1);
  return;
}




void FUN_00101918(undefined8 param_1)

{
  FUN_001018f8(param_1);
  return;
}




void FUN_0010278d(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001018f8(undefined8 param_1)

{
  FUN_00101958(param_1);
  return;
}




void FUN_001018d8(undefined8 param_1)

{
  FUN_00101984(param_1);
  return;
}




void FUN_00101984(undefined8 param_1)

{
  FUN_00101af6(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101424) */
/* WARNING: Removing unreachable block (ram,0x00101430) */

void FUN_00101400(void)

{
  return;
}




void FUN_00102ed9(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102c4f(void)

{
  return;
}




undefined8 FUN_00102309(undefined8 param_1)

{
  return param_1;
}




void FUN_00102839(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001020be(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101e82(param_2);
  uVar2 = FUN_00101b84(param_1);
  FUN_00101bd0(param_1,uVar2,uVar1);
  return;
}




void FUN_00102592(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_0010266a(param_1);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_0010270d("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00102765(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e3) */
/* WARNING: Removing unreachable block (ram,0x001013ef) */

void FUN_001013d0(void)

{
  return;
}




void FUN_00102f17(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101ad6(undefined8 param_1)

{
  FUN_00101dc6(param_1);
  return;
}




void FUN_00101af6(void)

{
  return;
}




void FUN_00101882(undefined8 param_1)

{
  FUN_001018a2(param_1);
  return;
}




void FUN_00101c94(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fe0(param_2);
  FUN_00101ff2(param_1,uVar1);
  return;
}




void FUN_00102c44(void)

{
  return;
}




void FUN_001028e9(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102c5a(void)

{
  return;
}




void FUN_00101dc6(void)

{
  return;
}




void FUN_00102733(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102cbd(void)

{
  return;
}




undefined8 FUN_00101c82(undefined8 param_1)

{
  return param_1;
}




void FUN_00101fb6(undefined8 param_1,undefined8 param_2)

{
  FUN_0010226c(param_1,param_2);
  return;
}




void FUN_00101ff2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fe0(param_2);
  FUN_00101fb6(param_1,uVar1);
  FUN_00101882(param_1);
  return;
}




undefined8 FUN_00101e82(undefined8 param_1)

{
  return param_1;
}




void FUN_00102c23(void)

{
  return;
}




void FUN_0010220d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e82(param_3);
  FUN_0010231c(param_1,param_2,uVar1);
  return;
}




void FUN_00102c9c(void)

{
  return;
}




undefined8 FUN_00101f88(undefined8 param_1,undefined8 param_2)

{
  FUN_00101fb6(param_1,param_2);
  return param_1;
}




void FUN_0010231c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00101e82(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_0010186c(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102911(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
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




undefined8 FUN_00101df8(undefined8 param_1)

{
  return param_1;
}




void FUN_00101e64(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010226c(void)

{
  return;
}




void FUN_0010266a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101b84(param_1);
  FUN_001026c8(&local_18);
  FUN_001026ec(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102c7b(void)

{
  return;
}




void FUN_00102cde(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




bool FUN_00102de2(pthread_t *param_1)

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




void FUN_00102c70(void)

{
  return;
}




void FUN_00102c91(void)

{
  return;
}




void FUN_001023f6(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_0010266a(param_1);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_0010270d("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00102765(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




void FUN_001027e3(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102f50(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




long FUN_0010224a(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_001021ce(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_0010213d(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00101a0a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101c82(param_2);
  FUN_00101c31(&local_21,uVar1);
  FUN_00101c94(param_1,&local_21);
  FUN_00101984(&local_21);
  uVar1 = FUN_00101d1c(param_2);
  uVar2 = FUN_00101ccc(param_2);
                    /* try { // try from 00101a96 to 00101a9a has its CatchHandler @ 00101a9d */
  FUN_00101d68(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101b06(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101dd6(local_20);
    uVar3 = FUN_00101df8(param_1);
    FUN_00101e0a(uVar3,uVar2);
    FUN_00101e34(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00102864(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001023de(void)

{
  return 0x555555555555555;
}




void FUN_00101489(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  uint local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101918(local_58);
  local_5c = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_5c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_5c = rand();
    local_5c = local_5c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
                    /* try { // try from 0010150f to 0010154c has its CatchHandler @ 00101598 */
  FUN_001019d0(local_58,&local_5c);
  FUN_001019d0(local_58,&local_5c);
  FUN_001019d0(local_58,&local_5c);
  FUN_00101a0a(local_38,local_58);
                    /* try { // try from 00101554 to 00101558 has its CatchHandler @ 00101583 */
  FUN_001023f6(local_38);
  FUN_00101938(local_38);
  FUN_00101938(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102d15(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102cde,local_18);
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




void FUN_00101958(undefined8 param_1)

{
  FUN_00101ad6(param_1);
  FUN_00101882(param_1);
  return;
}




undefined8 FUN_00102052(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102194(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102309(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00101f5e(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_001022db(undefined8 param_1,undefined8 param_2)

{
  FUN_0010237c(param_1,param_2,0);
  return;
}




void FUN_00102c18(void)

{
  return;
}




void FUN_001015c2(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101918(local_58);
  local_5c = 7;
                    /* try { // try from 00101606 to 00101643 has its CatchHandler @ 0010168f */
  FUN_001019d0(local_58,&local_5c);
  FUN_001019d0(local_58,&local_5c);
  FUN_001019d0(local_58,&local_5c);
  FUN_00101a0a(local_38,local_58);
                    /* try { // try from 0010164b to 0010164f has its CatchHandler @ 0010167a */
  FUN_001024c4(local_38);
  FUN_00101938(local_38);
  FUN_00101938(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001022a2(undefined8 param_1)

{
  return param_1;
}




void FUN_0010237c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001023de(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_0010288f(undefined4 param_1)

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




undefined8 FUN_00102bef(void)

{
  return 0;
}




void FUN_001024c4(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_0010266a(param_1);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_0010270d("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00102765(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




void FUN_001018a2(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




undefined8 FUN_00101fe0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101d1c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102034(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101dd6(long param_1)

{
  FUN_0010210c(param_1 + 0x10);
  return;
}




void FUN_00101e34(undefined8 param_1,undefined8 param_2)

{
  FUN_0010213d(param_1,param_2,1);
  return;
}




void FUN_0010299d(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010296a(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102ca7(void)

{
  return;
}



