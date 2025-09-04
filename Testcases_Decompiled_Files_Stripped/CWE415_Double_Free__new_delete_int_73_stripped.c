
void FUN_00101f92(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f80(param_2);
  FUN_00101f56(param_1,uVar1);
  FUN_00101822(param_1);
  return;
}




void FUN_001018b8(undefined8 param_1)

{
  FUN_00101898(param_1);
  return;
}




undefined8 FUN_00101cbc(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101fd4(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102300(undefined8 param_1)

{
  FUN_0010236e(param_1);
  return;
}




void FUN_00101d76(long param_1)

{
  FUN_001020ac(param_1 + 0x10);
  return;
}




void FUN_001029ef(void)

{
  return;
}




void FUN_001020ac(undefined8 param_1)

{
  FUN_00102242(param_1);
  return;
}




void FUN_00102a7e(void)

{
  return;
}




void FUN_00102ce3(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f00)();
  return;
}




void FUN_00102134(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022a9(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00102a9f(void)

{
  return;
}




void FUN_00101842(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00102769(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_0010236e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102242(undefined8 param_1)

{
  return param_1;
}




void FUN_0010231e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102380(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00101a76(undefined8 param_1)

{
  FUN_00101d66(param_1);
  return;
}




void FUN_00102a5d(void)

{
  return;
}




void FUN_00102a31(void)

{
  return;
}




void FUN_0010227b(undefined8 param_1,undefined8 param_2)

{
  FUN_0010231e(param_1,param_2,0);
  return;
}




void FUN_001024b8(undefined8 *param_1)

{
  FUN_00101d76(*param_1);
  return;
}




undefined8 FUN_00102c2c(undefined8 *param_1)

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




undefined8 FUN_00101ff2(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102a52(void)

{
  return;
}




void FUN_00101efe(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




int FUN_001029ca(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102736(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101a96(void)

{
  return;
}




ulong FUN_001027c9(long param_1,ulong param_2,long param_3)

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




void FUN_001025af(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102605(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_001029ac(void)

{
  return 1;
}




void FUN_0010167d(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001018b8(local_58);
  local_60 = (void *)0x0;
                    /* try { // try from 001016b2 to 0010171c has its CatchHandler @ 00101768 */
  local_60 = operator_new(4);
  if (local_60 != (void *)0x0) {
    operator_delete(local_60,4);
  }
  FUN_00101970(local_58,&local_60);
  FUN_00101970(local_58,&local_60);
  FUN_00101970(local_58,&local_60);
  FUN_001019aa(local_38,local_58);
                    /* try { // try from 00101724 to 00101728 has its CatchHandler @ 00101753 */
  FUN_00102410(local_38);
  FUN_001018d8(local_38);
  FUN_001018d8(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101f28(undefined8 param_1,undefined8 param_2)

{
  FUN_00101f56(param_1,param_2);
  return param_1;
}




void FUN_00101898(undefined8 param_1)

{
  FUN_001018f8(param_1);
  return;
}




undefined8 FUN_00101b24(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e04(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001024ff(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102a68(void)

{
  return;
}




undefined8 FUN_001022a9(undefined8 param_1)

{
  return param_1;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001013b0();
    DAT_00106020 = 1;
    return;
  }
  return;
}




void FUN_00101aa6(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101d76(local_20);
    uVar3 = FUN_00101d98(param_1);
    FUN_00101daa(uVar3,uVar2);
    FUN_00101dd4(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




undefined8 FUN_00101e34(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102110(param_1);
  uVar2 = FUN_00101d98(param_1);
  FUN_00102134(local_38,uVar2,uVar1);
  uVar3 = FUN_00101e22(param_2);
  uVar4 = FUN_00101d76(uVar1);
  FUN_001021ad(uVar2,uVar4,uVar3);
  FUN_001021ea(local_38,0);
  FUN_0010216e(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




/* WARNING: Removing unreachable block (ram,0x001013c3) */
/* WARNING: Removing unreachable block (ram,0x001013cf) */

void FUN_001013b0(void)

{
  return;
}




void FUN_00102aaa(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00101d98(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102380(void)

{
  return 0x555555555555555;
}




undefined8 FUN_00101c6c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101fd4(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001029bb(void)

{
  return 0;
}




void FUN_00101c34(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f80(param_2);
  FUN_00101f92(param_1,uVar1);
  return;
}




undefined8 FUN_00101c22(undefined8 param_1)

{
  return param_1;
}




void FUN_00101d66(void)

{
  return;
}




void FUN_00101822(undefined8 param_1)

{
  FUN_00101842(param_1);
  return;
}




void FUN_00101924(undefined8 param_1)

{
  FUN_00101a96(param_1);
  return;
}




undefined8 FUN_001017a7(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024d9("Calling good()...");
  FUN_00101792();
  FUN_001024d9("Finished good()");
  FUN_001024d9("Calling bad()...");
  FUN_00101469();
  FUN_001024d9("Finished bad()");
  return 0;
}




bool FUN_00102bae(pthread_t *param_1)

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




void FUN_00102559(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001029fa(void)

{
  return;
}




void FUN_001022bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101e22(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_0010180c(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_001026dd(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001018f8(undefined8 param_1)

{
  FUN_00101a76(param_1);
  FUN_00101822(param_1);
  return;
}




void FUN_0010157e(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001018b8(local_58);
  local_60 = (void *)0x0;
                    /* try { // try from 001015b3 to 00101607 has its CatchHandler @ 00101653 */
  local_60 = operator_new(4);
  FUN_00101970(local_58,&local_60);
  FUN_00101970(local_58,&local_60);
  FUN_00101970(local_58,&local_60);
  FUN_001019aa(local_38,local_58);
                    /* try { // try from 0010160f to 00101613 has its CatchHandler @ 0010163e */
  FUN_001023d4(local_38);
  FUN_001018d8(local_38);
  FUN_001018d8(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101878(undefined8 param_1)

{
  FUN_00101924(param_1);
  return;
}




void FUN_00101dd4(undefined8 param_1,undefined8 param_2)

{
  FUN_001020dd(param_1,param_2,1);
  return;
}




void FUN_00101e04(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101b70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101e22(param_3);
  p_Var2 = (_List_node_base *)FUN_00101e34(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101efe(param_1,1);
  return;
}




undefined8 FUN_00101f80(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102ae1(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102aaa,local_18);
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




void FUN_00102a1b(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101404) */
/* WARNING: Removing unreachable block (ram,0x00101410) */

void FUN_001013e0(void)

{
  return;
}




undefined8 FUN_00102c09(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 * FUN_00102018(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




ulong FUN_001028cd(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_0010180c(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101f56(undefined8 param_1,undefined8 param_2)

{
  FUN_0010220c(param_1,param_2);
  return;
}




long FUN_001021ea(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102220(long param_1)

{
  FUN_00102300(param_1 + 0x10);
  return;
}




void FUN_00102110(undefined8 param_1)

{
  FUN_0010227b(param_1,1);
  return;
}




void FUN_00102a94(void)

{
  return;
}




void FUN_00102410(undefined8 param_1)

{
  FUN_00102436(param_1);
  return;
}




void FUN_00102d80(void)

{
  return;
}




void FUN_001021ad(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e22(param_3);
  FUN_001022bc(param_1,param_2,uVar1);
  return;
}




void FUN_00102585(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102a26(void)

{
  return;
}




void FUN_00101944(undefined8 param_1)

{
  FUN_00101aa6(param_1);
  FUN_00101878(param_1);
  return;
}




void FUN_0010205e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101e22(param_2);
  uVar2 = FUN_00101b24(param_1);
  FUN_00101b70(param_1,uVar2,uVar1);
  return;
}




void FUN_001020dd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102254(param_1,param_2,param_3);
  return;
}




long * FUN_00102494(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00102708(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102cc4(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102ca5(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
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




void FUN_0010265b(undefined4 param_1)

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




void FUN_001029e4(void)

{
  return;
}




void FUN_001018d8(undefined8 param_1)

{
  FUN_00101944(param_1);
  return;
}




void FUN_00102436(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101b24(param_1);
  FUN_00102494(&local_18);
  FUN_001024b8(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001023d4(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102436(param_1);
  if ((void *)*puVar1 != (void *)0x0) {
    operator_delete((void *)*puVar1,4);
  }
  return;
}




void FUN_00101daa(undefined8 param_1,undefined8 param_2)

{
  FUN_001020ca(param_1,param_2);
  return;
}




undefined8 FUN_00101e22(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a05(void)

{
  return;
}




void FUN_00102630(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101970(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b24(param_1);
  FUN_00101b70(param_1,uVar1,param_2);
  return;
}




void FUN_00101d08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00101ff2(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010203c(&local_18);
    FUN_0010205e(local_10,uVar2);
    FUN_00102018(&local_18);
  }
  return;
}




void FUN_00102254(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102398(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102436(param_1);
  if ((void *)*puVar1 != (void *)0x0) {
    operator_delete((void *)*puVar1,4);
  }
  return;
}




void FUN_0010216e(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001020dd(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102531(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102a89(void)

{
  return;
}




void FUN_001019aa(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101c22(param_2);
  FUN_00101bd1(&local_21,uVar1);
  FUN_00101c34(param_1,&local_21);
  FUN_00101924(&local_21);
  uVar1 = FUN_00101cbc(param_2);
  uVar2 = FUN_00101c6c(param_2);
                    /* try { // try from 00101a36 to 00101a3a has its CatchHandler @ 00101a3d */
  FUN_00101d08(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001024d9(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001025da(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102a10(void)

{
  return;
}




void FUN_00102a73(void)

{
  return;
}




void FUN_001026b5(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101bd1(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f28(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00101792(void)

{
  FUN_0010157e();
  FUN_0010167d();
  return;
}




void FUN_0010220c(void)

{
  return;
}




void FUN_00101469(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001018b8(local_58);
  local_60 = (void *)0x0;
                    /* try { // try from 0010149e to 00101508 has its CatchHandler @ 00101554 */
  local_60 = operator_new(4);
  if (local_60 != (void *)0x0) {
    operator_delete(local_60,4);
  }
  FUN_00101970(local_58,&local_60);
  FUN_00101970(local_58,&local_60);
  FUN_00101970(local_58,&local_60);
  FUN_001019aa(local_38,local_58);
                    /* try { // try from 00101510 to 00101514 has its CatchHandler @ 0010153f */
  FUN_00102398(local_38);
  FUN_001018d8(local_38);
  FUN_001018d8(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101fd4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010203c(undefined8 *param_1)

{
  FUN_00102220(*param_1);
  return;
}




void FUN_001020ca(void)

{
  return;
}




void FUN_00102a47(void)

{
  return;
}




void FUN_00102a3c(void)

{
  return;
}



