
void FUN_00102296(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023f9(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef8)();
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e3) */
/* WARNING: Removing unreachable block (ram,0x001013ef) */

void FUN_001013d0(void)

{
  return;
}




void FUN_001026ec(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010230f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fa1(param_3);
  FUN_0010240c(param_1,param_2,uVar1);
  return;
}




void FUN_0010246e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001024d0(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00101cb2(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101752(local_20);
    uVar3 = FUN_00101f36(param_1);
    FUN_00101f48(uVar3,uVar2);
    FUN_00101f72(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00102cb4(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001021de(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101fa1(param_2);
  uVar2 = FUN_001016a2(param_1);
  FUN_00101d30(param_1,uVar2,uVar1);
  return;
}




void FUN_00101ac4(undefined8 param_1)

{
  FUN_00101aa4(param_1);
  return;
}




void FUN_00102ab9(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00101e7c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102154(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010236e(void)

{
  return;
}




void FUN_00101752(long param_1)

{
  FUN_00101774(param_1 + 0x10);
  return;
}




undefined8 FUN_00101de2(undefined8 param_1)

{
  return param_1;
}




void FUN_001029f3(void)

{
  return;
}




void FUN_00102154(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00101fb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102272(param_1);
  uVar2 = FUN_00101f36(param_1);
  FUN_00102296(local_38,uVar2,uVar1);
  uVar3 = FUN_00101fa1(param_2);
  uVar4 = FUN_00101752(uVar1);
  FUN_0010230f(uVar2,uVar4,uVar3);
  FUN_0010234c(local_38,0);
  FUN_001022d0(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102a2a(void)

{
  return;
}




undefined8 FUN_00102c3b(undefined8 *param_1)

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




void FUN_00101774(undefined8 param_1)

{
  FUN_00101792(param_1);
  return;
}




void FUN_001023a4(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102aae(void)

{
  return;
}




void FUN_00102a1f(void)

{
  return;
}




undefined8 FUN_00102c18(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102a6c(void)

{
  return;
}




void FUN_00101644(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_001016a2(param_1);
  FUN_001016ee(&local_18);
  FUN_00101712(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a4e(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00102272(undefined8 param_1)

{
  FUN_001023cb(param_1,1);
  return;
}




void FUN_0010222c(void)

{
  return;
}




void FUN_00101734(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101489(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long in_FS_OFFSET;
  byte bVar4;
  ulong local_1b8;
  undefined8 local_1a8 [51];
  long local_10;
  
  bVar4 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined8 *)FUN_00101644(param_1);
  puVar1 = (undefined4 *)*puVar2;
  puVar2 = local_1a8;
  for (lVar3 = 0x32; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar4 * -2 + 1;
  }
  for (local_1b8 = 0; local_1b8 < 100; local_1b8 = local_1b8 + 1) {
    puVar1[local_1b8] = *(undefined4 *)((long)local_1a8 + local_1b8 * 4);
  }
  FUN_00102540(*puVar1);
  if (puVar1 != (undefined4 *)0x0) {
    operator_delete__(puVar1);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001019b2(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024e8("Calling good()...");
  FUN_001019a2();
  FUN_001024e8("Finished good()");
  FUN_001024e8("Calling bad()...");
  FUN_001017a4();
  FUN_001024e8("Finished bad()");
  return 0;
}




void FUN_0010266a(undefined4 param_1)

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




undefined8 FUN_001016a2(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101734(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102540(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101b30(undefined8 param_1)

{
  FUN_00101ca2(param_1);
  return;
}




void FUN_0010263f(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101f26(void)

{
  return;
}




void FUN_00102aa3(void)

{
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




int FUN_001029d9(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102cd3(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101c82(undefined8 param_1)

{
  FUN_00101f26(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101424) */
/* WARNING: Removing unreachable block (ram,0x00101430) */

void FUN_00101400(void)

{
  return;
}




void FUN_00101aa4(undefined8 param_1)

{
  FUN_00101b04(param_1);
  return;
}




void FUN_00102a40(void)

{
  return;
}




void FUN_00101f72(undefined8 param_1,undefined8 param_2)

{
  FUN_0010223f(param_1,param_2,1);
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




ulong FUN_001027d8(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_001023f9(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102172(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




undefined8 FUN_00102af0(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102ab9,local_18);
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




void FUN_00101ae4(undefined8 param_1)

{
  FUN_00101b50(param_1);
  return;
}




long * FUN_001016ee(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




undefined8 FUN_001029bb(void)

{
  return 1;
}




void FUN_00102cf2(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




ulong FUN_001028dc(long param_1,ulong param_2,long param_3)

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




void FUN_001029fe(void)

{
  return;
}




undefined8 FUN_001024be(undefined8 param_1)

{
  return param_1;
}




void FUN_001023cb(undefined8 param_1,undefined8 param_2)

{
  FUN_0010246e(param_1,param_2,0);
  return;
}




undefined8 FUN_00102100(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001029ca(void)

{
  return 0;
}




void FUN_00101f48(undefined8 param_1,undefined8 param_2)

{
  FUN_0010222c(param_1,param_2);
  return;
}




void FUN_001021bc(undefined8 *param_1)

{
  FUN_00102382(*param_1);
  return;
}




void FUN_00101ca2(void)

{
  return;
}




void FUN_00102112(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102100(param_2);
  FUN_001020d6(param_1,uVar1);
  FUN_00101a2e(param_1);
  return;
}




void FUN_001025be(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001018a3(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ac4(local_58);
  local_60 = (void *)0x0;
                    /* try { // try from 001018d8 to 0010192c has its CatchHandler @ 00101978 */
  local_60 = operator_new__(400);
  FUN_00101b7c(local_58,&local_60);
  FUN_00101b7c(local_58,&local_60);
  FUN_00101b7c(local_58,&local_60);
  FUN_00101bb6(local_38,local_58);
                    /* try { // try from 00101934 to 00101938 has its CatchHandler @ 00101963 */
  FUN_00101566(local_38);
  FUN_00101ae4(local_38);
  FUN_00101ae4(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101b50(undefined8 param_1)

{
  FUN_00101cb2(param_1);
  FUN_00101a84(param_1);
  return;
}




void FUN_001020d6(undefined8 param_1,undefined8 param_2)

{
  FUN_0010236e(param_1,param_2);
  return;
}




void FUN_00101a84(undefined8 param_1)

{
  FUN_00101b30(param_1);
  return;
}




void FUN_001022d0(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_0010223f(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102594(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




bool FUN_00102bbd(pthread_t *param_1)

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




void FUN_0010223f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001023a4(param_1,param_2,param_3);
  return;
}




void FUN_00102614(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010207e(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00101b04(undefined8 param_1)

{
  FUN_00101c82(param_1);
  FUN_00101a2e(param_1);
  return;
}




void FUN_00101bb6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101de2(param_2);
  FUN_00101d91(&local_21,uVar1);
  FUN_00101df4(param_1,&local_21);
  FUN_00101b30(&local_21);
  uVar1 = FUN_00101e7c(param_2);
  uVar2 = FUN_00101e2c(param_2);
                    /* try { // try from 00101c42 to 00101c46 has its CatchHandler @ 00101c49 */
  FUN_00101ec8(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101712(undefined8 *param_1)

{
  FUN_00101752(*param_1);
  return;
}




undefined8 FUN_00101fa1(undefined8 param_1)

{
  return param_1;
}




void FUN_00101d30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101fa1(param_3);
  p_Var2 = (_List_node_base *)FUN_00101fb4(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_0010207e(param_1,1);
  return;
}




void FUN_00102a14(void)

{
  return;
}




void FUN_001026c4(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101e2c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102154(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 * FUN_00102198(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00101b7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001016a2(param_1);
  FUN_00101d30(param_1,uVar1,param_2);
  return;
}




undefined8 FUN_00101d91(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001020a8(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102a09(void)

{
  return;
}




void FUN_001017a4(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ac4(local_58);
  local_60 = (void *)0x0;
                    /* try { // try from 001017d9 to 0010182d has its CatchHandler @ 00101879 */
  local_60 = operator_new__(200);
  FUN_00101b7c(local_58,&local_60);
  FUN_00101b7c(local_58,&local_60);
  FUN_00101b7c(local_58,&local_60);
  FUN_00101bb6(local_38,local_58);
                    /* try { // try from 00101835 to 00101839 has its CatchHandler @ 00101864 */
  FUN_00101489(local_38);
  FUN_00101ae4(local_38);
  FUN_00101ae4(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102778(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102a35(void)

{
  return;
}




void FUN_00102a98(void)

{
  return;
}




void FUN_00102382(long param_1)

{
  FUN_00102450(param_1 + 0x10);
  return;
}




void FUN_0010250e(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101a2e(undefined8 param_1)

{
  FUN_00101a4e(param_1);
  return;
}




long FUN_0010234c(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102568(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102717(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_001024d0(void)

{
  return 0x555555555555555;
}




undefined8 FUN_00101f36(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a4b(void)

{
  return;
}




void FUN_00102a82(void)

{
  return;
}




void FUN_00102a56(void)

{
  return;
}




void FUN_00102a61(void)

{
  return;
}




void FUN_001024e8(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102172(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001021bc(&local_18);
    FUN_001021de(local_10,uVar2);
    FUN_00102198(&local_18);
  }
  return;
}




void FUN_00102450(undefined8 param_1)

{
  FUN_001024be(param_1);
  return;
}




undefined8 FUN_00101792(undefined8 param_1)

{
  return param_1;
}




void FUN_001025e9(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102d90(void)

{
  return;
}




void FUN_00102745(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00101a17(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010240c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101fa1(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a17(8,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_001020a8(undefined8 param_1,undefined8 param_2)

{
  FUN_001020d6(param_1,param_2);
  return param_1;
}




void FUN_001019a2(void)

{
  FUN_001018a3();
  return;
}




void FUN_00102a77(void)

{
  return;
}




void FUN_00102a8d(void)

{
  return;
}




void FUN_00101566(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long in_FS_OFFSET;
  byte bVar4;
  ulong local_1b8;
  undefined8 local_1a8 [51];
  long local_10;
  
  bVar4 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined8 *)FUN_00101644(param_1);
  puVar1 = (undefined4 *)*puVar2;
  puVar2 = local_1a8;
  for (lVar3 = 0x32; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar4 * -2 + 1;
  }
  for (local_1b8 = 0; local_1b8 < 100; local_1b8 = local_1b8 + 1) {
    puVar1[local_1b8] = *(undefined4 *)((long)local_1a8 + local_1b8 * 4);
  }
  FUN_00102540(*puVar1);
  if (puVar1 != (undefined4 *)0x0) {
    operator_delete__(puVar1);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101df4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102100(param_2);
  FUN_00102112(param_1,uVar1);
  return;
}



